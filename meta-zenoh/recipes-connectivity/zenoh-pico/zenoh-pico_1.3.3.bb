require ${BPN}.inc

PACKAGECONFIG ??= "\
    ${@["", "unstable-api"][bb.utils.to_boolean(d.getVar('ZENOH_UNSTABLE_API', False))]} \
    publication \
    subscription \
    query \
    queryable \
    liveliness \
    interest \
    multi-thread \
    unicast-peer \
"
PACKAGECONFIG[vardeps] += "ZENOH_UNSTABLE_API"

PACKAGECONFIG[unstable-api] = "-DZ_FEATURE_UNSTABLE_API=1, -DZ_FEATURE_UNSTABLE_API=0,,"
PACKAGECONFIG[publication] = "-DZ_FEATURE_PUBLICATION=1, -DZ_FEATURE_PUBLICATION=0,,"
PACKAGECONFIG[subscription] = "-DZ_FEATURE_SUBSCRIPTION=1, -DZ_FEATURE_SUBSCRIPTION=0,,"
PACKAGECONFIG[query] = "-DZ_FEATURE_QUERY=1, -DZ_FEATURE_QUERY=0,,"
PACKAGECONFIG[queryable] = "-DZ_FEATURE_QUERYABLE=1, -DZ_FEATURE_QUERYABLE=0,,"
PACKAGECONFIG[liveliness] = "-DZ_FEATURE_LIVELINESS=1, -DZ_FEATURE_LIVELINESS=0,,"
PACKAGECONFIG[interest] = "-DZ_FEATURE_INTEREST=1, -DZ_FEATURE_INTEREST=0,,"
PACKAGECONFIG[multi-thread] = "-DZ_FEATURE_MULTI_THREAD=1, -DZ_FEATURE_MULTI_THREAD=0,,"
PACKAGECONFIG[raweth-transport] = "-DZ_FEATURE_RAWETH_TRANSPORT=1, -DZ_FEATURE_RAWETH_TRANSPORT=0,,"
PACKAGECONFIG[unicast-peer] = "-DZ_FEATURE_UNICAST_PEER=1, -DZ_FEATURE_UNICAST_PEER=0,,"


SRCREV = "43709977af67e9d66ab5eb44915b8cb223d0b340"
