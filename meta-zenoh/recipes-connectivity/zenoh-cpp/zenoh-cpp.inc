SUMMARY = "C++ API for Zenoh"
HOMEPAGE = "http://zenoh.io"
LICENSE = "EPL-2.0 | Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=530d837aca648e45704db71dedff39c4"

inherit cmake

PACKAGES =+ "${PN}-examples"

SRC_URI = "git://github.com/eclipse-zenoh/zenoh-cpp.git;protocol=https;nobranch=1"

PACKAGECONFIG ??= "zenoh-c"

PACKAGECONFIG[zenoh-c] = "-DZENOHCXX_ZENOHC=ON, -DZENOHCXX_ZENOHC=OFF, zenoh-c (= ${PV}), zenoh-c (= ${PV})"
PACKAGECONFIG[zenoh-pico] = "-DZENOHCXX_ZENOHPICO=ON, -DZENOHCXX_ZENOHPICO=OFF, zenoh-pico (= ${PV}), zenoh-pico (= ${PV})"

EXTRA_OECMAKE = "\
    -DZENOHCXX_EXAMPLES_PROTOBUF=OFF \
    -DZENOHCXX_ENABLE_TESTS=OFF \
    -DZENOHCXX_ENABLE_EXAMPLES=ON \
"

do_compile:append() {
    cmake_runcmake_build --target examples
}

do_install:append() {
    install -d ${D}${bindir}

    if echo "${PACKAGECONFIG}" | grep -q zenoh-c; then
        for f in ${B}/examples/zenohc/z_*; do
            echo "Installing ${f}"
            install -m 755 $f ${D}${bindir}/$(basename $f)_cpp
        done
    fi

    if echo "${PACKAGECONFIG}" | grep -q zenoh-pico; then
        for f in ${B}/examples/zenohpico/z_*; do
            echo "Installing ${f}"
            install -m 755 $f ${D}${bindir}/$(basename $f)_cpp_pico
        done
    fi
}

FILES:${PN}-examples = "${bindir}/z_*"

BBCLASSEXTEND = "native nativesdk"
