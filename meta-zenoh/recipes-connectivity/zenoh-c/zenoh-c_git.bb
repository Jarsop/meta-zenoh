SUMMARY = "The Zenoh C API"
DESCRIPTION = "C binding based on the main Zenoh implementation written in Rust"
HOMEPAGE = "http://zenoh.io"
LICENSE = "EPL-2.0 | Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=530d837aca648e45704db71dedff39c4"

inherit cmake cargo pkgconfig


SRC_URI = " \
    git://github.com/eclipse-zenoh/zenoh-c.git;protocol=https;nobranch=1 \
    file://0001-use-crates.io-registry.patch \
    file://0002-update-lockfiles.patch \
    file://0003-use-frozen-in-build.rs.patch \
"

include ${BPN}-crates.inc

PV = "1.2.1"
SRCREV = "95af166fc0b8b1682437af908b0a1ef58839afb9"

S = "${WORKDIR}/git"
B = "${S}"

ZENOHC_CARGO_FLAGS = "-v;--frozen"

EXTRA_OECMAKE = "\
    -DZENOHC_CARGO_FLAGS='${ZENOHC_CARGO_FLAGS}' \
    -DZENOHC_CUSTOM_TARGET=${HOST_SYS} \
    -DZENOHC_BUILD_WITH_SHARED_MEMORY=${@ ["OFF", "ON"][bb.utils.to_boolean(d.getVar("ZENOH_SHARED_MEMORY"))]} \
    -DZENOHC_BUILD_WITH_UNSTABLE_API=${@ ["OFF", "ON"][bb.utils.to_boolean(d.getVar("ZENOH_UNSTABLE_API"))]} \
"
EXTRA_OECMAKE[vardeps] += "ZENOH_SHARED_MEMORY ZENOH_UNSTABLE_API"

RUSTFLAGS:append = " -Cpanic=${RUST_PANIC_STRATEGY}"

# This is tricky, we need to call both cargo and cmake `do_configure` in order
# to configure properly the project.
do_configure() {
    cargo_common_do_configure
    cmake_do_configure
}

# This is tricky too, we want to use the CMake build system as it is the way
# to build properly provided by the project.
do_compile() {
    export RUSTFLAGS="${RUSTFLAGS}"
    oe_cargo_fix_env
    cmake_do_compile
}

# Here we want to use the CMake install target
# and accord it to Yocto's needs as non-intrusive as possible
do_install() {
    cmake_do_install
    # Yocto requires shared libraries to have a version number
    # and consider .so as a symlink to the versioned library for the dev package.
    mv ${D}${libdir}/libzenohc.so ${D}${libdir}/libzenohc.so.1.2.1
    cd ${D}${libdir}
    ln -s libzenohc.so.1.2.1 libzenohc.so.1
    ln -s libzenohc.so.1 libzenohc.so
}
