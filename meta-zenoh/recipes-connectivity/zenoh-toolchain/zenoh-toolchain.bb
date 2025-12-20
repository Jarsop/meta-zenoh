SUMMARY = "Zenoh toolchain dependencies for CI warm-up"
DESCRIPTION = "Meta-recipe that depends on all toolchain components needed to build zenoh recipes. \
Used in CI to pre-populate the sstate-cache before building actual zenoh packages."
LICENSE = "MIT"

# This recipe doesn't produce anything, it just triggers toolchain builds
INHIBIT_DEFAULT_DEPS = "1"
EXCLUDE_FROM_WORLD = "1"

# Core toolchain dependencies for zenoh recipes
DEPENDS = "\
    cargo-native \
    cmake-native \
    patchelf-native \
    pkgconfig-native \
    gcc-cross-${TARGET_ARCH} \
    cmake \
    cargo \
"

# Ensure we don't try to package anything
PACKAGES = ""
ALLOW_EMPTY:${PN} = "1"

# Skip all tasks except dependencies resolution
do_configure[noexec] = "1"
do_compile[noexec] = "1"
do_install[noexec] = "1"
do_populate_sysroot[noexec] = "1"
do_package[noexec] = "1"
do_packagedata[noexec] = "1"
do_package_write_rpm[noexec] = "1"
do_package_write_ipk[noexec] = "1"
do_package_write_deb[noexec] = "1"
