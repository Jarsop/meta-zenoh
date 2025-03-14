SUMMARY = "Eclipse zenoh for pico devices"
DESCRIPTION = "zenoh-pico is the Eclipse zenoh implementation that targets constrained devices, offering a native C API. \
It is fully compatible with its main Rust Zenoh implementation, providing a lightweight implementation of most functionalities."
HOMEPAGE = "http://zenoh.io"
LICENSE = "EPL-2.0 | Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d296d6e2747ca8f5caae4b30fdad6b21"

inherit cmake

SRC_URI = "git://github.com/eclipse-zenoh/zenoh-pico.git;protocol=https;nobranch=1"

PV = "1.2.1"
SRCREV = "f9c59bb19c2fb4204e1f6348fb74a45882dd17af"

S = "${WORKDIR}/git"

FRAG_MAX_SIZE ?= "300000"
FRAG_MAX_SIZE[doc] = "Use this to override the maximum size for fragmented messages"
BATCH_UNICAST_SIZE ?= "65535"
BATCH_UNICAST_SIZE[doc] = "Use this to override the maximum unicast batch size"
BATCH_MULTICAST_SIZE ?= "8192"
BATCH_MULTICAST_SIZE[doc] = "Use this to override the maximum multicast batch size"

Z_FEATURE_UNSTABLE_API ?= "${@["0","1"][bb.utils.to_boolean(d.getVar('ZENOH_UNSTABLE_API', False))]}"
Z_FEATURE_UNSTABLE_API[doc] = "Toggle unstable Zenoh-C API"
Z_FEATURE_PUBLICATION ?= "1"
Z_FEATURE_PUBLICATION[doc] = "Toggle publication feature"
Z_FEATURE_SUBSCRIPTION ?= "1"
Z_FEATURE_SUBSCRIPTION[doc] = "Toggle subscription feature"
Z_FEATURE_QUERY ?= "1"
Z_FEATURE_QUERY[doc] = "Toggle query feature"
Z_FEATURE_QUERYABLE ?= "1"
Z_FEATURE_QUERYABLE[doc] = "Toggle queryable feature"
Z_FEATURE_LIVELINESS ?= "1"
Z_FEATURE_LIVELINESS[doc] = "Toggle liveliness feature"
Z_FEATURE_INTEREST ?= "1"
Z_FEATURE_INTEREST[doc] = "Toggle interests"
Z_FEATURE_MULTI_THREAD ?= "1"
Z_FEATURE_MULTI_THREAD[doc] = "Toggle multithread"
Z_FEATURE_RAWETH_TRANSPORT ?= "0"
Z_FEATURE_RAWETH_TRANSPORT[doc] = "Toggle raw ethernet transport"

# PACKAGING=yocto is used to enable both shared and static libraries in the build,
# it doesn't trigger any more behavior in the build system as it matches only
# with DEB and RPM values.
EXTRA_OECMAKE = "\
    -DPACKAGING=yocto \
    -DBUILD_EXAMPLES=OFF \
    -DBUILD_TESTING=OFF \
    -DBUILD_MULTICAST=OFF \
    -DBUILD_INTEGRATION=OFF \
    -DBUILD_TOOLS=OFF \
    -DFRAG_MAX_SIZE=${FRAG_MAX_SIZE} \
    -DBATCH_UNICAST_SIZE=${BATCH_UNICAST_SIZE} \
    -DBATCH_MULTICAST_SIZE=${BATCH_MULTICAST_SIZE} \
    -DZ_FEATURE_MULTI_THREAD=${Z_FEATURE_MULTI_THREAD} \
    -DZ_FEATURE_INTEREST=${Z_FEATURE_INTEREST} \
    -DZ_FEATURE_UNSTABLE_API=${Z_FEATURE_UNSTABLE_API} \
    -DZ_FEATURE_PUBLICATION=${Z_FEATURE_PUBLICATION} \
    -DZ_FEATURE_SUBSCRIPTION=${Z_FEATURE_SUBSCRIPTION} \
    -DZ_FEATURE_QUERY=${Z_FEATURE_QUERY} \
    -DZ_FEATURE_QUERYABLE=${Z_FEATURE_QUERYABLE} \
    -DZ_FEATURE_RAWETH_TRANSPORT=${Z_FEATURE_RAWETH_TRANSPORT} \
"

do_install:append() {
    # Yocto requires shared libraries to have a version number
    # and consider .so as a symlink to the versioned library for the dev package.
    mv ${D}${libdir}/libzenohpico.so ${D}${libdir}/libzenohpico.so.1.2.1
    cd ${D}${libdir}
    ln -s libzenohpico.so.1.2.1 libzenohpico.so.1
    ln -s libzenohpico.so.1 libzenohpico.so
}
