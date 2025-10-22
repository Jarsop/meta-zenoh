require ${BPN}.inc
require ${BP}-crates.inc

DEPENDS += "clang-native"

# Scrapy fix allowing `librocksdb-sys-0.17.1+9.9.3`
# to compile with clang 21.1.3
CXXFLAGS += "-include cstdint"

SRCREV = "b81e253b32f98fa35bae34e44e647630f50f0321"
