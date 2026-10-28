require ${BPN}.inc
require ${BP}-crates.inc

SRCREV = "363554eef1a52b1c59a37fc2c8aa87ec1aa8e52e"

RUST_MSRV = "1.75.0"

SRC_URI += "file://0003-enable-frozen-build-for-opaque-types.patch"
