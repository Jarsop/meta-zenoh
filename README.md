# Zenoh Yocto Layer (unofficial)

[![](https://github.com/Jarsop/meta-zenoh/actions/workflows/build.yaml/badge.svg?branch=kirkstone)](https://github.com/Jarsop/meta-zenoh/actions/workflows/build.yaml)

This layer provides [Zenoh](https://zenoh.io) recipes for the Yocto Project.

## Recipes

| Recipe | Upstream | Content |
|--------|----------|---------|
| [zenoh](meta-zenoh/recipes-connectivity/zenoh) | [eclipse-zenoh/zenoh](https://github.com/eclipse-zenoh/zenoh) | router `zenohd`, plugins, systemd service |
| [zenoh-c](meta-zenoh/recipes-connectivity/zenoh-c) | [eclipse-zenoh/zenoh-c](https://github.com/eclipse-zenoh/zenoh-c) | C API, `libzenohc` |
| [zenoh-pico](meta-zenoh/recipes-connectivity/zenoh-pico) | [eclipse-zenoh/zenoh-pico](https://github.com/eclipse-zenoh/zenoh-pico) | C implementation for constrained devices |
| [zenoh-cpp](meta-zenoh/recipes-connectivity/zenoh-cpp) | [eclipse-zenoh/zenoh-cpp](https://github.com/eclipse-zenoh/zenoh-cpp) | header-only C++ API over zenoh-c or zenoh-pico |
| [python3-eclipse-zenoh](meta-zenoh/recipes-devtools/python3-eclipse-zenoh) | [eclipse-zenoh/zenoh-python](https://github.com/eclipse-zenoh/zenoh-python) | Python API |

All recipes extend to `native` and `nativesdk`.

## Branches

Use the branch named after your Yocto release.

| Branch | Yocto release | Rust for the Rust recipes |
|--------|---------------|---------------------------|
| `master` | `master` (`blacksail`) | from oe-core |
| `wrynose` | `wrynose` | from oe-core |
| `walnascar` | `walnascar` | from [meta-rust](https://github.com/meta-rust/meta-rust) (`master` branch), see [Rust version](#rust-version) |
| `scarthgap` | `scarthgap` (LTS) | from meta-rust, see [Rust version](#rust-version) |
| `kirkstone` | `kirkstone` (LTS) | from meta-rust, a layer dependency on this branch |

> [!NOTE]
>
> The `kirkstone` branch is not tested with older Yocto releases but may work.
> Try it by adding your release to `LAYERSERIES_COMPAT_zenoh-layer` in `layer.conf`.
> Feedback is welcome.

## Usage

Add the layer to your build:

```bash
bitbake-layers add-layer /path/to/meta-zenoh/meta-zenoh
```

Then add the packages you need to your image, for instance:

```bash
IMAGE_INSTALL:append = " zenoh zenoh-c python3-eclipse-zenoh"
```

### Zenoh version

One variable selects the version of all five recipes. It defaults to the latest release
the layer carries:

```bash
ZENOH_VERSION = "1.10.2"
```

The layer keeps older versions, from 1.2.1 for the C, C++ and router recipes and from
1.7.2 for the Python one. The recipe directories list them.

### Rust version

zenoh, zenoh-c and python3-eclipse-zenoh are built from the lockfile upstream commits, so
every build uses the dependency versions upstream released with. Each recipe states the
lowest Rust version that lockfile accepts in `RUST_MSRV`, and the build stops before
fetching when the toolchain is older.

Upstream declares Rust 1.75 for zenoh and zenoh-c. That holds with their own set of
pinned dependencies, not with the released lockfile, which is the one built here and
needs a newer Rust.

Where the Yocto release ships an older Rust, take it from meta-rust. On `walnascar` and
`scarthgap` the `kas/python-zenoh.yml` file does that; on `kirkstone` meta-rust is always
part of the build.

### Packages

| Recipe | Package | Content |
|--------|---------|---------|
| zenoh | `zenoh` | `zenohd`, plugins, `zenohd.service`, `/etc/zenohd/zenohd.json5`, system user `zenohd` |
| zenoh-c | `zenoh-c`, `zenoh-c-dev` | `libzenohc`, headers |
| zenoh-c | `zenoh-c-examples` | `z_*_c` |
| zenoh-pico | `zenoh-pico`, `zenoh-pico-dev`, `zenoh-pico-staticdev` | library, headers |
| zenoh-pico | `zenoh-pico-examples` | `z_*_pico` |
| zenoh-cpp | `zenoh-cpp-dev` | headers |
| zenoh-cpp | `zenoh-cpp-examples` | `z_*_cpp` (zenoh-c backend), `z_*_cpp_pico` (zenoh-pico backend) |
| python3-eclipse-zenoh | `python3-eclipse-zenoh` | Python module |
| python3-eclipse-zenoh | `python3-eclipse-zenoh-examples` | `/opt/eclipse-zenoh/examples` |

## Features

Two features are switched for all recipes at once from `local.conf`. Both default to
`false`:

```bash
ZENOH_SHARED_MEMORY = "true" # or "1"
ZENOH_UNSTABLE_API = "true" # or "1"
```

| Variable | `PACKAGECONFIG` | Recipes |
|----------|-----------------|---------|
| `ZENOH_SHARED_MEMORY` | `shared-memory` | zenoh, zenoh-c |
| `ZENOH_UNSTABLE_API` | `unstable-api` | zenoh, zenoh-c, zenoh-pico |

The same features can be set per recipe through `PACKAGECONFIG`.

### zenoh-cpp backend

zenoh-cpp is built over zenoh-c (default), zenoh-pico, or both. In `local.conf`:

```bash
ZENOHCPP_BACKEND = "zenoh-pico"
```

Or through `PACKAGECONFIG` in a `bbappend`:

```bash
PACKAGECONFIG = "zenoh-c zenoh-pico"
```

### zenoh-pico

Each zenoh-pico feature is a `PACKAGECONFIG` entry (links, transports, publication,
query, and so on); the version recipe lists them with the defaults. Sizes and timeouts
are variables:

| Variable | Default | Meaning |
|----------|---------|---------|
| `FRAG_MAX_SIZE` | `300000` | maximum size of a fragmented message |
| `BATCH_UNICAST_SIZE` | `65535` | maximum unicast batch size |
| `BATCH_MULTICAST_SIZE` | `8192` | maximum multicast batch size |
| `CONFIG_SOCKET_TIMEOUT` | `100` | socket timeout, in milliseconds |

The version recipe documents the other ones (lease, runtime tasks, connection timeouts).

## Build with kas

The layer comes with [kas](https://kas.readthedocs.io/en/latest/) files that build a
`core-image-base` for `qemux86-64` with the router installed:

```bash
kas build kas/poky-zenoh.yml
```

Other files are added after it, separated by colons:

| File | Effect |
|------|--------|
| `kas/shared-memory.yml` | `ZENOH_SHARED_MEMORY = "true"` |
| `kas/unstable-api.yml` | `ZENOH_UNSTABLE_API = "true"` |
| `kas/zenoh-c-backend.yml` | zenoh-cpp over zenoh-c |
| `kas/zenoh-pico-backend.yml` | zenoh-cpp over zenoh-pico |
| `kas/python-zenoh.yml` | Rust from meta-rust (`walnascar`, `scarthgap`, `kirkstone` only) |

```bash
# shared memory and unstable API
kas build kas/poky-zenoh.yml:kas/shared-memory.yml:kas/unstable-api.yml
# zenoh-cpp over both backends
kas build kas/poky-zenoh.yml:kas/zenoh-c-backend.yml:kas/zenoh-pico-backend.yml -- zenoh-cpp
```

## Upstream releases

A scheduled workflow follows upstream: when a release is tagged in the five upstream
repositories, it opens one pull request per branch with the regenerated recipes and
builds it.

## License

This layer is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
