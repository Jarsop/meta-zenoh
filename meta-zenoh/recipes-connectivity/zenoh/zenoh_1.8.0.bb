require ${BPN}.inc
require ${BP}-crates.inc

SRCREV = "29b3e63a311ab55f438280f3e71c6268b6f115cc"

PACKAGECONFIG[shared-memory] = "--features=shared-memory,,,"

RUST_MSRV = "1.75.0"
