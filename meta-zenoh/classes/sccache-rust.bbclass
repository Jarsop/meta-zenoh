#
# Copyright OpenEmbedded Contributors
#
# SPDX-License-Identifier: MIT
#

#
# Usage:
# - Enable sccache as RUSTC_WRAPPER
#   Add the following line to a conffile such as conf/local.conf:
#   INHERIT += "sccache-rust"
#
# - Disable sccache for a recipe
#   Add the following line to the recipe if it can't be built with sccache:
#   SCCACHE_DISABLE = "1"
#
# - Share sccache files between different builds
#   Set SCCACHE_TOP_DIR to a shared dir
#   SCCACHE_TOP_DIR = "/path/to/shared_sccache/"
#
# sccache must be available on the host:
#   HOSTTOOLS_NONFATAL += "sccache"
# Unlike ccache there is no sccache-native recipe in oe-core; without a
# host sccache this class silently no-ops.

SCCACHE_TOP_DIR ?= "${TOPDIR}/sccache"

# Mirror of CCACHE_NATIVE_RECIPES_ALLOWED. Bootstrap recipes (rust-native,
# rust-llvm-native, etc.) are skipped by default because wrapping rustc in
# the snapshot bootstrap wastes cycles for no real caching benefit.
SCCACHE_NATIVE_RECIPES_ALLOWED ?= ""

SCCACHE_CACHE_SIZE ?= "10G"

# Idle timeout 0 disables auto-shutdown of the sccache server. Yocto spawns
# one shell per task; without this each task would boot (and tear down) its
# own server.
SCCACHE_IDLE_TIMEOUT ?= "0"

export SCCACHE_DIR ?= "${SCCACHE_TOP_DIR}"

python() {
    """
    Set RUSTC_WRAPPER=sccache for the recipe.
    """
    pn = d.getVar('PN')
    if bb.utils.to_boolean(d.getVar('SCCACHE_DISABLE')):
        return
    if "sccache" not in (d.getVar("HOSTTOOLS_NONFATAL") or "").split():
        return
    if (bb.data.inherits_class("native", d) and
            pn not in (d.getVar('SCCACHE_NATIVE_RECIPES_ALLOWED') or "").split()):
        return
    d.setVar('RUSTC_WRAPPER', 'sccache')
    for v in ('RUSTC_WRAPPER', 'SCCACHE_DIR', 'SCCACHE_CACHE_SIZE', 'SCCACHE_IDLE_TIMEOUT'):
        d.setVarFlag(v, 'export', '1')
    d.appendVarFlag('do_compile', 'postfuncs', ' sccache_stats')
}

sccache_stats() {
    if command -v sccache >/dev/null 2>&1; then
        bbnote "=== sccache stats for ${PN} ==="
        sccache --show-stats 2>&1 | sed 's/^/[sccache] /' || true
    fi
}

addtask cleansccache after do_clean
python do_cleansccache() {
    import shutil

    sccache_dir = d.getVar('SCCACHE_DIR')
    if os.path.exists(sccache_dir):
        bb.note("Removing %s" % sccache_dir)
        shutil.rmtree(sccache_dir)
    else:
        bb.note("%s doesn't exist" % sccache_dir)
}
addtask cleanall after do_cleansccache
do_cleansccache[nostamp] = "1"
