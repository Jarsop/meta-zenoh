SUMMARY = "Python API for zenoh"
DESCRIPTION = "This repository provides a Python binding based on the main Zenoh implementation written in Rust."
HOMEPAGE = "https://zenoh.io"
LICENSE = "EPL-2.0 | Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=530d837aca648e45704db71dedff39c4"

inherit python_maturin

SRC_URI = "\
    git://github.com/eclipse-zenoh/zenoh-python.git;protocol=https;nobranch=1 \
    file://0001-use-crates.io-registry.patch \
    file://0002-update-lockfiles.patch \
"

PACKAGES =+ "${PN}-examples"

do_install:append() {
    install -d -m 755 ${D}/opt/eclipse-zenoh
    cp -r ${S}/examples ${D}/opt/eclipse-zenoh/examples
}

FILES:${PN}-examples += " \
    /opt/eclipse-zenoh/examples/ \
"

BBCLASSEXTEND = "native nativesdk"
