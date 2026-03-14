# Validate that the build toolchain satisfies the recipe's minimum Rust version.
# Set RUST_MSRV = "X.Y.Z" in the recipe to specify the minimum Rust version required to build it.

python do_check_rust_msrv() {
    msrv = d.getVar('RUST_MSRV')
    if not msrv:
        return
    rust_ver = d.getVar('RUSTVERSION')
    if not rust_ver:
        return
    rust_ver = rust_ver.rstrip('%')
    from bb.utils import vercmp_string
    if vercmp_string(rust_ver, msrv) < 0:
        bb.fatal('%s requires Rust >= %s but RUSTVERSION is %s'
                 % (d.getVar('PN'), msrv, rust_ver))
}
addtask do_check_rust_msrv before do_fetch
