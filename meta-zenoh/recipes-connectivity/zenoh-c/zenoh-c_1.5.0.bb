require ${BPN}.inc
require ${BP}-crates.inc

SRC_URI += " \
file://0003-use-frozen-in-opaque_types_generator.rs.patch \
file://0004-include-MAJOR-version-in-SONAME.patch \
"

SRCREV = "f5d5a90d720d96d50f13b2718c4e1acd6714682a"
