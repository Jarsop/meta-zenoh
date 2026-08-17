require ${BPN}.inc
require ${BP}-crates.inc

SRCREV = "7d586a9c19c0623144e06bd795e8c2b85dd722d4"

RUST_MSRV = "1.75.0"

SRC_URI += "file://0003-enable-frozen-build-for-opaque-types.patch"
