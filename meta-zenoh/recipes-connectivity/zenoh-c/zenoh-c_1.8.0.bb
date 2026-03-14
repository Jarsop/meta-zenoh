require ${BPN}.inc
require ${BP}-crates.inc

SRCREV = "7b8478618861972b9f0115da75e694c9f0a2af5a"

RUST_MSRV = "1.75.0"

SRC_URI += "file://0003-enable-frozen-build-for-opaque-types.patch"
