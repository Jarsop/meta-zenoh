SUMMARY = "The zenoh router"
HOMEPAGE = "http://zenoh.io"
LICENSE = "EPL-2.0 | Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=530d837aca648e45704db71dedff39c4"

SRC_URI = "git://github.com/eclipse-zenoh/zenoh.git;protocol=https;nobranch=1"

PV = "1.2.1"
SRCREV = "4af922f701c57e270081ab1f8fd5e6ca6c2d65f5"

S = "${WORKDIR}/git"

inherit cargo useradd systemd

include ${BPN}-crates.inc

USERADD_PACKAGES = "${PN}"
USERADD_PARAM:${PN} = "-r -s /bin/false zenohd"

SYSTEMD_SERVICE:${PN} = "zenohd.service"

ZENOH_SHARED_MEMORY_FEATURE = "${@ ["", "--features=shared-memory"][bb.utils.to_boolean(d.getVar("ZENOH_SHARED_MEMORY"))]}"
ZENOH_UNSTABLE_API_FEATURE = "${@ ["", "--features=unstable"][bb.utils.to_boolean(d.getVar("ZENOH_UNSTABLE_API"))]}"

CARGO_BUILD_FLAGS += "${ZENOH_SHARED_MEMORY_FEATURE} ${ZENOH_UNSTABLE_API_FEATURE}"

do_install:append() {
    install -d -m 755 ${D}${systemd_system_unitdir}
    install -m 644 ${S}/zenohd/.service/zenohd.service ${D}${systemd_system_unitdir}/zenohd.service

    install -d 755 ${D}${sysconfdir}/zenohd
    install -m 644 ${S}/DEFAULT_CONFIG.json5 ${D}${sysconfdir}/zenohd/zenohd.json5

    install -d -m 755 -o zenohd -g zenohd ${D}${localstatedir}/zenohd

    rm ${D}${rustlibdir}/libzenoh_backend_example.so ${D}${rustlibdir}/libzenoh_plugin_example.so
}

FILES:${PN} = " \
    ${bindir}/zenohd \
    ${rustlibdir}/libzenoh_plugin_rest.so \
    ${rustlibdir}/libzenoh_plugin_storage_manager.so \
    ${systemd_system_unitdir}/zenohd.service \
    ${sysconfdir}/zenohd/zenohd.json5 \
    ${localstatedir}/zenohd \
"
