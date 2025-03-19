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

PV = "1.2.1"
SRCREV = "f9c59bb19c2fb4204e1f6348fb74a45882dd17af"

S = "${WORKDIR}/git"

FRAG_MAX_SIZE ?= "300000"
FRAG_MAX_SIZE[doc] = "Use this to override the maximum size for fragmented messages"
BATCH_UNICAST_SIZE ?= "65535"
BATCH_UNICAST_SIZE[doc] = "Use this to override the maximum unicast batch size"
BATCH_MULTICAST_SIZE ?= "8192"
BATCH_MULTICAST_SIZE[doc] = "Use this to override the maximum multicast batch size"

PACKAGECONFIG ??= "\
    ${@["", "unstable-api"][bb.utils.to_boolean(d.getVar('ZENOH_UNSTABLE_API', False))]} \
    publication \
    subscription \
    query \
    queryable \
    liveliness \
    interest \
    multi-thread \
"
PACKAGECONFIG[vardeps] += "ZENOH_UNSTABLE_API"

PACKAGECONFIG[unstable-api] = "-DZ_FEATURE_UNSTABLE_API=1, -DZ_FEATURE_UNSTABLE_API=0,,"
PACKAGECONFIG[publication] = "-DZ_FEATURE_PUBLICATION=1, -DZ_FEATURE_PUBLICATION=0,,"
PACKAGECONFIG[subscription] = "-DZ_FEATURE_SUBSCRIPTION=1, -DZ_FEATURE_SUBSCRIPTION=0,,"
PACKAGECONFIG[query] = "-DZ_FEATURE_QUERY=1, -DZ_FEATURE_QUERY=0,,"
PACKAGECONFIG[queryable] = "-DZ_FEATURE_QUERYABLE=1, -DZ_FEATURE_QUERYABLE=0,,"
PACKAGECONFIG[liveliness] = "-DZ_FEATURE_LIVELINESS=1, -DZ_FEATURE_LIVELINESS=0,,"
PACKAGECONFIG[interest] = "-DZ_FEATURE_INTEREST=1, -DZ_FEATURE_INTEREST=0,,"
PACKAGECONFIG[multi-thread] = "-DZ_FEATURE_MULTI_THREAD=1, -DZ_FEATURE_MULTI_THREAD=0,,"
PACKAGECONFIG[raweth-transport] = "-DZ_FEATURE_RAWETH_TRANSPORT=1, -DZ_FEATURE_RAWETH_TRANSPORT=0,,"

# PACKAGING=yocto is used to enable both shared and static libraries in the build,
# it doesn't trigger any more behavior in the build system as it matches only
# with DEB and RPM values.
EXTRA_OECMAKE = "\
    -DPACKAGING=yocto \
    -DBUILD_EXAMPLES=ON \
    -DBUILD_TESTING=OFF \
    -DBUILD_MULTICAST=OFF \
    -DBUILD_INTEGRATION=OFF \
    -DBUILD_TOOLS=OFF \
    -DFRAG_MAX_SIZE=${FRAG_MAX_SIZE} \
    -DBATCH_UNICAST_SIZE=${BATCH_UNICAST_SIZE} \
    -DBATCH_MULTICAST_SIZE=${BATCH_MULTICAST_SIZE} \
"

do_install:append() {
    install -d ${D}${bindir}
    for f in ${B}/examples/z_*; do
        echo "Installing ${f}"
        install -m 755 $f ${D}${bindir}/$(basename $f)_pico
    done
}

FILES:${PN}-examples = "${bindir}/z_*"
