SUMMARY = "The Zenoh C API"
HOMEPAGE = "http://zenoh.io"
LICENSE = "EPL-2.0 | Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=530d837aca648e45704db71dedff39c4"

SRC_URI = "git://github.com/eclipse-zenoh/zenoh-c.git;protocol=https;branch=main"

PV = "1.0+git"
SRCREV = "1.2.1"

inherit cmake cargo pkgconfig

include ${BPN}-crates.inc

S = "${WORKDIR}/git"
B = "${WORKDIR}/build"

ZENOHC_CARGO_FLAGS = "--offline"

ZENOHC_CUSTOM_TARGET = "${RUST_HOST_SYS}"

SRC_URI += " \
    file://fetch-zenoh-from-registry.patch \
"

EXTRA_OECMAKE = "-DZENOHC_CARGO_FLAGS=${ZENOHC_CARGO_FLAGS} -DZENOHC_CUSTOM_TARGET=${ZENOHC_CUSTOM_TARGET}"

do_configure() {
    cargo_common_do_configure
    cmake_do_configure
}
do_configure[postfuncs] += "cargo_common_do_patch_paths"

do_compile() {
	export RUSTFLAGS="${RUSTFLAGS}"
    oe_cargo_fix_env
    cmake_do_compile
}

do_install() {
    cmake_do_install
    mv ${D}${libdir}/libzenohc.so ${D}${libdir}/libzenohc.so.1.2.1
    cd ${D}${libdir}
    ln -s libzenohc.1.2.1 libzenohc.so.1
    ln -s libzenohc.1 libzenohc.so
}
