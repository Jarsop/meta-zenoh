SUMMARY = "Eclipse zenoh for pico devices"
DESCRIPTION = "zenoh-pico is the Eclipse zenoh implementation that targets constrained devices, offering a native C API. \
It is fully compatible with its main Rust Zenoh implementation, providing a lightweight implementation of most functionalities."
HOMEPAGE = "http://zenoh.io"
LICENSE = "EPL-2.0 | Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d296d6e2747ca8f5caae4b30fdad6b21"

inherit cmake

PACKAGES =+ "${PN}-examples"
RDEPENDS:${PN}-examples = "${PN}"

SRC_URI = "\
    git://github.com/eclipse-zenoh/zenoh-pico.git;protocol=https;nobranch=1 \
    file://0001-set-shared-library-version.patch \
"

S = "${WORKDIR}/git"

FRAG_MAX_SIZE ?= "300000"
FRAG_MAX_SIZE[doc] = "Use this to override the maximum size for fragmented messages"
BATCH_UNICAST_SIZE ?= "65535"
BATCH_UNICAST_SIZE[doc] = "Use this to override the maximum unicast batch size"
BATCH_MULTICAST_SIZE ?= "8192"
BATCH_MULTICAST_SIZE[doc] = "Use this to override the maximum multicast batch size"
CONFIG_SOCKET_TIMEOUT ?= "100"
CONFIG_SOCKET_TIMEOUT[doc] = "Default socket timeout in milliseconds"

# PACKAGING=yocto is used to enable both shared and static libraries in the build,
# it doesn't trigger any more behavior in the build system as it matches only
# with DEB and RPM values.
EXTRA_OECMAKE = "\
    -DPACKAGING=yocto \
    -DBUILD_SHARED_LIBS=ON \
    -DBUILD_EXAMPLES=ON \
    -DBUILD_TESTING=OFF \
    -DBUILD_MULTICAST=OFF \
    -DBUILD_INTEGRATION=OFF \
    -DBUILD_TOOLS=OFF \
    -DFRAG_MAX_SIZE=${FRAG_MAX_SIZE} \
    -DBATCH_UNICAST_SIZE=${BATCH_UNICAST_SIZE} \
    -DBATCH_MULTICAST_SIZE=${BATCH_MULTICAST_SIZE} \
    -DZ_CONFIG_SOCKET_TIMEOUT=${CONFIG_SOCKET_TIMEOUT} \
"

do_install:append() {
    install -d ${D}${bindir}
    for f in ${B}/examples/z_*; do
        echo "Installing ${f}"
        install -m 755 $f ${D}${bindir}/$(basename $f)_pico
    done
}

FILES:${PN}-examples = "${bindir}/z_*"
