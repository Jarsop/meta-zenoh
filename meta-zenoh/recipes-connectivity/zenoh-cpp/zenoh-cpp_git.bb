SUMMARY = " C++ API for zenoh "
HOMEPAGE = "http://zenoh.io"
LICENSE = "EPL-2.0 | Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=530d837aca648e45704db71dedff39c4"

inherit cmake

SRC_URI = "git://github.com/eclipse-zenoh/zenoh-cpp.git;protocol=https;nobranch=1"

PV = "1.2.1"
SRCREV = "3f11bc5900efd39b816c9762be44f8193c250f47"

S = "${WORKDIR}/git"

ZENOHCXX_ZENOHC ?= "1"
ZENOHCXX_ZENOHPICO ?= "0"

ZENOH_CXX_DEPENDS = "${@ ["", "zenoh-c"][bb.utils.to_boolean(d.getVar("ZENOHCXX_ZENOHC"))]} \
                     ${@ ["", "zenoh-pico"][bb.utils.to_boolean(d.getVar("ZENOHCXX_ZENOHPICO"))]}"
ZENOH_CXX_DEPENDS[vardeps] = "ZENOHCXX_ZENOHC ZENOHCXX_ZENOHPICO"

DEPENDS += "${ZENOH_CXX_DEPENDS}"

EXTRA_OECMAKE = "\
    -DZENOHCXX_ZENOHC=${@ ["OFF", "ON"][bb.utils.to_boolean(d.getVar("ZENOHCXX_ZENOHC"))]} \
    -DZENOHCXX_ZENOHPICO=${@ ["OFF", "ON"][bb.utils.to_boolean(d.getVar("ZENOHCXX_ZENOHPICO"))]} \
    -DZENOHCXX_EXAMPLES_PROTOBUF=OFF \
    -DZENOHCXX_ENABLE_TESTS=OFF \
    -DZENOHCXX_ENABLE_EXAMPLES=OFF \
"

EXTRA_OECMAKE[vardeps] = "ZENOHCXX_ZENOHC ZENOHCXX_ZENOHPICO"
