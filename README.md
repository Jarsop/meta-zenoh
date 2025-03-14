# Zenoh Yocto Layer (non-official)

This layer provides [Zenoh](https://zenoh.io) recipes for the Yocto Project.
Provided recipes:

- [Zenoh router](https://github.com/eclipse-zenoh/zenoh.git)
- [Zenoh C](https://github.com/eclipse-zenoh/zenoh-c.git)
- [Zenoh Pico](https://github.com/eclipse-zenoh/zenoh-pico.git)
- [Zenoh CPP](https://github.com/eclipse-zenoh/zenoh-cpp.git)

Currently, the layer is tested with `scarthgap` branch of the Yocto Project.

## Build

[kas](https://kas.readthedocs.io/en/latest/) is used to build the image. To build the image, run the following command:

```bash
kas build poky-zenoh.yml
```

## Features

Zenoh provides a set of features that can be enabled/disabled in the `local.conf` file. The following features are available:

- `shared-memory`: Enable shared memory transport (`ZENOH_SHARED_MEMORY`)
- `unstable-api`: Enable Zenoh unstable API (`ZENOH_UNSTABLE_API`)

To enable a feature, add the following line to the `local.conf` file:

```bash
ZENOH_SHARED_MEMORY = "true" # or "1"
ZENOH_UNSTABLE_API = "true" # or "1"
```

`kas` files are provided to build the image with the features enabled.
To build the image with the shared memory and unstable-api enabled, run the following command:

```bash
kas build poky-zenoh.yml:shared-memory.yml:unstable-api.yml
```

> [!NOTE]
>
> `ZENOH_SHARED_MEMORY` affect `zenoh` and `zenoh-c` recipes<br/>
> `ZENOH_UNSTABLE_API` affect `zenoh`, `zenoh-c` and `zenoh-pico` recipes

## License

This layer is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
