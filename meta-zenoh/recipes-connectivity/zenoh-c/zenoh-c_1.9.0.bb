require ${BPN}.inc
require ${BP}-crates.inc

SRCREV = "499de93af63e6a7d3497313f544e666fea1d33fd"

RUST_MSRV = "1.75.0"

SRC_URI += "file://0003-enable-frozen-build-for-opaque-types.patch"
