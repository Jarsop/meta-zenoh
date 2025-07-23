SUMMARY = "The Zenoh C API"
DESCRIPTION = "C binding based on the main Zenoh implementation written in Rust"
HOMEPAGE = "http://zenoh.io"
LICENSE = "EPL-2.0 | Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=530d837aca648e45704db71dedff39c4"

inherit cmake cargo pkgconfig

PACKAGES =+ "${PN}-examples"

SRC_URI = "\
    git://github.com/eclipse-zenoh/zenoh-c.git;protocol=https;nobranch=1 \
    file://0001-use-crates.io-registry.patch \
    file://0002-update-lockfiles.patch \
"

S = "${WORKDIR}/git"
B = "${S}"

ZENOHC_CARGO_FLAGS = "-v;--frozen"

PACKAGECONFIG ??= "\
    ${@["", "shared-memory"][bb.utils.to_boolean(d.getVar('ZENOH_SHARED_MEMORY', False))]} \
    ${@["", "unstable-api"][bb.utils.to_boolean(d.getVar('ZENOH_UNSTABLE_API', False))]} \
"
PACKAGECONFIG[vardeps] += "ZENOH_SHARED_MEMORY ZENOH_UNSTABLE_API"

PACKAGECONFIG[shared-memory] = "-DZENOHC_BUILD_WITH_SHARED_MEMORY=ON, -DZENOHC_BUILD_WITH_SHARED_MEMORY=OFF,,"
PACKAGECONFIG[unstable-api] = "-DZENOHC_BUILD_WITH_UNSTABLE_API=ON, -DZENOHC_BUILD_WITH_UNSTABLE_API=OFF,,"

EXTRA_OECMAKE = "\
    -DZENOHC_CARGO_FLAGS='${ZENOHC_CARGO_FLAGS}' \
    -DZENOHC_CUSTOM_TARGET=${RUST_HOST_SYS} \
    -DZENOHC_BUILD_IN_SOURCE_TREE=ON \
"

RUSTFLAGS:append = " -Cpanic=${RUST_PANIC_STRATEGY}"

# This is tricky, we need to call both cargo and cmake `do_configure` in order
# to configure properly the project.
do_configure() {
    cargo_common_do_configure
    cmake_do_configure
}
do_configure[postfuncs] += "cargo_common_do_patch_paths"

# Override progress handler with cargo style.
# As cmake.bbclass set progress handler with python anonymous function and 
# there are parsed at the end, we need to set it back to python function to
# override it.
python() {
    d.setVarFlag("do_compile", "progress", r"outof:\s+(\d+)/(\d+)")
}

# # This is tricky too, we want to use the CMake build system as it is the way
# # to build properly provided by the project.
do_compile() {
    export RUSTFLAGS="${RUSTFLAGS}"
    oe_cargo_fix_env
    cmake_do_compile
}

python() {
    generator = d.getVar("OECMAKE_GENERATOR")
    if "Unix Makefiles" in generator:
        d.setVarFlag("do_compile_examples", "progress", "percent")
    elif "Ninja" in generator:
        d.setVarFlag("do_compile_examples", "progress", r"outof:^\[(\d+)/(\d+)\]\s+")
}

addtask compile_examples after do_compile before do_install
do_compile_examples[dirs] = "${B}"
do_compile_examples() {
    cmake_runcmake_build --target examples
}

# Here we want to use the CMake install target
# and accord it to Yocto's needs as non-intrusive as possible
do_install() {
    cmake_do_install
    # Yocto requires shared libraries to have a version number
    # and consider .so as a symlink to the versioned library for the dev package.
    major="$(echo ${PV} | cut -d. -f1)"
    mv ${D}${libdir}/libzenohc.so ${D}${libdir}/libzenohc.so.${PV}
    cd ${D}${libdir}
    ln -s libzenohc.so.${PV} libzenohc.so.${major}
    ln -s libzenohc.so.${major} libzenohc.so

    install -d ${D}${bindir}
    for f in ${B}/target/${RUST_HOST_SYS}/release/examples/z_*; do
        echo "Installing ${f}"
        install -m 755 $f ${D}${bindir}/$(basename $f)_c
    done
}

FILES:${PN}-examples = "${bindir}/z_*"

BBCLASSEXTEND = "native nativesdk"
