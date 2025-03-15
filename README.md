# Zenoh Yocto Layer (non-official)

This layer provides [Zenoh](https://zenoh.io) recipes for the Yocto Project.
Provided recipes:

- [zenoh](meta-zenoh/recipes-connectivity/zenoh/zenoh_git.bb): [Zenoh router](https://github.com/eclipse-zenoh/zenoh.git)
- [zenoh-c](meta-zenoh/recipes-connectivity/zenoh-c/zenoh-c_git.bb): [Zenoh C API](https://github.com/eclipse-zenoh/zenoh-c.git)
- [zenoh-pico](meta-zenoh/recipes-connectivity/zenoh-pico/zenoh-pico_git.bb): [Zenoh Pico implementation](https://github.com/eclipse-zenoh/zenoh-pico.git)
- [zenoh-cpp](meta-zenoh/recipes-connectivity/zenoh-cpp/zenoh-cpp_git.bb): [Zenoh C++ API](https://github.com/eclipse-zenoh/zenoh-cpp.git)

Currently, `master` branch of the layer is tested with `scarthgap` branch of the Yocto Project.

`kirkstone` branch is available to build on `kirkstone` Yocto version.

> [!NOTE]
>
> `kirkstone` branch is not tested with older Yocto versions but may work.
> You can try it by adding your Yocto version to `LAYERSERIES_COMPAT_zenoh-layer` in `layer.conf`.
> Any feedback are welcome!

> [!WARNING]
>
> `kirkstone` branch depends on [meta-rust](https://github.com/meta-rust/meta-rust.git) (`master` branch)

## Build

[kas](https://kas.readthedocs.io/en/latest/) is used to build the image. To build the image, run the following command:

```bash
kas build poky-zenoh.yml
```

## Features

Zenoh provides a set of features that can be enabled/disabled in the `local.conf` file.
The following features are available:

- `shared-memory`: Enable shared memory transport (`ZENOH_SHARED_MEMORY`)
- `unstable-api`: Enable Zenoh unstable API (`ZENOH_UNSTABLE_API`)

To enable a feature, add the following line to the `local.conf` file:

```bash
# Default both are set to false
ZENOH_SHARED_MEMORY = "true" # or "1"
ZENOH_UNSTABLE_API = "true" # or "1"
```

`kas` facility files are provided to build the image with the features enabled.
Use it as follows:

```bash
# Enable shared-memory
kas build poky-zenoh.yml:shared-memory.yml
# Enable unstable-api
kas build poky-zenoh.yml:unstable-api.yml
# Enable shared-memory and unstable-api
kas build poky-zenoh.yml:shared-memory.yml:unstable-api.yml
```

> [!NOTE]
>
> `ZENOH_SHARED_MEMORY` affect `zenoh` and `zenoh-c` recipes
>
> `ZENOH_UNSTABLE_API` affect `zenoh`, `zenoh-c` and `zenoh-pico` recipes

## Zenoh-cpp backend

`zenoh-cpp` allows you to choose between several backends.
Analogous variables can be set in your configuration as follows:

```bash
# Default values
ZENOHCXX_ZENOHC = "1" # or "true"
ZENOHCXX_ZENOHPICO = "0" # or "false"
```

`kas` facility files are provided as follows:

```bash
# Enable zenoh-c backend support (default)
kas build poky-zenoh.yml:zenoh-c-backend.yml
# Enable zenoh-pico backend support
kas build poky-zenoh.yml:zenoh-pico-backend.yml
# Enable both backend support
kas build poky-zenoh.yml:zenoh-c-backend.yml:zenoh-pico-backend.yml
```

## License

This layer is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
