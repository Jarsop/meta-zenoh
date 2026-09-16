require ${BPN}.inc
require ${BP}-crates.inc

SRCREV = "50303555c7afa636b12d3644c9f9a6e37537c6c3"

RUST_MSRV = "1.75.0"

SRC_URI += "file://0003-enable-frozen-build-for-opaque-types.patch"
