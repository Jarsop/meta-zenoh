require recipes-devtools/rust/rust-cross-canadian.inc
require rust-source-${PV}.inc
require rust-snapshot-${PV}.inc

FILESEXTRAPATHS:prepend := "${THISDIR}/rust:"
