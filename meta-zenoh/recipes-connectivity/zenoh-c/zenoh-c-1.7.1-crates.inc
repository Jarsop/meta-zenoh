SRC_URI += "\
    crate://crates.io/adler2/2.0.1 \
    crate://crates.io/advisory-lock/0.3.0 \
    crate://crates.io/aes/0.8.4 \
    crate://crates.io/ahash/0.8.12 \
    crate://crates.io/aho-corasick/1.1.4 \
    crate://crates.io/allocator-api2/0.2.21 \
    crate://crates.io/android_system_properties/0.1.5 \
    crate://crates.io/anstream/0.6.21 \
    crate://crates.io/anstyle-parse/0.2.7 \
    crate://crates.io/anstyle-query/1.1.5 \
    crate://crates.io/anstyle-wincon/3.0.11 \
    crate://crates.io/anstyle/1.0.13 \
    crate://crates.io/anyhow/1.0.100 \
    crate://crates.io/arc-swap/1.7.1 \
    crate://crates.io/array-init/2.1.0 \
    crate://crates.io/asn1-rs-derive/0.6.0 \
    crate://crates.io/asn1-rs-impl/0.2.0 \
    crate://crates.io/asn1-rs/0.7.1 \
    crate://crates.io/async-trait/0.1.89 \
    crate://crates.io/autocfg/1.5.0 \
    crate://crates.io/base64/0.22.1 \
    crate://crates.io/base64ct/1.6.0 \
    crate://crates.io/bincode/1.3.3 \
    crate://crates.io/bitflags/1.3.2 \
    crate://crates.io/bitflags/2.10.0 \
    crate://crates.io/block-buffer/0.10.4 \
    crate://crates.io/buddy_system_allocator/0.10.0 \
    crate://crates.io/bumpalo/3.19.0 \
    crate://crates.io/byteorder/1.5.0 \
    crate://crates.io/bytes/1.11.0 \
    crate://crates.io/cbindgen/0.29.2 \
    crate://crates.io/cc/1.2.49 \
    crate://crates.io/cesu8/1.1.0 \
    crate://crates.io/cfg-if/1.0.4 \
    crate://crates.io/cfg_aliases/0.1.1 \
    crate://crates.io/cfg_aliases/0.2.1 \
    crate://crates.io/chrono/0.4.42 \
    crate://crates.io/cipher/0.4.4 \
    crate://crates.io/clap/4.5.53 \
    crate://crates.io/clap_builder/4.5.53 \
    crate://crates.io/clap_lex/0.7.6 \
    crate://crates.io/cobs/0.2.3 \
    crate://crates.io/colorchoice/1.0.4 \
    crate://crates.io/combine/4.6.7 \
    crate://crates.io/concurrent-queue/2.5.0 \
    crate://crates.io/const-oid/0.9.6 \
    crate://crates.io/const_format/0.2.35 \
    crate://crates.io/const_format_proc_macros/0.2.34 \
    crate://crates.io/core-foundation-sys/0.8.7 \
    crate://crates.io/core-foundation/0.10.1 \
    crate://crates.io/cpufeatures/0.2.17 \
    crate://crates.io/crc32fast/1.5.0 \
    crate://crates.io/crossbeam-channel/0.5.15 \
    crate://crates.io/crossbeam-deque/0.8.6 \
    crate://crates.io/crossbeam-epoch/0.9.18 \
    crate://crates.io/crossbeam-queue/0.3.12 \
    crate://crates.io/crossbeam-utils/0.8.21 \
    crate://crates.io/crossbeam/0.8.4 \
    crate://crates.io/crypto-common/0.1.7 \
    crate://crates.io/ctor-proc-macro/0.0.6 \
    crate://crates.io/ctor/0.4.3 \
    crate://crates.io/darling/0.21.3 \
    crate://crates.io/darling_core/0.21.3 \
    crate://crates.io/darling_macro/0.21.3 \
    crate://crates.io/data-encoding/2.9.0 \
    crate://crates.io/der-parser/10.0.0 \
    crate://crates.io/der/0.7.10 \
    crate://crates.io/deranged/0.4.0 \
    crate://crates.io/digest/0.10.7 \
    crate://crates.io/dirs-sys/0.5.0 \
    crate://crates.io/dirs/6.0.0 \
    crate://crates.io/displaydoc/0.2.5 \
    crate://crates.io/dtoa/1.0.10 \
    crate://crates.io/dtor-proc-macro/0.0.5 \
    crate://crates.io/dtor/0.0.6 \
    crate://crates.io/dyn-clone/1.0.20 \
    crate://crates.io/either/1.15.0 \
    crate://crates.io/equivalent/1.0.2 \
    crate://crates.io/errno-dragonfly/0.1.2 \
    crate://crates.io/errno/0.2.8 \
    crate://crates.io/errno/0.3.14 \
    crate://crates.io/evalexpr/11.3.1 \
    crate://crates.io/event-listener/5.4.1 \
    crate://crates.io/fastbloom/0.14.0 \
    crate://crates.io/fastrand/2.3.0 \
    crate://crates.io/filepath/0.1.3 \
    crate://crates.io/find-msvc-tools/0.1.5 \
    crate://crates.io/fixedbitset/0.5.7 \
    crate://crates.io/flate2/1.1.5 \
    crate://crates.io/flume/0.11.1 \
    crate://crates.io/fnv/1.0.7 \
    crate://crates.io/foldhash/0.1.5 \
    crate://crates.io/foldhash/0.2.0 \
    crate://crates.io/form_urlencoded/1.2.2 \
    crate://crates.io/fs2/0.4.3 \
    crate://crates.io/fs_extra/1.3.0 \
    crate://crates.io/futures-channel/0.3.31 \
    crate://crates.io/futures-core/0.3.31 \
    crate://crates.io/futures-executor/0.3.31 \
    crate://crates.io/futures-io/0.3.31 \
    crate://crates.io/futures-macro/0.3.31 \
    crate://crates.io/futures-sink/0.3.31 \
    crate://crates.io/futures-task/0.3.31 \
    crate://crates.io/futures-util/0.3.31 \
    crate://crates.io/futures/0.3.31 \
    crate://crates.io/generic-array/0.14.7 \
    crate://crates.io/getrandom/0.2.16 \
    crate://crates.io/getrandom/0.3.4 \
    crate://crates.io/git-version-macro/0.3.9 \
    crate://crates.io/git-version/0.3.9 \
    crate://crates.io/hashbrown/0.12.3 \
    crate://crates.io/hashbrown/0.14.5 \
    crate://crates.io/hashbrown/0.15.5 \
    crate://crates.io/hashbrown/0.16.1 \
    crate://crates.io/heck/0.5.0 \
    crate://crates.io/hermit-abi/0.5.2 \
    crate://crates.io/hex/0.4.3 \
    crate://crates.io/hmac/0.12.1 \
    crate://crates.io/home/0.5.9 \
    crate://crates.io/http/1.4.0 \
    crate://crates.io/httparse/1.10.1 \
    crate://crates.io/humantime/2.3.0 \
    crate://crates.io/iana-time-zone-haiku/0.1.2 \
    crate://crates.io/iana-time-zone/0.1.64 \
    crate://crates.io/icu_collections/1.5.0 \
    crate://crates.io/icu_locid/1.5.0 \
    crate://crates.io/icu_locid_transform/1.5.0 \
    crate://crates.io/icu_locid_transform_data/1.5.1 \
    crate://crates.io/icu_normalizer/1.5.0 \
    crate://crates.io/icu_normalizer_data/1.5.1 \
    crate://crates.io/icu_properties/1.5.1 \
    crate://crates.io/icu_properties_data/1.5.1 \
    crate://crates.io/icu_provider/1.5.0 \
    crate://crates.io/icu_provider_macros/1.5.0 \
    crate://crates.io/ident_case/1.0.1 \
    crate://crates.io/idna/1.1.0 \
    crate://crates.io/idna_adapter/1.2.0 \
    crate://crates.io/indexmap/1.9.3 \
    crate://crates.io/indexmap/2.11.4 \
    crate://crates.io/inout/0.1.4 \
    crate://crates.io/instant/0.1.13 \
    crate://crates.io/io-kit-sys/0.4.1 \
    crate://crates.io/ipnetwork/0.20.0 \
    crate://crates.io/is_terminal_polyfill/1.70.2 \
    crate://crates.io/itertools/0.14.0 \
    crate://crates.io/itoa/1.0.15 \
    crate://crates.io/jni-sys/0.3.0 \
    crate://crates.io/jni/0.21.1 \
    crate://crates.io/js-sys/0.3.83 \
    crate://crates.io/json5/0.4.1 \
    crate://crates.io/keccak/0.1.5 \
    crate://crates.io/keyed-set/1.1.0 \
    crate://crates.io/lazy_static/1.5.0 \
    crate://crates.io/leb128/0.2.5 \
    crate://crates.io/libc/0.2.178 \
    crate://crates.io/libloading/0.8.9 \
    crate://crates.io/libm/0.2.15 \
    crate://crates.io/libredox/0.1.10 \
    crate://crates.io/linux-raw-sys/0.11.0 \
    crate://crates.io/litemap/0.7.4 \
    crate://crates.io/lock_api/0.4.14 \
    crate://crates.io/log/0.4.29 \
    crate://crates.io/lru-slab/0.1.2 \
    crate://crates.io/lz4_flex/0.11.3 \
    crate://crates.io/mach2/0.4.3 \
    crate://crates.io/matchers/0.2.0 \
    crate://crates.io/memchr/2.7.6 \
    crate://crates.io/memoffset/0.9.1 \
    crate://crates.io/minimal-lexical/0.2.1 \
    crate://crates.io/miniz_oxide/0.8.9 \
    crate://crates.io/mio-serial/5.0.6 \
    crate://crates.io/mio/1.1.1 \
    crate://crates.io/nanorand/0.7.0 \
    crate://crates.io/nix/0.26.4 \
    crate://crates.io/nix/0.27.1 \
    crate://crates.io/nix/0.29.0 \
    crate://crates.io/no-std-net/0.6.0 \
    crate://crates.io/nom/7.1.3 \
    crate://crates.io/nonempty-collections/0.3.1 \
    crate://crates.io/nu-ansi-term/0.50.3 \
    crate://crates.io/num-bigint-dig/0.8.6 \
    crate://crates.io/num-bigint/0.4.6 \
    crate://crates.io/num-conv/0.1.0 \
    crate://crates.io/num-integer/0.1.46 \
    crate://crates.io/num-iter/0.1.45 \
    crate://crates.io/num-traits/0.2.19 \
    crate://crates.io/num_cpus/1.17.0 \
    crate://crates.io/oid-registry/0.8.1 \
    crate://crates.io/once_cell/1.21.3 \
    crate://crates.io/once_cell_polyfill/1.70.2 \
    crate://crates.io/openssl-probe/0.1.6 \
    crate://crates.io/option-ext/0.2.0 \
    crate://crates.io/parking/2.2.1 \
    crate://crates.io/parking_lot/0.11.2 \
    crate://crates.io/parking_lot/0.12.5 \
    crate://crates.io/parking_lot_core/0.8.6 \
    crate://crates.io/parking_lot_core/0.9.12 \
    crate://crates.io/paste/1.0.15 \
    crate://crates.io/pem-rfc7468/0.7.0 \
    crate://crates.io/percent-encoding/2.3.2 \
    crate://crates.io/pest/2.8.0 \
    crate://crates.io/pest_derive/2.8.0 \
    crate://crates.io/pest_generator/2.8.0 \
    crate://crates.io/pest_meta/2.8.0 \
    crate://crates.io/petgraph/0.8.3 \
    crate://crates.io/phf/0.11.3 \
    crate://crates.io/phf/0.13.1 \
    crate://crates.io/phf_generator/0.11.3 \
    crate://crates.io/phf_generator/0.13.1 \
    crate://crates.io/phf_macros/0.11.3 \
    crate://crates.io/phf_macros/0.13.1 \
    crate://crates.io/phf_shared/0.11.3 \
    crate://crates.io/phf_shared/0.13.1 \
    crate://crates.io/pin-project-lite/0.2.16 \
    crate://crates.io/pin-utils/0.1.0 \
    crate://crates.io/pkcs1/0.7.5 \
    crate://crates.io/pkcs8/0.10.2 \
    crate://crates.io/pnet_base/0.35.0 \
    crate://crates.io/pnet_datalink/0.35.0 \
    crate://crates.io/pnet_sys/0.35.0 \
    crate://crates.io/portable-atomic/1.11.1 \
    crate://crates.io/powerfmt/0.2.0 \
    crate://crates.io/ppv-lite86/0.2.21 \
    crate://crates.io/proc-macro-crate/3.4.0 \
    crate://crates.io/proc-macro2/1.0.103 \
    crate://crates.io/prometheus-client-derive-encode/0.5.0 \
    crate://crates.io/prometheus-client/0.24.0 \
    crate://crates.io/quinn-proto/0.11.13 \
    crate://crates.io/quinn-udp/0.5.14 \
    crate://crates.io/quinn/0.11.9 \
    crate://crates.io/quote/1.0.42 \
    crate://crates.io/r-efi/5.3.0 \
    crate://crates.io/rand/0.8.5 \
    crate://crates.io/rand/0.9.2 \
    crate://crates.io/rand_chacha/0.3.1 \
    crate://crates.io/rand_chacha/0.9.0 \
    crate://crates.io/rand_core/0.6.4 \
    crate://crates.io/rand_core/0.9.3 \
    crate://crates.io/redox_syscall/0.2.16 \
    crate://crates.io/redox_syscall/0.5.18 \
    crate://crates.io/redox_users/0.5.2 \
    crate://crates.io/ref-cast-impl/1.0.25 \
    crate://crates.io/ref-cast/1.0.25 \
    crate://crates.io/regex-automata/0.4.13 \
    crate://crates.io/regex-syntax/0.8.8 \
    crate://crates.io/regex/1.12.2 \
    crate://crates.io/ring/0.17.14 \
    crate://crates.io/ringbuffer-spsc/0.1.15 \
    crate://crates.io/ron/0.12.0 \
    crate://crates.io/rsa/0.9.9 \
    crate://crates.io/rustc-hash/2.1.1 \
    crate://crates.io/rustc_version/0.4.1 \
    crate://crates.io/rusticata-macros/4.1.0 \
    crate://crates.io/rustix/1.1.2 \
    crate://crates.io/rustls-native-certs/0.8.2 \
    crate://crates.io/rustls-pemfile/2.2.0 \
    crate://crates.io/rustls-pki-types/1.13.1 \
    crate://crates.io/rustls-platform-verifier-android/0.1.1 \
    crate://crates.io/rustls-platform-verifier/0.6.2 \
    crate://crates.io/rustls-webpki/0.103.8 \
    crate://crates.io/rustls/0.23.35 \
    crate://crates.io/rustversion/1.0.22 \
    crate://crates.io/ryu/1.0.20 \
    crate://crates.io/same-file/1.0.6 \
    crate://crates.io/schannel/0.1.28 \
    crate://crates.io/schemars/0.9.0 \
    crate://crates.io/schemars/1.1.0 \
    crate://crates.io/schemars_derive/1.1.0 \
    crate://crates.io/scopeguard/1.2.0 \
    crate://crates.io/secrecy/0.8.0 \
    crate://crates.io/security-framework-sys/2.15.0 \
    crate://crates.io/security-framework/3.5.1 \
    crate://crates.io/semver/1.0.27 \
    crate://crates.io/serde/1.0.228 \
    crate://crates.io/serde_core/1.0.228 \
    crate://crates.io/serde_derive/1.0.228 \
    crate://crates.io/serde_derive_internals/0.29.1 \
    crate://crates.io/serde_json/1.0.145 \
    crate://crates.io/serde_spanned/1.0.1 \
    crate://crates.io/serde_with/3.14.1 \
    crate://crates.io/serde_with_macros/3.14.1 \
    crate://crates.io/serde_yaml/0.9.34+deprecated \
    crate://crates.io/serialport/4.7.3 \
    crate://crates.io/sha1/0.10.6 \
    crate://crates.io/sha2-const-stable/0.1.0 \
    crate://crates.io/sha2/0.10.9 \
    crate://crates.io/sha3/0.10.8 \
    crate://crates.io/sharded-slab/0.1.7 \
    crate://crates.io/shellexpand/3.1.1 \
    crate://crates.io/shlex/1.3.0 \
    crate://crates.io/signature/2.2.0 \
    crate://crates.io/simd-adler32/0.3.8 \
    crate://crates.io/siphasher/1.0.1 \
    crate://crates.io/slab/0.4.11 \
    crate://crates.io/smallvec/1.15.1 \
    crate://crates.io/socket2/0.5.10 \
    crate://crates.io/socket2/0.6.1 \
    crate://crates.io/spin/0.10.0 \
    crate://crates.io/spin/0.9.8 \
    crate://crates.io/spki/0.7.3 \
    crate://crates.io/stabby-abi/72.1.1 \
    crate://crates.io/stabby-macros/72.1.1 \
    crate://crates.io/stabby/72.1.1 \
    crate://crates.io/stable_deref_trait/1.2.1 \
    crate://crates.io/static_assertions/1.1.0 \
    crate://crates.io/static_init/1.0.3 \
    crate://crates.io/static_init_macro/1.0.4 \
    crate://crates.io/strsim/0.11.1 \
    crate://crates.io/subtle/2.6.1 \
    crate://crates.io/syn/1.0.109 \
    crate://crates.io/syn/2.0.111 \
    crate://crates.io/synstructure/0.13.2 \
    crate://crates.io/talc/4.4.3 \
    crate://crates.io/tempfile/3.23.0 \
    crate://crates.io/thiserror-impl/1.0.69 \
    crate://crates.io/thiserror-impl/2.0.17 \
    crate://crates.io/thiserror/1.0.69 \
    crate://crates.io/thiserror/2.0.17 \
    crate://crates.io/thread-priority/1.2.0 \
    crate://crates.io/thread_local/1.1.9 \
    crate://crates.io/time-core/0.1.4 \
    crate://crates.io/time-macros/0.2.22 \
    crate://crates.io/time/0.3.41 \
    crate://crates.io/tinystr/0.7.6 \
    crate://crates.io/tinyvec/1.10.0 \
    crate://crates.io/tinyvec_macros/0.1.1 \
    crate://crates.io/tls-listener/0.11.0 \
    crate://crates.io/token-cell/2.1.1 \
    crate://crates.io/tokio-macros/2.6.0 \
    crate://crates.io/tokio-rustls/0.26.4 \
    crate://crates.io/tokio-serial/5.4.5 \
    crate://crates.io/tokio-tungstenite/0.24.0 \
    crate://crates.io/tokio-util/0.7.17 \
    crate://crates.io/tokio-vsock/0.5.0 \
    crate://crates.io/tokio/1.48.0 \
    crate://crates.io/toml/0.9.6 \
    crate://crates.io/toml_datetime/0.7.1 \
    crate://crates.io/toml_edit/0.23.5 \
    crate://crates.io/toml_parser/1.0.2 \
    crate://crates.io/toml_writer/1.0.2 \
    crate://crates.io/tracing-attributes/0.1.31 \
    crate://crates.io/tracing-core/0.1.35 \
    crate://crates.io/tracing-log/0.2.0 \
    crate://crates.io/tracing-serde/0.2.0 \
    crate://crates.io/tracing-subscriber/0.3.22 \
    crate://crates.io/tracing/0.1.43 \
    crate://crates.io/tungstenite/0.24.0 \
    crate://crates.io/twox-hash/1.6.3 \
    crate://crates.io/typeid/1.0.3 \
    crate://crates.io/typenum/1.19.0 \
    crate://crates.io/ucd-trie/0.1.7 \
    crate://crates.io/uhlc/0.8.2 \
    crate://crates.io/unescaper/0.1.8 \
    crate://crates.io/unicode-ident/1.0.22 \
    crate://crates.io/unicode-xid/0.2.6 \
    crate://crates.io/unix-named-pipe/0.2.0 \
    crate://crates.io/unsafe-libyaml/0.2.11 \
    crate://crates.io/untrusted/0.9.0 \
    crate://crates.io/unwrap-infallible/0.1.5 \
    crate://crates.io/unzip-n/0.1.2 \
    crate://crates.io/url/2.5.7 \
    crate://crates.io/utf-8/0.7.6 \
    crate://crates.io/utf16_iter/1.0.5 \
    crate://crates.io/utf8_iter/1.0.4 \
    crate://crates.io/utf8parse/0.2.2 \
    crate://crates.io/uuid/1.19.0 \
    crate://crates.io/validated_struct/2.2.0 \
    crate://crates.io/validated_struct_macros/2.2.0 \
    crate://crates.io/valuable/0.1.1 \
    crate://crates.io/vec_map/0.8.2 \
    crate://crates.io/version_check/0.9.5 \
    crate://crates.io/vsock/0.4.0 \
    crate://crates.io/walkdir/2.5.0 \
    crate://crates.io/wasi/0.11.1+wasi-snapshot-preview1 \
    crate://crates.io/wasip2/1.0.1+wasi-0.2.4 \
    crate://crates.io/wasm-bindgen-macro-support/0.2.106 \
    crate://crates.io/wasm-bindgen-macro/0.2.106 \
    crate://crates.io/wasm-bindgen-shared/0.2.106 \
    crate://crates.io/wasm-bindgen/0.2.106 \
    crate://crates.io/web-time/1.1.0 \
    crate://crates.io/webpki-root-certs/1.0.4 \
    crate://crates.io/webpki-roots/1.0.4 \
    crate://crates.io/win-sys/0.3.1 \
    crate://crates.io/winapi-i686-pc-windows-gnu/0.4.0 \
    crate://crates.io/winapi-util/0.1.11 \
    crate://crates.io/winapi-x86_64-pc-windows-gnu/0.4.0 \
    crate://crates.io/winapi/0.3.9 \
    crate://crates.io/windows-core/0.62.2 \
    crate://crates.io/windows-implement/0.60.2 \
    crate://crates.io/windows-interface/0.59.3 \
    crate://crates.io/windows-link/0.2.1 \
    crate://crates.io/windows-result/0.4.1 \
    crate://crates.io/windows-strings/0.5.1 \
    crate://crates.io/windows-sys/0.45.0 \
    crate://crates.io/windows-sys/0.52.0 \
    crate://crates.io/windows-sys/0.60.2 \
    crate://crates.io/windows-sys/0.61.2 \
    crate://crates.io/windows-targets/0.42.2 \
    crate://crates.io/windows-targets/0.52.6 \
    crate://crates.io/windows-targets/0.53.5 \
    crate://crates.io/windows/0.34.0 \
    crate://crates.io/windows_aarch64_gnullvm/0.42.2 \
    crate://crates.io/windows_aarch64_gnullvm/0.52.6 \
    crate://crates.io/windows_aarch64_gnullvm/0.53.1 \
    crate://crates.io/windows_aarch64_msvc/0.34.0 \
    crate://crates.io/windows_aarch64_msvc/0.42.2 \
    crate://crates.io/windows_aarch64_msvc/0.52.6 \
    crate://crates.io/windows_aarch64_msvc/0.53.1 \
    crate://crates.io/windows_i686_gnu/0.34.0 \
    crate://crates.io/windows_i686_gnu/0.42.2 \
    crate://crates.io/windows_i686_gnu/0.52.6 \
    crate://crates.io/windows_i686_gnu/0.53.1 \
    crate://crates.io/windows_i686_gnullvm/0.52.6 \
    crate://crates.io/windows_i686_gnullvm/0.53.1 \
    crate://crates.io/windows_i686_msvc/0.34.0 \
    crate://crates.io/windows_i686_msvc/0.42.2 \
    crate://crates.io/windows_i686_msvc/0.52.6 \
    crate://crates.io/windows_i686_msvc/0.53.1 \
    crate://crates.io/windows_x86_64_gnu/0.34.0 \
    crate://crates.io/windows_x86_64_gnu/0.42.2 \
    crate://crates.io/windows_x86_64_gnu/0.52.6 \
    crate://crates.io/windows_x86_64_gnu/0.53.1 \
    crate://crates.io/windows_x86_64_gnullvm/0.42.2 \
    crate://crates.io/windows_x86_64_gnullvm/0.52.6 \
    crate://crates.io/windows_x86_64_gnullvm/0.53.1 \
    crate://crates.io/windows_x86_64_msvc/0.34.0 \
    crate://crates.io/windows_x86_64_msvc/0.42.2 \
    crate://crates.io/windows_x86_64_msvc/0.52.6 \
    crate://crates.io/windows_x86_64_msvc/0.53.1 \
    crate://crates.io/winnow/0.7.14 \
    crate://crates.io/wit-bindgen/0.46.0 \
    crate://crates.io/write16/1.0.0 \
    crate://crates.io/writeable/0.5.5 \
    crate://crates.io/x509-parser/0.18.0 \
    crate://crates.io/yoke-derive/0.7.5 \
    crate://crates.io/yoke/0.7.5 \
    crate://crates.io/z-serial/0.3.1 \
    crate://crates.io/zenoh-buffers/1.7.1 \
    crate://crates.io/zenoh-codec/1.7.1 \
    crate://crates.io/zenoh-collections/1.7.1 \
    crate://crates.io/zenoh-config/1.7.1 \
    crate://crates.io/zenoh-core/1.7.1 \
    crate://crates.io/zenoh-crypto/1.7.1 \
    crate://crates.io/zenoh-ext/1.7.1 \
    crate://crates.io/zenoh-keyexpr/1.7.1 \
    crate://crates.io/zenoh-link-commons/1.7.1 \
    crate://crates.io/zenoh-link-quic/1.7.1 \
    crate://crates.io/zenoh-link-quic_datagram/1.7.1 \
    crate://crates.io/zenoh-link-serial/1.7.1 \
    crate://crates.io/zenoh-link-tcp/1.7.1 \
    crate://crates.io/zenoh-link-tls/1.7.1 \
    crate://crates.io/zenoh-link-udp/1.7.1 \
    crate://crates.io/zenoh-link-unixpipe/1.7.1 \
    crate://crates.io/zenoh-link-unixsock_stream/1.7.1 \
    crate://crates.io/zenoh-link-vsock/1.7.1 \
    crate://crates.io/zenoh-link-ws/1.7.1 \
    crate://crates.io/zenoh-link/1.7.1 \
    crate://crates.io/zenoh-macros/1.7.1 \
    crate://crates.io/zenoh-plugin-trait/1.7.1 \
    crate://crates.io/zenoh-protocol/1.7.1 \
    crate://crates.io/zenoh-result/1.7.1 \
    crate://crates.io/zenoh-runtime/1.7.1 \
    crate://crates.io/zenoh-shm/1.7.1 \
    crate://crates.io/zenoh-stats/1.7.1 \
    crate://crates.io/zenoh-sync/1.7.1 \
    crate://crates.io/zenoh-task/1.7.1 \
    crate://crates.io/zenoh-transport/1.7.1 \
    crate://crates.io/zenoh-util/1.7.1 \
    crate://crates.io/zenoh/1.7.1 \
    crate://crates.io/zerocopy-derive/0.8.31 \
    crate://crates.io/zerocopy/0.8.31 \
    crate://crates.io/zerofrom-derive/0.1.6 \
    crate://crates.io/zerofrom/0.1.5 \
    crate://crates.io/zeroize/1.8.2 \
    crate://crates.io/zerovec-derive/0.10.3 \
    crate://crates.io/zerovec/0.10.4 \
"

SRC_URI[adler2-2.0.1.sha256sum] = "320119579fcad9c21884f5c4861d16174d0e06250625266f50fe6898340abefa"
SRC_URI[advisory-lock-0.3.0.sha256sum] = "a6caee7d48f930f9ad3fc9546f8cbf843365da0c5b0ca4eee1d1ac3dd12d8f93"
SRC_URI[aes-0.8.4.sha256sum] = "b169f7a6d4742236a0a00c541b845991d0ac43e546831af1249753ab4c3aa3a0"
SRC_URI[ahash-0.8.12.sha256sum] = "5a15f179cd60c4584b8a8c596927aadc462e27f2ca70c04e0071964a73ba7a75"
SRC_URI[aho-corasick-1.1.4.sha256sum] = "ddd31a130427c27518df266943a5308ed92d4b226cc639f5a8f1002816174301"
SRC_URI[allocator-api2-0.2.21.sha256sum] = "683d7910e743518b0e34f1186f92494becacb047c7b6bf616c96772180fef923"
SRC_URI[android_system_properties-0.1.5.sha256sum] = "819e7219dbd41043ac279b19830f2efc897156490d7fd6ea916720117ee66311"
SRC_URI[anstream-0.6.21.sha256sum] = "43d5b281e737544384e969a5ccad3f1cdd24b48086a0fc1b2a5262a26b8f4f4a"
SRC_URI[anstyle-1.0.13.sha256sum] = "5192cca8006f1fd4f7237516f40fa183bb07f8fbdfedaa0036de5ea9b0b45e78"
SRC_URI[anstyle-parse-0.2.7.sha256sum] = "4e7644824f0aa2c7b9384579234ef10eb7efb6a0deb83f9630a49594dd9c15c2"
SRC_URI[anstyle-query-1.1.5.sha256sum] = "40c48f72fd53cd289104fc64099abca73db4166ad86ea0b4341abe65af83dadc"
SRC_URI[anstyle-wincon-3.0.11.sha256sum] = "291e6a250ff86cd4a820112fb8898808a366d8f9f58ce16d1f538353ad55747d"
SRC_URI[anyhow-1.0.100.sha256sum] = "a23eb6b1614318a8071c9b2521f36b424b2c83db5eb3a0fead4a6c0809af6e61"
SRC_URI[arc-swap-1.7.1.sha256sum] = "69f7f8c3906b62b754cd5326047894316021dcfe5a194c8ea52bdd94934a3457"
SRC_URI[array-init-2.1.0.sha256sum] = "3d62b7694a562cdf5a74227903507c56ab2cc8bdd1f781ed5cb4cf9c9f810bfc"
SRC_URI[asn1-rs-0.7.1.sha256sum] = "56624a96882bb8c26d61312ae18cb45868e5a9992ea73c58e45c3101e56a1e60"
SRC_URI[asn1-rs-derive-0.6.0.sha256sum] = "3109e49b1e4909e9db6515a30c633684d68cdeaa252f215214cb4fa1a5bfee2c"
SRC_URI[asn1-rs-impl-0.2.0.sha256sum] = "7b18050c2cd6fe86c3a76584ef5e0baf286d038cda203eb6223df2cc413565f7"
SRC_URI[async-trait-0.1.89.sha256sum] = "9035ad2d096bed7955a320ee7e2230574d28fd3c3a0f186cbea1ff3c7eed5dbb"
SRC_URI[autocfg-1.5.0.sha256sum] = "c08606f8c3cbf4ce6ec8e28fb0014a2c086708fe954eaa885384a6165172e7e8"
SRC_URI[base64-0.22.1.sha256sum] = "72b3254f16251a8381aa12e40e3c4d2f0199f8c6508fbecb9d91f575e0fbb8c6"
SRC_URI[base64ct-1.6.0.sha256sum] = "8c3c1a368f70d6cf7302d78f8f7093da241fb8e8807c05cc9e51a125895a6d5b"
SRC_URI[bincode-1.3.3.sha256sum] = "b1f45e9417d87227c7a56d22e471c6206462cba514c7590c09aff4cf6d1ddcad"
SRC_URI[bitflags-1.3.2.sha256sum] = "bef38d45163c2f1dde094a7dfd33ccf595c92905c8f8f4fdc18d06fb1037718a"
SRC_URI[bitflags-2.10.0.sha256sum] = "812e12b5285cc515a9c72a5c1d3b6d46a19dac5acfef5265968c166106e31dd3"
SRC_URI[block-buffer-0.10.4.sha256sum] = "3078c7629b62d3f0439517fa394996acacc5cbc91c5a20d8c658e77abd503a71"
SRC_URI[buddy_system_allocator-0.10.0.sha256sum] = "a7913f22349ffcfc6ca0ca9a656ec26cfbba538ed49c31a273dff2c5d1ea83d9"
SRC_URI[bumpalo-3.19.0.sha256sum] = "46c5e41b57b8bba42a04676d81cb89e9ee8e859a1a66f80a5a72e1cb76b34d43"
SRC_URI[byteorder-1.5.0.sha256sum] = "1fd0f2584146f6f2ef48085050886acf353beff7305ebd1ae69500e27c67f64b"
SRC_URI[bytes-1.11.0.sha256sum] = "b35204fbdc0b3f4446b89fc1ac2cf84a8a68971995d0bf2e925ec7cd960f9cb3"
SRC_URI[cbindgen-0.29.2.sha256sum] = "befbfd072a8e81c02f8c507aefce431fe5e7d051f83d48a23ffc9b9fe5a11799"
SRC_URI[cc-1.2.49.sha256sum] = "90583009037521a116abf44494efecd645ba48b6622457080f080b85544e2215"
SRC_URI[cesu8-1.1.0.sha256sum] = "6d43a04d8753f35258c91f8ec639f792891f748a1edbd759cf1dcea3382ad83c"
SRC_URI[cfg-if-1.0.4.sha256sum] = "9330f8b2ff13f34540b44e946ef35111825727b38d33286ef986142615121801"
SRC_URI[cfg_aliases-0.1.1.sha256sum] = "fd16c4719339c4530435d38e511904438d07cce7950afa3718a84ac36c10e89e"
SRC_URI[cfg_aliases-0.2.1.sha256sum] = "613afe47fcd5fac7ccf1db93babcb082c5994d996f20b8b159f2ad1658eb5724"
SRC_URI[chrono-0.4.42.sha256sum] = "145052bdd345b87320e369255277e3fb5152762ad123a901ef5c262dd38fe8d2"
SRC_URI[cipher-0.4.4.sha256sum] = "773f3b9af64447d2ce9850330c473515014aa235e6a783b02db81ff39e4a3dad"
SRC_URI[clap-4.5.53.sha256sum] = "c9e340e012a1bf4935f5282ed1436d1489548e8f72308207ea5df0e23d2d03f8"
SRC_URI[clap_builder-4.5.53.sha256sum] = "d76b5d13eaa18c901fd2f7fca939fefe3a0727a953561fefdf3b2922b8569d00"
SRC_URI[clap_lex-0.7.6.sha256sum] = "a1d728cc89cf3aee9ff92b05e62b19ee65a02b5702cff7d5a377e32c6ae29d8d"
SRC_URI[cobs-0.2.3.sha256sum] = "67ba02a97a2bd10f4b59b25c7973101c79642302776489e030cd13cdab09ed15"
SRC_URI[colorchoice-1.0.4.sha256sum] = "b05b61dc5112cbb17e4b6cd61790d9845d13888356391624cbe7e41efeac1e75"
SRC_URI[combine-4.6.7.sha256sum] = "ba5a308b75df32fe02788e748662718f03fde005016435c444eea572398219fd"
SRC_URI[concurrent-queue-2.5.0.sha256sum] = "4ca0197aee26d1ae37445ee532fefce43251d24cc7c166799f4d46817f1d3973"
SRC_URI[const-oid-0.9.6.sha256sum] = "c2459377285ad874054d797f3ccebf984978aa39129f6eafde5cdc8315b612f8"
SRC_URI[const_format-0.2.35.sha256sum] = "7faa7469a93a566e9ccc1c73fe783b4a65c274c5ace346038dca9c39fe0030ad"
SRC_URI[const_format_proc_macros-0.2.34.sha256sum] = "1d57c2eccfb16dbac1f4e61e206105db5820c9d26c3c472bc17c774259ef7744"
SRC_URI[core-foundation-0.10.1.sha256sum] = "b2a6cd9ae233e7f62ba4e9353e81a88df7fc8a5987b8d445b4d90c879bd156f6"
SRC_URI[core-foundation-sys-0.8.7.sha256sum] = "773648b94d0e5d620f64f280777445740e61fe701025087ec8b57f45c791888b"
SRC_URI[cpufeatures-0.2.17.sha256sum] = "59ed5838eebb26a2bb2e58f6d5b5316989ae9d08bab10e0e6d103e656d1b0280"
SRC_URI[crc32fast-1.5.0.sha256sum] = "9481c1c90cbf2ac953f07c8d4a58aa3945c425b7185c9154d67a65e4230da511"
SRC_URI[crossbeam-0.8.4.sha256sum] = "1137cd7e7fc0fb5d3c5a8678be38ec56e819125d8d7907411fe24ccb943faca8"
SRC_URI[crossbeam-channel-0.5.15.sha256sum] = "82b8f8f868b36967f9606790d1903570de9ceaf870a7bf9fbbd3016d636a2cb2"
SRC_URI[crossbeam-deque-0.8.6.sha256sum] = "9dd111b7b7f7d55b72c0a6ae361660ee5853c9af73f70c3c2ef6858b950e2e51"
SRC_URI[crossbeam-epoch-0.9.18.sha256sum] = "5b82ac4a3c2ca9c3460964f020e1402edd5753411d7737aa39c3714ad1b5420e"
SRC_URI[crossbeam-queue-0.3.12.sha256sum] = "0f58bbc28f91df819d0aa2a2c00cd19754769c2fad90579b3592b1c9ba7a3115"
SRC_URI[crossbeam-utils-0.8.21.sha256sum] = "d0a5c400df2834b80a4c3327b3aad3a4c4cd4de0629063962b03235697506a28"
SRC_URI[crypto-common-0.1.7.sha256sum] = "78c8292055d1c1df0cce5d180393dc8cce0abec0a7102adb6c7b1eef6016d60a"
SRC_URI[ctor-0.4.3.sha256sum] = "ec09e802f5081de6157da9a75701d6c713d8dc3ba52571fd4bd25f412644e8a6"
SRC_URI[ctor-proc-macro-0.0.6.sha256sum] = "e2931af7e13dc045d8e9d26afccc6fa115d64e115c9c84b1166288b46f6782c2"
SRC_URI[darling-0.21.3.sha256sum] = "9cdf337090841a411e2a7f3deb9187445851f91b309c0c0a29e05f74a00a48c0"
SRC_URI[darling_core-0.21.3.sha256sum] = "1247195ecd7e3c85f83c8d2a366e4210d588e802133e1e355180a9870b517ea4"
SRC_URI[darling_macro-0.21.3.sha256sum] = "d38308df82d1080de0afee5d069fa14b0326a88c14f15c5ccda35b4a6c414c81"
SRC_URI[data-encoding-2.9.0.sha256sum] = "2a2330da5de22e8a3cb63252ce2abb30116bf5265e89c0e01bc17015ce30a476"
SRC_URI[der-0.7.10.sha256sum] = "e7c1832837b905bbfb5101e07cc24c8deddf52f93225eee6ead5f4d63d53ddcb"
SRC_URI[der-parser-10.0.0.sha256sum] = "07da5016415d5a3c4dd39b11ed26f915f52fc4e0dc197d87908bc916e51bc1a6"
SRC_URI[deranged-0.4.0.sha256sum] = "9c9e6a11ca8224451684bc0d7d5a7adbf8f2fd6887261a1cfc3c0432f9d4068e"
SRC_URI[digest-0.10.7.sha256sum] = "9ed9a281f7bc9b7576e61468ba615a66a5c8cfdff42420a70aa82701a3b1e292"
SRC_URI[dirs-6.0.0.sha256sum] = "c3e8aa94d75141228480295a7d0e7feb620b1a5ad9f12bc40be62411e38cce4e"
SRC_URI[dirs-sys-0.5.0.sha256sum] = "e01a3366d27ee9890022452ee61b2b63a67e6f13f58900b651ff5665f0bb1fab"
SRC_URI[displaydoc-0.2.5.sha256sum] = "97369cbbc041bc366949bc74d34658d6cda5621039731c6310521892a3a20ae0"
SRC_URI[dtoa-1.0.10.sha256sum] = "d6add3b8cff394282be81f3fc1a0605db594ed69890078ca6e2cab1c408bcf04"
SRC_URI[dtor-0.0.6.sha256sum] = "97cbdf2ad6846025e8e25df05171abfb30e3ababa12ee0a0e44b9bbe570633a8"
SRC_URI[dtor-proc-macro-0.0.5.sha256sum] = "7454e41ff9012c00d53cf7f475c5e3afa3b91b7c90568495495e8d9bf47a1055"
SRC_URI[dyn-clone-1.0.20.sha256sum] = "d0881ea181b1df73ff77ffaaf9c7544ecc11e82fba9b5f27b262a3c73a332555"
SRC_URI[either-1.15.0.sha256sum] = "48c757948c5ede0e46177b7add2e67155f70e33c07fea8284df6576da70b3719"
SRC_URI[equivalent-1.0.2.sha256sum] = "877a4ace8713b0bcf2a4e7eec82529c029f1d0619886d18145fea96c3ffe5c0f"
SRC_URI[errno-0.2.8.sha256sum] = "f639046355ee4f37944e44f60642c6f3a7efa3cf6b78c78a0d989a8ce6c396a1"
SRC_URI[errno-0.3.14.sha256sum] = "39cab71617ae0d63f51a36d69f866391735b51691dbda63cf6f96d042b63efeb"
SRC_URI[errno-dragonfly-0.1.2.sha256sum] = "aa68f1b12764fab894d2755d2518754e71b4fd80ecfb822714a1206c2aab39bf"
SRC_URI[evalexpr-11.3.1.sha256sum] = "b6aff27af350e7b53e82aac3e5ab6389abd8f280640ac034508dff0608c4c7e5"
SRC_URI[event-listener-5.4.1.sha256sum] = "e13b66accf52311f30a0db42147dadea9850cb48cd070028831ae5f5d4b856ab"
SRC_URI[fastbloom-0.14.0.sha256sum] = "18c1ddb9231d8554c2d6bdf4cfaabf0c59251658c68b6c95cd52dd0c513a912a"
SRC_URI[fastrand-2.3.0.sha256sum] = "37909eebbb50d72f9059c3b6d82c0463f2ff062c9e95845c43a6c9c0355411be"
SRC_URI[filepath-0.1.3.sha256sum] = "38ea8b8ba1c652fcc17279418e1d1eac2a05c6a941e13407b325719b2b1f617f"
SRC_URI[find-msvc-tools-0.1.5.sha256sum] = "3a3076410a55c90011c298b04d0cfa770b00fa04e1e3c97d3f6c9de105a03844"
SRC_URI[fixedbitset-0.5.7.sha256sum] = "1d674e81391d1e1ab681a28d99df07927c6d4aa5b027d7da16ba32d1d21ecd99"
SRC_URI[flate2-1.1.5.sha256sum] = "bfe33edd8e85a12a67454e37f8c75e730830d83e313556ab9ebf9ee7fbeb3bfb"
SRC_URI[flume-0.11.1.sha256sum] = "da0e4dd2a88388a1f4ccc7c9ce104604dab68d9f408dc34cd45823d5a9069095"
SRC_URI[fnv-1.0.7.sha256sum] = "3f9eec918d3f24069decb9af1554cad7c880e2da24a9afd88aca000531ab82c1"
SRC_URI[foldhash-0.1.5.sha256sum] = "d9c4f5dac5e15c24eb999c26181a6ca40b39fe946cbe4c263c7209467bc83af2"
SRC_URI[foldhash-0.2.0.sha256sum] = "77ce24cb58228fbb8aa041425bb1050850ac19177686ea6e0f41a70416f56fdb"
SRC_URI[form_urlencoded-1.2.2.sha256sum] = "cb4cb245038516f5f85277875cdaa4f7d2c9a0fa0468de06ed190163b1581fcf"
SRC_URI[fs2-0.4.3.sha256sum] = "9564fc758e15025b46aa6643b1b77d047d1a56a1aea6e01002ac0c7026876213"
SRC_URI[fs_extra-1.3.0.sha256sum] = "42703706b716c37f96a77aea830392ad231f44c9e9a67872fa5548707e11b11c"
SRC_URI[futures-0.3.31.sha256sum] = "65bc07b1a8bc7c85c5f2e110c476c7389b4554ba72af57d8445ea63a576b0876"
SRC_URI[futures-channel-0.3.31.sha256sum] = "2dff15bf788c671c1934e366d07e30c1814a8ef514e1af724a602e8a2fbe1b10"
SRC_URI[futures-core-0.3.31.sha256sum] = "05f29059c0c2090612e8d742178b0580d2dc940c837851ad723096f87af6663e"
SRC_URI[futures-executor-0.3.31.sha256sum] = "1e28d1d997f585e54aebc3f97d39e72338912123a67330d723fdbb564d646c9f"
SRC_URI[futures-io-0.3.31.sha256sum] = "9e5c1b78ca4aae1ac06c48a526a655760685149f0d465d21f37abfe57ce075c6"
SRC_URI[futures-macro-0.3.31.sha256sum] = "162ee34ebcb7c64a8abebc059ce0fee27c2262618d7b60ed8faf72fef13c3650"
SRC_URI[futures-sink-0.3.31.sha256sum] = "e575fab7d1e0dcb8d0c7bcf9a63ee213816ab51902e6d244a95819acacf1d4f7"
SRC_URI[futures-task-0.3.31.sha256sum] = "f90f7dce0722e95104fcb095585910c0977252f286e354b5e3bd38902cd99988"
SRC_URI[futures-util-0.3.31.sha256sum] = "9fa08315bb612088cc391249efdc3bc77536f16c91f6cf495e6fbe85b20a4a81"
SRC_URI[generic-array-0.14.7.sha256sum] = "85649ca51fd72272d7821adaf274ad91c288277713d9c18820d8499a7ff69e9a"
SRC_URI[getrandom-0.2.16.sha256sum] = "335ff9f135e4384c8150d6f27c6daed433577f86b4750418338c01a1a2528592"
SRC_URI[getrandom-0.3.4.sha256sum] = "899def5c37c4fd7b2664648c28120ecec138e4d395b459e5ca34f9cce2dd77fd"
SRC_URI[git-version-0.3.9.sha256sum] = "1ad568aa3db0fcbc81f2f116137f263d7304f512a1209b35b85150d3ef88ad19"
SRC_URI[git-version-macro-0.3.9.sha256sum] = "53010ccb100b96a67bc32c0175f0ed1426b31b655d562898e57325f81c023ac0"
SRC_URI[hashbrown-0.12.3.sha256sum] = "8a9ee70c43aaf417c914396645a0fa852624801b24ebb7ae78fe8272889ac888"
SRC_URI[hashbrown-0.14.5.sha256sum] = "e5274423e17b7c9fc20b6e7e208532f9b19825d82dfd615708b70edd83df41f1"
SRC_URI[hashbrown-0.15.5.sha256sum] = "9229cfe53dfd69f0609a49f65461bd93001ea1ef889cd5529dd176593f5338a1"
SRC_URI[hashbrown-0.16.1.sha256sum] = "841d1cc9bed7f9236f321df977030373f4a4163ae1a7dbfe1a51a2c1a51d9100"
SRC_URI[heck-0.5.0.sha256sum] = "2304e00983f87ffb38b55b444b5e3b60a884b5d30c0fca7d82fe33449bbe55ea"
SRC_URI[hermit-abi-0.5.2.sha256sum] = "fc0fef456e4baa96da950455cd02c081ca953b141298e41db3fc7e36b1da849c"
SRC_URI[hex-0.4.3.sha256sum] = "7f24254aa9a54b5c858eaee2f5bccdb46aaf0e486a595ed5fd8f86ba55232a70"
SRC_URI[hmac-0.12.1.sha256sum] = "6c49c37c09c17a53d937dfbb742eb3a961d65a994e6bcdcf37e7399d0cc8ab5e"
SRC_URI[home-0.5.9.sha256sum] = "e3d1354bf6b7235cb4a0576c2619fd4ed18183f689b12b006a0ee7329eeff9a5"
SRC_URI[http-1.4.0.sha256sum] = "e3ba2a386d7f85a81f119ad7498ebe444d2e22c2af0b86b069416ace48b3311a"
SRC_URI[httparse-1.10.1.sha256sum] = "6dbf3de79e51f3d586ab4cb9d5c3e2c14aa28ed23d180cf89b4df0454a69cc87"
SRC_URI[humantime-2.3.0.sha256sum] = "135b12329e5e3ce057a9f972339ea52bc954fe1e9358ef27f95e89716fbc5424"
SRC_URI[iana-time-zone-0.1.64.sha256sum] = "33e57f83510bb73707521ebaffa789ec8caf86f9657cad665b092b581d40e9fb"
SRC_URI[iana-time-zone-haiku-0.1.2.sha256sum] = "f31827a206f56af32e590ba56d5d2d085f558508192593743f16b2306495269f"
SRC_URI[icu_collections-1.5.0.sha256sum] = "db2fa452206ebee18c4b5c2274dbf1de17008e874b4dc4f0aea9d01ca79e4526"
SRC_URI[icu_locid-1.5.0.sha256sum] = "13acbb8371917fc971be86fc8057c41a64b521c184808a698c02acc242dbf637"
SRC_URI[icu_locid_transform-1.5.0.sha256sum] = "01d11ac35de8e40fdeda00d9e1e9d92525f3f9d887cdd7aa81d727596788b54e"
SRC_URI[icu_locid_transform_data-1.5.1.sha256sum] = "7515e6d781098bf9f7205ab3fc7e9709d34554ae0b21ddbcb5febfa4bc7df11d"
SRC_URI[icu_normalizer-1.5.0.sha256sum] = "19ce3e0da2ec68599d193c93d088142efd7f9c5d6fc9b803774855747dc6a84f"
SRC_URI[icu_normalizer_data-1.5.1.sha256sum] = "c5e8338228bdc8ab83303f16b797e177953730f601a96c25d10cb3ab0daa0cb7"
SRC_URI[icu_properties-1.5.1.sha256sum] = "93d6020766cfc6302c15dbbc9c8778c37e62c14427cb7f6e601d849e092aeef5"
SRC_URI[icu_properties_data-1.5.1.sha256sum] = "85fb8799753b75aee8d2a21d7c14d9f38921b54b3dbda10f5a3c7a7b82dba5e2"
SRC_URI[icu_provider-1.5.0.sha256sum] = "6ed421c8a8ef78d3e2dbc98a973be2f3770cb42b606e3ab18d6237c4dfde68d9"
SRC_URI[icu_provider_macros-1.5.0.sha256sum] = "1ec89e9337638ecdc08744df490b221a7399bf8d164eb52a665454e60e075ad6"
SRC_URI[ident_case-1.0.1.sha256sum] = "b9e0384b61958566e926dc50660321d12159025e767c18e043daf26b70104c39"
SRC_URI[idna-1.1.0.sha256sum] = "3b0875f23caa03898994f6ddc501886a45c7d3d62d04d2d90788d47be1b1e4de"
SRC_URI[idna_adapter-1.2.0.sha256sum] = "daca1df1c957320b2cf139ac61e7bd64fed304c5040df000a745aa1de3b4ef71"
SRC_URI[indexmap-1.9.3.sha256sum] = "bd070e393353796e801d209ad339e89596eb4c8d430d18ede6a1cced8fafbd99"
SRC_URI[indexmap-2.11.4.sha256sum] = "4b0f83760fb341a774ed326568e19f5a863af4a952def8c39f9ab92fd95b88e5"
SRC_URI[inout-0.1.4.sha256sum] = "879f10e63c20629ecabbb64a8010319738c66a5cd0c29b02d63d272b03751d01"
SRC_URI[instant-0.1.13.sha256sum] = "e0242819d153cba4b4b05a5a8f2a7e9bbf97b6055b2a002b395c96b5ff3c0222"
SRC_URI[io-kit-sys-0.4.1.sha256sum] = "617ee6cf8e3f66f3b4ea67a4058564628cde41901316e19f559e14c7c72c5e7b"
SRC_URI[ipnetwork-0.20.0.sha256sum] = "bf466541e9d546596ee94f9f69590f89473455f88372423e0008fc1a7daf100e"
SRC_URI[is_terminal_polyfill-1.70.2.sha256sum] = "a6cb138bb79a146c1bd460005623e142ef0181e3d0219cb493e02f7d08a35695"
SRC_URI[itertools-0.14.0.sha256sum] = "2b192c782037fadd9cfa75548310488aabdbf3d2da73885b31bd0abd03351285"
SRC_URI[itoa-1.0.15.sha256sum] = "4a5f13b858c8d314ee3e8f639011f7ccefe71f97f96e50151fb991f267928e2c"
SRC_URI[jni-0.21.1.sha256sum] = "1a87aa2bb7d2af34197c04845522473242e1aa17c12f4935d5856491a7fb8c97"
SRC_URI[jni-sys-0.3.0.sha256sum] = "8eaf4bc02d17cbdd7ff4c7438cafcdf7fb9a4613313ad11b4f8fefe7d3fa0130"
SRC_URI[js-sys-0.3.83.sha256sum] = "464a3709c7f55f1f721e5389aa6ea4e3bc6aba669353300af094b29ffbdde1d8"
SRC_URI[json5-0.4.1.sha256sum] = "96b0db21af676c1ce64250b5f40f3ce2cf27e4e47cb91ed91eb6fe9350b430c1"
SRC_URI[keccak-0.1.5.sha256sum] = "ecc2af9a1119c51f12a14607e783cb977bde58bc069ff0c3da1095e635d70654"
SRC_URI[keyed-set-1.1.0.sha256sum] = "89d255a6b6ecd77bb93ce91de984d7039bff7503f500eb4851a1269732f22baf"
SRC_URI[lazy_static-1.5.0.sha256sum] = "bbd2bcb4c963f2ddae06a2efc7e9f3591312473c50c6685e1f298068316e66fe"
SRC_URI[leb128-0.2.5.sha256sum] = "884e2677b40cc8c339eaefcb701c32ef1fd2493d71118dc0ca4b6a736c93bd67"
SRC_URI[libc-0.2.178.sha256sum] = "37c93d8daa9d8a012fd8ab92f088405fb202ea0b6ab73ee2482ae66af4f42091"
SRC_URI[libloading-0.8.9.sha256sum] = "d7c4b02199fee7c5d21a5ae7d8cfa79a6ef5bb2fc834d6e9058e89c825efdc55"
SRC_URI[libm-0.2.15.sha256sum] = "f9fbbcab51052fe104eb5e5d351cf728d30a5be1fe14d9be8a3b097481fb97de"
SRC_URI[libredox-0.1.10.sha256sum] = "416f7e718bdb06000964960ffa43b4335ad4012ae8b99060261aa4a8088d5ccb"
SRC_URI[linux-raw-sys-0.11.0.sha256sum] = "df1d3c3b53da64cf5760482273a98e575c651a67eec7f77df96b5b642de8f039"
SRC_URI[litemap-0.7.4.sha256sum] = "4ee93343901ab17bd981295f2cf0026d4ad018c7c31ba84549a4ddbb47a45104"
SRC_URI[lock_api-0.4.14.sha256sum] = "224399e74b87b5f3557511d98dff8b14089b3dadafcab6bb93eab67d3aace965"
SRC_URI[log-0.4.29.sha256sum] = "5e5032e24019045c762d3c0f28f5b6b8bbf38563a65908389bf7978758920897"
SRC_URI[lru-slab-0.1.2.sha256sum] = "112b39cec0b298b6c1999fee3e31427f74f676e4cb9879ed1a121b43661a4154"
SRC_URI[lz4_flex-0.11.3.sha256sum] = "75761162ae2b0e580d7e7c390558127e5f01b4194debd6221fd8c207fc80e3f5"
SRC_URI[mach2-0.4.3.sha256sum] = "d640282b302c0bb0a2a8e0233ead9035e3bed871f0b7e81fe4a1ec829765db44"
SRC_URI[matchers-0.2.0.sha256sum] = "d1525a2a28c7f4fa0fc98bb91ae755d1e2d1505079e05539e35bc876b5d65ae9"
SRC_URI[memchr-2.7.6.sha256sum] = "f52b00d39961fc5b2736ea853c9cc86238e165017a493d1d5c8eac6bdc4cc273"
SRC_URI[memoffset-0.9.1.sha256sum] = "488016bfae457b036d996092f6cb448677611ce4449e970ceaf42695203f218a"
SRC_URI[minimal-lexical-0.2.1.sha256sum] = "68354c5c6bd36d73ff3feceb05efa59b6acb7626617f4962be322a825e61f79a"
SRC_URI[miniz_oxide-0.8.9.sha256sum] = "1fa76a2c86f704bdb222d66965fb3d63269ce38518b83cb0575fca855ebb6316"
SRC_URI[mio-1.1.1.sha256sum] = "a69bcab0ad47271a0234d9422b131806bf3968021e5dc9328caf2d4cd58557fc"
SRC_URI[mio-serial-5.0.6.sha256sum] = "029e1f407e261176a983a6599c084efd322d9301028055c87174beac71397ba3"
SRC_URI[nanorand-0.7.0.sha256sum] = "6a51313c5820b0b02bd422f4b44776fbf47961755c74ce64afc73bfad10226c3"
SRC_URI[nix-0.26.4.sha256sum] = "598beaf3cc6fdd9a5dfb1630c2800c7acd31df7aaf0f565796fba2b53ca1af1b"
SRC_URI[nix-0.27.1.sha256sum] = "2eb04e9c688eff1c89d72b407f168cf79bb9e867a9d3323ed6c01519eb9cc053"
SRC_URI[nix-0.29.0.sha256sum] = "71e2746dc3a24dd78b3cfcb7be93368c6de9963d30f43a6a73998a9cf4b17b46"
SRC_URI[no-std-net-0.6.0.sha256sum] = "43794a0ace135be66a25d3ae77d41b91615fb68ae937f904090203e81f755b65"
SRC_URI[nom-7.1.3.sha256sum] = "d273983c5a657a70a3e8f2a01329822f3b8c8172b73826411a55751e404a0a4a"
SRC_URI[nonempty-collections-0.3.1.sha256sum] = "e216d0e8cf9d54fa66e5780f6e1d5dc96d1c1b3c25aeba3b6758548bcbbd8b9d"
SRC_URI[nu-ansi-term-0.50.3.sha256sum] = "7957b9740744892f114936ab4a57b3f487491bbeafaf8083688b16841a4240e5"
SRC_URI[num-bigint-0.4.6.sha256sum] = "a5e44f723f1133c9deac646763579fdb3ac745e418f2a7af9cd0c431da1f20b9"
SRC_URI[num-bigint-dig-0.8.6.sha256sum] = "e661dda6640fad38e827a6d4a310ff4763082116fe217f279885c97f511bb0b7"
SRC_URI[num-conv-0.1.0.sha256sum] = "51d515d32fb182ee37cda2ccdcb92950d6a3c2893aa280e540671c2cd0f3b1d9"
SRC_URI[num-integer-0.1.46.sha256sum] = "7969661fd2958a5cb096e56c8e1ad0444ac2bbcd0061bd28660485a44879858f"
SRC_URI[num-iter-0.1.45.sha256sum] = "1429034a0490724d0075ebb2bc9e875d6503c3cf69e235a8941aa757d83ef5bf"
SRC_URI[num-traits-0.2.19.sha256sum] = "071dfc062690e90b734c0b2273ce72ad0ffa95f0c74596bc250dcfd960262841"
SRC_URI[num_cpus-1.17.0.sha256sum] = "91df4bbde75afed763b708b7eee1e8e7651e02d97f6d5dd763e89367e957b23b"
SRC_URI[oid-registry-0.8.1.sha256sum] = "12f40cff3dde1b6087cc5d5f5d4d65712f34016a03ed60e9c08dcc392736b5b7"
SRC_URI[once_cell-1.21.3.sha256sum] = "42f5e15c9953c5e4ccceeb2e7382a716482c34515315f7b03532b8b4e8393d2d"
SRC_URI[once_cell_polyfill-1.70.2.sha256sum] = "384b8ab6d37215f3c5301a95a4accb5d64aa607f1fcb26a11b5303878451b4fe"
SRC_URI[openssl-probe-0.1.6.sha256sum] = "d05e27ee213611ffe7d6348b942e8f942b37114c00cc03cec254295a4a17852e"
SRC_URI[option-ext-0.2.0.sha256sum] = "04744f49eae99ab78e0d5c0b603ab218f515ea8cfe5a456d7629ad883a3b6e7d"
SRC_URI[parking-2.2.1.sha256sum] = "f38d5652c16fde515bb1ecef450ab0f6a219d619a7274976324d5e377f7dceba"
SRC_URI[parking_lot-0.11.2.sha256sum] = "7d17b78036a60663b797adeaee46f5c9dfebb86948d1255007a1d6be0271ff99"
SRC_URI[parking_lot-0.12.5.sha256sum] = "93857453250e3077bd71ff98b6a65ea6621a19bb0f559a85248955ac12c45a1a"
SRC_URI[parking_lot_core-0.8.6.sha256sum] = "60a2cfe6f0ad2bfc16aefa463b497d5c7a5ecd44a23efa72aa342d90177356dc"
SRC_URI[parking_lot_core-0.9.12.sha256sum] = "2621685985a2ebf1c516881c026032ac7deafcda1a2c9b7850dc81e3dfcb64c1"
SRC_URI[paste-1.0.15.sha256sum] = "57c0d7b74b563b49d38dae00a0c37d4d6de9b432382b2892f0574ddcae73fd0a"
SRC_URI[pem-rfc7468-0.7.0.sha256sum] = "88b39c9bfcfc231068454382784bb460aae594343fb030d46e9f50a645418412"
SRC_URI[percent-encoding-2.3.2.sha256sum] = "9b4f627cb1b25917193a259e49bdad08f671f8d9708acfd5fe0a8c1455d87220"
SRC_URI[pest-2.8.0.sha256sum] = "198db74531d58c70a361c42201efde7e2591e976d518caf7662a47dc5720e7b6"
SRC_URI[pest_derive-2.8.0.sha256sum] = "d725d9cfd79e87dccc9341a2ef39d1b6f6353d68c4b33c177febbe1a402c97c5"
SRC_URI[pest_generator-2.8.0.sha256sum] = "db7d01726be8ab66ab32f9df467ae8b1148906685bbe75c82d1e65d7f5b3f841"
SRC_URI[pest_meta-2.8.0.sha256sum] = "7f9f832470494906d1fca5329f8ab5791cc60beb230c74815dff541cbd2b5ca0"
SRC_URI[petgraph-0.8.3.sha256sum] = "8701b58ea97060d5e5b155d383a69952a60943f0e6dfe30b04c287beb0b27455"
SRC_URI[phf-0.11.3.sha256sum] = "1fd6780a80ae0c52cc120a26a1a42c1ae51b247a253e4e06113d23d2c2edd078"
SRC_URI[phf-0.13.1.sha256sum] = "c1562dc717473dbaa4c1f85a36410e03c047b2e7df7f45ee938fbef64ae7fadf"
SRC_URI[phf_generator-0.11.3.sha256sum] = "3c80231409c20246a13fddb31776fb942c38553c51e871f8cbd687a4cfb5843d"
SRC_URI[phf_generator-0.13.1.sha256sum] = "135ace3a761e564ec88c03a77317a7c6b80bb7f7135ef2544dbe054243b89737"
SRC_URI[phf_macros-0.11.3.sha256sum] = "f84ac04429c13a7ff43785d75ad27569f2951ce0ffd30a3321230db2fc727216"
SRC_URI[phf_macros-0.13.1.sha256sum] = "812f032b54b1e759ccd5f8b6677695d5268c588701effba24601f6932f8269ef"
SRC_URI[phf_shared-0.11.3.sha256sum] = "67eabc2ef2a60eb7faa00097bd1ffdb5bd28e62bf39990626a582201b7a754e5"
SRC_URI[phf_shared-0.13.1.sha256sum] = "e57fef6bc5981e38c2ce2d63bfa546861309f875b8a75f092d1d54ae2d64f266"
SRC_URI[pin-project-lite-0.2.16.sha256sum] = "3b3cff922bd51709b605d9ead9aa71031d81447142d828eb4a6eba76fe619f9b"
SRC_URI[pin-utils-0.1.0.sha256sum] = "8b870d8c151b6f2fb93e84a13146138f05d02ed11c7e7c54f8826aaaf7c9f184"
SRC_URI[pkcs1-0.7.5.sha256sum] = "c8ffb9f10fa047879315e6625af03c164b16962a5368d724ed16323b68ace47f"
SRC_URI[pkcs8-0.10.2.sha256sum] = "f950b2377845cebe5cf8b5165cb3cc1a5e0fa5cfa3e1f7f55707d8fd82e0a7b7"
SRC_URI[pnet_base-0.35.0.sha256sum] = "ffc190d4067df16af3aba49b3b74c469e611cad6314676eaf1157f31aa0fb2f7"
SRC_URI[pnet_datalink-0.35.0.sha256sum] = "e79e70ec0be163102a332e1d2d5586d362ad76b01cec86f830241f2b6452a7b7"
SRC_URI[pnet_sys-0.35.0.sha256sum] = "7d4643d3d4db6b08741050c2f3afa9a892c4244c085a72fcda93c9c2c9a00f4b"
SRC_URI[portable-atomic-1.11.1.sha256sum] = "f84267b20a16ea918e43c6a88433c2d54fa145c92a811b5b047ccbe153674483"
SRC_URI[powerfmt-0.2.0.sha256sum] = "439ee305def115ba05938db6eb1644ff94165c5ab5e9420d1c1bcedbba909391"
SRC_URI[ppv-lite86-0.2.21.sha256sum] = "85eae3c4ed2f50dcfe72643da4befc30deadb458a9b590d720cde2f2b1e97da9"
SRC_URI[proc-macro-crate-3.4.0.sha256sum] = "219cb19e96be00ab2e37d6e299658a0cfa83e52429179969b0f0121b4ac46983"
SRC_URI[proc-macro2-1.0.103.sha256sum] = "5ee95bc4ef87b8d5ba32e8b7714ccc834865276eab0aed5c9958d00ec45f49e8"
SRC_URI[prometheus-client-0.24.0.sha256sum] = "e4500adecd7af8e0e9f4dbce15cfee07ce913fbf6ad605cc468b83f2d531ee94"
SRC_URI[prometheus-client-derive-encode-0.5.0.sha256sum] = "9adf1691c04c0a5ff46ff8f262b58beb07b0dbb61f96f9f54f6cbd82106ed87f"
SRC_URI[quinn-0.11.9.sha256sum] = "b9e20a958963c291dc322d98411f541009df2ced7b5a4f2bd52337638cfccf20"
SRC_URI[quinn-proto-0.11.13.sha256sum] = "f1906b49b0c3bc04b5fe5d86a77925ae6524a19b816ae38ce1e426255f1d8a31"
SRC_URI[quinn-udp-0.5.14.sha256sum] = "addec6a0dcad8a8d96a771f815f0eaf55f9d1805756410b39f5fa81332574cbd"
SRC_URI[quote-1.0.42.sha256sum] = "a338cc41d27e6cc6dce6cefc13a0729dfbb81c262b1f519331575dd80ef3067f"
SRC_URI[r-efi-5.3.0.sha256sum] = "69cdb34c158ceb288df11e18b4bd39de994f6657d83847bdffdbd7f346754b0f"
SRC_URI[rand-0.8.5.sha256sum] = "34af8d1a0e25924bc5b7c43c079c942339d8f0a8b57c39049bef581b46327404"
SRC_URI[rand-0.9.2.sha256sum] = "6db2770f06117d490610c7488547d543617b21bfa07796d7a12f6f1bd53850d1"
SRC_URI[rand_chacha-0.3.1.sha256sum] = "e6c10a63a0fa32252be49d21e7709d4d4baf8d231c2dbce1eaa8141b9b127d88"
SRC_URI[rand_chacha-0.9.0.sha256sum] = "d3022b5f1df60f26e1ffddd6c66e8aa15de382ae63b3a0c1bfc0e4d3e3f325cb"
SRC_URI[rand_core-0.6.4.sha256sum] = "ec0be4795e2f6a28069bec0b5ff3e2ac9bafc99e6a9a7dc3547996c5c816922c"
SRC_URI[rand_core-0.9.3.sha256sum] = "99d9a13982dcf210057a8a78572b2217b667c3beacbf3a0d8b454f6f82837d38"
SRC_URI[redox_syscall-0.2.16.sha256sum] = "fb5a58c1855b4b6819d59012155603f0b22ad30cad752600aadfcb695265519a"
SRC_URI[redox_syscall-0.5.18.sha256sum] = "ed2bf2547551a7053d6fdfafda3f938979645c44812fbfcda098faae3f1a362d"
SRC_URI[redox_users-0.5.2.sha256sum] = "a4e608c6638b9c18977b00b475ac1f28d14e84b27d8d42f70e0bf1e3dec127ac"
SRC_URI[ref-cast-1.0.25.sha256sum] = "f354300ae66f76f1c85c5f84693f0ce81d747e2c3f21a45fef496d89c960bf7d"
SRC_URI[ref-cast-impl-1.0.25.sha256sum] = "b7186006dcb21920990093f30e3dea63b7d6e977bf1256be20c3563a5db070da"
SRC_URI[regex-1.12.2.sha256sum] = "843bc0191f75f3e22651ae5f1e72939ab2f72a4bc30fa80a066bd66edefc24d4"
SRC_URI[regex-automata-0.4.13.sha256sum] = "5276caf25ac86c8d810222b3dbb938e512c55c6831a10f3e6ed1c93b84041f1c"
SRC_URI[regex-syntax-0.8.8.sha256sum] = "7a2d987857b319362043e95f5353c0535c1f58eec5336fdfcf626430af7def58"
SRC_URI[ring-0.17.14.sha256sum] = "a4689e6c2294d81e88dc6261c768b63bc4fcdb852be6d1352498b114f61383b7"
SRC_URI[ringbuffer-spsc-0.1.15.sha256sum] = "8d3e7aa0a681b232e7cd7f856a53b10603df88ca74b79a8d8088845185492e35"
SRC_URI[ron-0.12.0.sha256sum] = "fd490c5b18261893f14449cbd28cb9c0b637aebf161cd77900bfdedaff21ec32"
SRC_URI[rsa-0.9.9.sha256sum] = "40a0376c50d0358279d9d643e4bf7b7be212f1f4ff1da9070a7b54d22ef75c88"
SRC_URI[rustc-hash-2.1.1.sha256sum] = "357703d41365b4b27c590e3ed91eabb1b663f07c4c084095e60cbed4362dff0d"
SRC_URI[rustc_version-0.4.1.sha256sum] = "cfcb3a22ef46e85b45de6ee7e79d063319ebb6594faafcf1c225ea92ab6e9b92"
SRC_URI[rusticata-macros-4.1.0.sha256sum] = "faf0c4a6ece9950b9abdb62b1cfcf2a68b3b67a10ba445b3bb85be2a293d0632"
SRC_URI[rustix-1.1.2.sha256sum] = "cd15f8a2c5551a84d56efdc1cd049089e409ac19a3072d5037a17fd70719ff3e"
SRC_URI[rustls-0.23.35.sha256sum] = "533f54bc6a7d4f647e46ad909549eda97bf5afc1585190ef692b4286b198bd8f"
SRC_URI[rustls-native-certs-0.8.2.sha256sum] = "9980d917ebb0c0536119ba501e90834767bffc3d60641457fd84a1f3fd337923"
SRC_URI[rustls-pemfile-2.2.0.sha256sum] = "dce314e5fee3f39953d46bb63bb8a46d40c2f8fb7cc5a3b6cab2bde9721d6e50"
SRC_URI[rustls-pki-types-1.13.1.sha256sum] = "708c0f9d5f54ba0272468c1d306a52c495b31fa155e91bc25371e6df7996908c"
SRC_URI[rustls-platform-verifier-0.6.2.sha256sum] = "1d99feebc72bae7ab76ba994bb5e121b8d83d910ca40b36e0921f53becc41784"
SRC_URI[rustls-platform-verifier-android-0.1.1.sha256sum] = "f87165f0995f63a9fbeea62b64d10b4d9d8e78ec6d7d51fb2125fda7bb36788f"
SRC_URI[rustls-webpki-0.103.8.sha256sum] = "2ffdfa2f5286e2247234e03f680868ac2815974dc39e00ea15adc445d0aafe52"
SRC_URI[rustversion-1.0.22.sha256sum] = "b39cdef0fa800fc44525c84ccb54a029961a8215f9619753635a9c0d2538d46d"
SRC_URI[ryu-1.0.20.sha256sum] = "28d3b2b1366ec20994f1fd18c3c594f05c5dd4bc44d8bb0c1c632c8d6829481f"
SRC_URI[same-file-1.0.6.sha256sum] = "93fc1dc3aaa9bfed95e02e6eadabb4baf7e3078b0bd1b4d7b6b0b68378900502"
SRC_URI[schannel-0.1.28.sha256sum] = "891d81b926048e76efe18581bf793546b4c0eaf8448d72be8de2bbee5fd166e1"
SRC_URI[schemars-0.9.0.sha256sum] = "4cd191f9397d57d581cddd31014772520aa448f65ef991055d7f61582c65165f"
SRC_URI[schemars-1.1.0.sha256sum] = "9558e172d4e8533736ba97870c4b2cd63f84b382a3d6eb063da41b91cce17289"
SRC_URI[schemars_derive-1.1.0.sha256sum] = "301858a4023d78debd2353c7426dc486001bddc91ae31a76fb1f55132f7e2633"
SRC_URI[scopeguard-1.2.0.sha256sum] = "94143f37725109f92c262ed2cf5e59bce7498c01bcc1502d7b9afe439a4e9f49"
SRC_URI[secrecy-0.8.0.sha256sum] = "9bd1c54ea06cfd2f6b63219704de0b9b4f72dcc2b8fdef820be6cd799780e91e"
SRC_URI[security-framework-3.5.1.sha256sum] = "b3297343eaf830f66ede390ea39da1d462b6b0c1b000f420d0a83f898bbbe6ef"
SRC_URI[security-framework-sys-2.15.0.sha256sum] = "cc1f0cbffaac4852523ce30d8bd3c5cdc873501d96ff467ca09b6767bb8cd5c0"
SRC_URI[semver-1.0.27.sha256sum] = "d767eb0aabc880b29956c35734170f26ed551a859dbd361d140cdbeca61ab1e2"
SRC_URI[serde-1.0.228.sha256sum] = "9a8e94ea7f378bd32cbbd37198a4a91436180c5bb472411e48b5ec2e2124ae9e"
SRC_URI[serde_core-1.0.228.sha256sum] = "41d385c7d4ca58e59fc732af25c3983b67ac852c1a25000afe1175de458b67ad"
SRC_URI[serde_derive-1.0.228.sha256sum] = "d540f220d3187173da220f885ab66608367b6574e925011a9353e4badda91d79"
SRC_URI[serde_derive_internals-0.29.1.sha256sum] = "18d26a20a969b9e3fdf2fc2d9f21eda6c40e2de84c9408bb5d3b05d499aae711"
SRC_URI[serde_json-1.0.145.sha256sum] = "402a6f66d8c709116cf22f558eab210f5a50187f702eb4d7e5ef38d9a7f1c79c"
SRC_URI[serde_spanned-1.0.1.sha256sum] = "2789234a13a53fc4be1b51ea1bab45a3c338bdb884862a257d10e5a74ae009e6"
SRC_URI[serde_with-3.14.1.sha256sum] = "c522100790450cf78eeac1507263d0a350d4d5b30df0c8e1fe051a10c22b376e"
SRC_URI[serde_with_macros-3.14.1.sha256sum] = "327ada00f7d64abaac1e55a6911e90cf665aa051b9a561c7006c157f4633135e"
SRC_URI[serde_yaml-0.9.34+deprecated.sha256sum] = "6a8b1a1a2ebf674015cc02edccce75287f1a0130d394307b36743c2f5d504b47"
SRC_URI[serialport-4.7.3.sha256sum] = "2acaf3f973e8616d7ceac415f53fc60e190b2a686fbcf8d27d0256c741c5007b"
SRC_URI[sha1-0.10.6.sha256sum] = "e3bf829a2d51ab4a5ddf1352d8470c140cadc8301b2ae1789db023f01cedd6ba"
SRC_URI[sha2-0.10.9.sha256sum] = "a7507d819769d01a365ab707794a4084392c824f54a7a6a7862f8c3d0892b283"
SRC_URI[sha2-const-stable-0.1.0.sha256sum] = "5f179d4e11094a893b82fff208f74d448a7512f99f5a0acbd5c679b705f83ed9"
SRC_URI[sha3-0.10.8.sha256sum] = "75872d278a8f37ef87fa0ddbda7802605cb18344497949862c0d4dcb291eba60"
SRC_URI[sharded-slab-0.1.7.sha256sum] = "f40ca3c46823713e0d4209592e8d6e826aa57e928f09752619fc696c499637f6"
SRC_URI[shellexpand-3.1.1.sha256sum] = "8b1fdf65dd6331831494dd616b30351c38e96e45921a27745cf98490458b90bb"
SRC_URI[shlex-1.3.0.sha256sum] = "0fda2ff0d084019ba4d7c6f371c95d8fd75ce3524c3cb8fb653a3023f6323e64"
SRC_URI[signature-2.2.0.sha256sum] = "77549399552de45a898a580c1b41d445bf730df867cc44e6c0233bbc4b8329de"
SRC_URI[simd-adler32-0.3.8.sha256sum] = "e320a6c5ad31d271ad523dcf3ad13e2767ad8b1cb8f047f75a8aeaf8da139da2"
SRC_URI[siphasher-1.0.1.sha256sum] = "56199f7ddabf13fe5074ce809e7d3f42b42ae711800501b5b16ea82ad029c39d"
SRC_URI[slab-0.4.11.sha256sum] = "7a2ae44ef20feb57a68b23d846850f861394c2e02dc425a50098ae8c90267589"
SRC_URI[smallvec-1.15.1.sha256sum] = "67b1b7a3b5fe4f1376887184045fcf45c69e92af734b7aaddc05fb777b6fbd03"
SRC_URI[socket2-0.5.10.sha256sum] = "e22376abed350d73dd1cd119b57ffccad95b4e585a7cda43e286245ce23c0678"
SRC_URI[socket2-0.6.1.sha256sum] = "17129e116933cf371d018bb80ae557e889637989d8638274fb25622827b03881"
SRC_URI[spin-0.10.0.sha256sum] = "d5fe4ccb98d9c292d56fec89a5e07da7fc4cf0dc11e156b41793132775d3e591"
SRC_URI[spin-0.9.8.sha256sum] = "6980e8d7511241f8acf4aebddbb1ff938df5eebe98691418c4468d0b72a96a67"
SRC_URI[spki-0.7.3.sha256sum] = "d91ed6c858b01f942cd56b37a94b3e0a1798290327d1236e4d9cf4eaca44d29d"
SRC_URI[stabby-72.1.1.sha256sum] = "976399a0c48ea769ef7f5dc303bb88240ab8d84008647a6b2303eced3dab3945"
SRC_URI[stabby-abi-72.1.1.sha256sum] = "f7b54832a9a1f92a0e55e74a5c0332744426edc515bb3fbad82f10b874a87f0d"
SRC_URI[stabby-macros-72.1.1.sha256sum] = "a768b1e51e4dbfa4fa52ae5c01241c0a41e2938fdffbb84add0c8238092f9091"
SRC_URI[stable_deref_trait-1.2.1.sha256sum] = "6ce2be8dc25455e1f91df71bfa12ad37d7af1092ae736f3a6cd0e37bc7810596"
SRC_URI[static_assertions-1.1.0.sha256sum] = "a2eb9349b6444b326872e140eb1cf5e7c522154d69e7a0ffb0fb81c06b37543f"
SRC_URI[static_init-1.0.3.sha256sum] = "8a2a1c578e98c1c16fc3b8ec1328f7659a500737d7a0c6d625e73e830ff9c1f6"
SRC_URI[static_init_macro-1.0.4.sha256sum] = "1389c88ddd739ec6d3f8f83343764a0e944cd23cfbf126a9796a714b0b6edd6f"
SRC_URI[strsim-0.11.1.sha256sum] = "7da8b5736845d9f2fcb837ea5d9e2628564b3b043a70948a3f0b778838c5fb4f"
SRC_URI[subtle-2.6.1.sha256sum] = "13c2bddecc57b384dee18652358fb23172facb8a2c51ccc10d74c157bdea3292"
SRC_URI[syn-1.0.109.sha256sum] = "72b64191b275b66ffe2469e8af2c1cfe3bafa67b529ead792a6d0160888b4237"
SRC_URI[syn-2.0.111.sha256sum] = "390cc9a294ab71bdb1aa2e99d13be9c753cd2d7bd6560c77118597410c4d2e87"
SRC_URI[synstructure-0.13.2.sha256sum] = "728a70f3dbaf5bab7f0c4b1ac8d7ae5ea60a4b5549c8a5914361c99147a709d2"
SRC_URI[talc-4.4.3.sha256sum] = "a3ae828aa394de34c7de08f522d1b86bd1c182c668d27da69caadda00590f26d"
SRC_URI[tempfile-3.23.0.sha256sum] = "2d31c77bdf42a745371d260a26ca7163f1e0924b64afa0b688e61b5a9fa02f16"
SRC_URI[thiserror-1.0.69.sha256sum] = "b6aaf5339b578ea85b50e080feb250a3e8ae8cfcdff9a461c9ec2904bc923f52"
SRC_URI[thiserror-2.0.17.sha256sum] = "f63587ca0f12b72a0600bcba1d40081f830876000bb46dd2337a3051618f4fc8"
SRC_URI[thiserror-impl-1.0.69.sha256sum] = "4fee6c4efc90059e10f81e6d42c60a18f76588c3d74cb83a0b242a2b6c7504c1"
SRC_URI[thiserror-impl-2.0.17.sha256sum] = "3ff15c8ecd7de3849db632e14d18d2571fa09dfc5ed93479bc4485c7a517c913"
SRC_URI[thread-priority-1.2.0.sha256sum] = "cfe075d7053dae61ac5413a34ea7d4913b6e6207844fd726bdd858b37ff72bf5"
SRC_URI[thread_local-1.1.9.sha256sum] = "f60246a4944f24f6e018aa17cdeffb7818b76356965d03b07d6a9886e8962185"
SRC_URI[time-0.3.41.sha256sum] = "8a7619e19bc266e0f9c5e6686659d394bc57973859340060a69221e57dbc0c40"
SRC_URI[time-core-0.1.4.sha256sum] = "c9e9a38711f559d9e3ce1cdb06dd7c5b8ea546bc90052da6d06bb76da74bb07c"
SRC_URI[time-macros-0.2.22.sha256sum] = "3526739392ec93fd8b359c8e98514cb3e8e021beb4e5f597b00a0221f8ed8a49"
SRC_URI[tinystr-0.7.6.sha256sum] = "9117f5d4db391c1cf6927e7bea3db74b9a1c1add8f7eda9ffd5364f40f57b82f"
SRC_URI[tinyvec-1.10.0.sha256sum] = "bfa5fdc3bce6191a1dbc8c02d5c8bffcf557bafa17c124c5264a458f1b0613fa"
SRC_URI[tinyvec_macros-0.1.1.sha256sum] = "1f3ccbac311fea05f86f61904b462b55fb3df8837a366dfc601a0161d0532f20"
SRC_URI[tls-listener-0.11.0.sha256sum] = "ab41256c16d6fc2b3021545f20bf77a73200b18bd54040ac656dddfca6205bfa"
SRC_URI[token-cell-2.1.1.sha256sum] = "fb48920ae769b58126c8c93269805011c793201f95fde28b479b81a9a531bbde"
SRC_URI[tokio-1.48.0.sha256sum] = "ff360e02eab121e0bc37a2d3b4d4dc622e6eda3a8e5253d5435ecf5bd4c68408"
SRC_URI[tokio-macros-2.6.0.sha256sum] = "af407857209536a95c8e56f8231ef2c2e2aff839b22e07a1ffcbc617e9db9fa5"
SRC_URI[tokio-rustls-0.26.4.sha256sum] = "1729aa945f29d91ba541258c8df89027d5792d85a8841fb65e8bf0f4ede4ef61"
SRC_URI[tokio-serial-5.4.5.sha256sum] = "aa1d5427f11ba7c5e6384521cfd76f2d64572ff29f3f4f7aa0f496282923fdc8"
SRC_URI[tokio-tungstenite-0.24.0.sha256sum] = "edc5f74e248dc973e0dbb7b74c7e0d6fcc301c694ff50049504004ef4d0cdcd9"
SRC_URI[tokio-util-0.7.17.sha256sum] = "2efa149fe76073d6e8fd97ef4f4eca7b67f599660115591483572e406e165594"
SRC_URI[tokio-vsock-0.5.0.sha256sum] = "2e336ac4b36df625d5429a735dd5847732fe5f62010e3ce0c50f3705d44730f8"
SRC_URI[toml-0.9.6.sha256sum] = "ae2a4cf385da23d1d53bc15cdfa5c2109e93d8d362393c801e87da2f72f0e201"
SRC_URI[toml_datetime-0.7.1.sha256sum] = "a197c0ec7d131bfc6f7e82c8442ba1595aeab35da7adbf05b6b73cd06a16b6be"
SRC_URI[toml_edit-0.23.5.sha256sum] = "c2ad0b7ae9cfeef5605163839cb9221f453399f15cfb5c10be9885fcf56611f9"
SRC_URI[toml_parser-1.0.2.sha256sum] = "b551886f449aa90d4fe2bdaa9f4a2577ad2dde302c61ecf262d80b116db95c10"
SRC_URI[toml_writer-1.0.2.sha256sum] = "fcc842091f2def52017664b53082ecbbeb5c7731092bad69d2c63050401dfd64"
SRC_URI[tracing-0.1.43.sha256sum] = "2d15d90a0b5c19378952d479dc858407149d7bb45a14de0142f6c534b16fc647"
SRC_URI[tracing-attributes-0.1.31.sha256sum] = "7490cfa5ec963746568740651ac6781f701c9c5ea257c58e057f3ba8cf69e8da"
SRC_URI[tracing-core-0.1.35.sha256sum] = "7a04e24fab5c89c6a36eb8558c9656f30d81de51dfa4d3b45f26b21d61fa0a6c"
SRC_URI[tracing-log-0.2.0.sha256sum] = "ee855f1f400bd0e5c02d150ae5de3840039a3f54b025156404e34c23c03f47c3"
SRC_URI[tracing-serde-0.2.0.sha256sum] = "704b1aeb7be0d0a84fc9828cae51dab5970fee5088f83d1dd7ee6f6246fc6ff1"
SRC_URI[tracing-subscriber-0.3.22.sha256sum] = "2f30143827ddab0d256fd843b7a66d164e9f271cfa0dde49142c5ca0ca291f1e"
SRC_URI[tungstenite-0.24.0.sha256sum] = "18e5b8366ee7a95b16d32197d0b2604b43a0be89dc5fac9f8e96ccafbaedda8a"
SRC_URI[twox-hash-1.6.3.sha256sum] = "97fee6b57c6a41524a810daee9286c02d7752c4253064d0b05472833a438f675"
SRC_URI[typeid-1.0.3.sha256sum] = "bc7d623258602320d5c55d1bc22793b57daff0ec7efc270ea7d55ce1d5f5471c"
SRC_URI[typenum-1.19.0.sha256sum] = "562d481066bde0658276a35467c4af00bdc6ee726305698a55b86e61d7ad82bb"
SRC_URI[ucd-trie-0.1.7.sha256sum] = "2896d95c02a80c6d6a5d6e953d479f5ddf2dfdb6a244441010e373ac0fb88971"
SRC_URI[uhlc-0.8.2.sha256sum] = "b62a645e3e4e6c85b7abe49b086aa3204119431f42b6123b0070419fb6e9d24e"
SRC_URI[unescaper-0.1.8.sha256sum] = "4064ed685c487dbc25bd3f0e9548f2e34bab9d18cefc700f9ec2dba74ba1138e"
SRC_URI[unicode-ident-1.0.22.sha256sum] = "9312f7c4f6ff9069b165498234ce8be658059c6728633667c526e27dc2cf1df5"
SRC_URI[unicode-xid-0.2.6.sha256sum] = "ebc1c04c71510c7f702b52b7c350734c9ff1295c464a03335b00bb84fc54f853"
SRC_URI[unix-named-pipe-0.2.0.sha256sum] = "6ad653da8f36ac5825ba06642b5a3cce14a4e52c6a5fab4a8928d53f4426dae2"
SRC_URI[unsafe-libyaml-0.2.11.sha256sum] = "673aac59facbab8a9007c7f6108d11f63b603f7cabff99fabf650fea5c32b861"
SRC_URI[untrusted-0.9.0.sha256sum] = "8ecb6da28b8a351d773b68d5825ac39017e680750f980f3a1a85cd8dd28a47c1"
SRC_URI[unwrap-infallible-0.1.5.sha256sum] = "151ac09978d3c2862c4e39b557f4eceee2cc72150bc4cb4f16abf061b6e381fb"
SRC_URI[unzip-n-0.1.2.sha256sum] = "c2e7e85a0596447f0f2ac090e16bc4c516c6fe91771fb0c0ccf7fa3dae896b9c"
SRC_URI[url-2.5.7.sha256sum] = "08bc136a29a3d1758e07a9cca267be308aeebf5cfd5a10f3f67ab2097683ef5b"
SRC_URI[utf-8-0.7.6.sha256sum] = "09cc8ee72d2a9becf2f2febe0205bbed8fc6615b7cb429ad062dc7b7ddd036a9"
SRC_URI[utf16_iter-1.0.5.sha256sum] = "c8232dd3cdaed5356e0f716d285e4b40b932ac434100fe9b7e0e8e935b9e6246"
SRC_URI[utf8_iter-1.0.4.sha256sum] = "b6c140620e7ffbb22c2dee59cafe6084a59b5ffc27a8859a5f0d494b5d52b6be"
SRC_URI[utf8parse-0.2.2.sha256sum] = "06abde3611657adf66d383f00b093d7faecc7fa57071cce2578660c9f1010821"
SRC_URI[uuid-1.19.0.sha256sum] = "e2e054861b4bd027cd373e18e8d8d8e6548085000e41290d95ce0c373a654b4a"
SRC_URI[validated_struct-2.2.0.sha256sum] = "869a93e8a7286e339e1128630051d82babbcd75d585975af07b9f3327220e60e"
SRC_URI[validated_struct_macros-2.2.0.sha256sum] = "8c44ce98e7227a04eeb4cf9c784109a5c9710e54849ceb4f09f8597247897f1e"
SRC_URI[valuable-0.1.1.sha256sum] = "ba73ea9cf16a25df0c8caa16c51acb937d5712a8429db78a3ee29d5dcacd3a65"
SRC_URI[vec_map-0.8.2.sha256sum] = "f1bddf1187be692e79c5ffeab891132dfb0f236ed36a43c7ed39f1165ee20191"
SRC_URI[version_check-0.9.5.sha256sum] = "0b928f33d975fc6ad9f86c8f283853ad26bdd5b10b7f1542aa2fa15e2289105a"
SRC_URI[vsock-0.4.0.sha256sum] = "2dfb6e7a74830912f1f4a7655227c9ded1ea4e9136676311fedf54bedb412f35"
SRC_URI[walkdir-2.5.0.sha256sum] = "29790946404f91d9c5d06f9874efddea1dc06c5efe94541a7d6863108e3a5e4b"
SRC_URI[wasi-0.11.1+wasi-snapshot-preview1.sha256sum] = "ccf3ec651a847eb01de73ccad15eb7d99f80485de043efb2f370cd654f4ea44b"
SRC_URI[wasip2-1.0.1+wasi-0.2.4.sha256sum] = "0562428422c63773dad2c345a1882263bbf4d65cf3f42e90921f787ef5ad58e7"
SRC_URI[wasm-bindgen-0.2.106.sha256sum] = "0d759f433fa64a2d763d1340820e46e111a7a5ab75f993d1852d70b03dbb80fd"
SRC_URI[wasm-bindgen-macro-0.2.106.sha256sum] = "48cb0d2638f8baedbc542ed444afc0644a29166f1595371af4fecf8ce1e7eeb3"
SRC_URI[wasm-bindgen-macro-support-0.2.106.sha256sum] = "cefb59d5cd5f92d9dcf80e4683949f15ca4b511f4ac0a6e14d4e1ac60c6ecd40"
SRC_URI[wasm-bindgen-shared-0.2.106.sha256sum] = "cbc538057e648b67f72a982e708d485b2efa771e1ac05fec311f9f63e5800db4"
SRC_URI[web-time-1.1.0.sha256sum] = "5a6580f308b1fad9207618087a65c04e7a10bc77e02c8e84e9b00dd4b12fa0bb"
SRC_URI[webpki-root-certs-1.0.4.sha256sum] = "ee3e3b5f5e80bc89f30ce8d0343bf4e5f12341c51f3e26cbeecbc7c85443e85b"
SRC_URI[webpki-roots-1.0.4.sha256sum] = "b2878ef029c47c6e8cf779119f20fcf52bde7ad42a731b2a304bc221df17571e"
SRC_URI[win-sys-0.3.1.sha256sum] = "5b7b128a98c1cfa201b09eb49ba285887deb3cbe7466a98850eb1adabb452be5"
SRC_URI[winapi-0.3.9.sha256sum] = "5c839a674fcd7a98952e593242ea400abe93992746761e38641405d28b00f419"
SRC_URI[winapi-i686-pc-windows-gnu-0.4.0.sha256sum] = "ac3b87c63620426dd9b991e5ce0329eff545bccbbb34f3be09ff6fb6ab51b7b6"
SRC_URI[winapi-util-0.1.11.sha256sum] = "c2a7b1c03c876122aa43f3020e6c3c3ee5c05081c9a00739faf7503aeba10d22"
SRC_URI[winapi-x86_64-pc-windows-gnu-0.4.0.sha256sum] = "712e227841d057c1ee1cd2fb22fa7e5a5461ae8e48fa2ca79ec42cfc1931183f"
SRC_URI[windows-0.34.0.sha256sum] = "45296b64204227616fdbf2614cefa4c236b98ee64dfaaaa435207ed99fe7829f"
SRC_URI[windows-core-0.62.2.sha256sum] = "b8e83a14d34d0623b51dce9581199302a221863196a1dde71a7663a4c2be9deb"
SRC_URI[windows-implement-0.60.2.sha256sum] = "053e2e040ab57b9dc951b72c264860db7eb3b0200ba345b4e4c3b14f67855ddf"
SRC_URI[windows-interface-0.59.3.sha256sum] = "3f316c4a2570ba26bbec722032c4099d8c8bc095efccdc15688708623367e358"
SRC_URI[windows-link-0.2.1.sha256sum] = "f0805222e57f7521d6a62e36fa9163bc891acd422f971defe97d64e70d0a4fe5"
SRC_URI[windows-result-0.4.1.sha256sum] = "7781fa89eaf60850ac3d2da7af8e5242a5ea78d1a11c49bf2910bb5a73853eb5"
SRC_URI[windows-strings-0.5.1.sha256sum] = "7837d08f69c77cf6b07689544538e017c1bfcf57e34b4c0ff58e6c2cd3b37091"
SRC_URI[windows-sys-0.45.0.sha256sum] = "75283be5efb2831d37ea142365f009c02ec203cd29a3ebecbc093d52315b66d0"
SRC_URI[windows-sys-0.52.0.sha256sum] = "282be5f36a8ce781fad8c8ae18fa3f9beff57ec1b52cb3de0789201425d9a33d"
SRC_URI[windows-sys-0.60.2.sha256sum] = "f2f500e4d28234f72040990ec9d39e3a6b950f9f22d3dba18416c35882612bcb"
SRC_URI[windows-sys-0.61.2.sha256sum] = "ae137229bcbd6cdf0f7b80a31df61766145077ddf49416a728b02cb3921ff3fc"
SRC_URI[windows-targets-0.42.2.sha256sum] = "8e5180c00cd44c9b1c88adb3693291f1cd93605ded80c250a75d472756b4d071"
SRC_URI[windows-targets-0.52.6.sha256sum] = "9b724f72796e036ab90c1021d4780d4d3d648aca59e491e6b98e725b84e99973"
SRC_URI[windows-targets-0.53.5.sha256sum] = "4945f9f551b88e0d65f3db0bc25c33b8acea4d9e41163edf90dcd0b19f9069f3"
SRC_URI[windows_aarch64_gnullvm-0.42.2.sha256sum] = "597a5118570b68bc08d8d59125332c54f1ba9d9adeedeef5b99b02ba2b0698f8"
SRC_URI[windows_aarch64_gnullvm-0.52.6.sha256sum] = "32a4622180e7a0ec044bb555404c800bc9fd9ec262ec147edd5989ccd0c02cd3"
SRC_URI[windows_aarch64_gnullvm-0.53.1.sha256sum] = "a9d8416fa8b42f5c947f8482c43e7d89e73a173cead56d044f6a56104a6d1b53"
SRC_URI[windows_aarch64_msvc-0.34.0.sha256sum] = "17cffbe740121affb56fad0fc0e421804adf0ae00891205213b5cecd30db881d"
SRC_URI[windows_aarch64_msvc-0.42.2.sha256sum] = "e08e8864a60f06ef0d0ff4ba04124db8b0fb3be5776a5cd47641e942e58c4d43"
SRC_URI[windows_aarch64_msvc-0.52.6.sha256sum] = "09ec2a7bb152e2252b53fa7803150007879548bc709c039df7627cabbd05d469"
SRC_URI[windows_aarch64_msvc-0.53.1.sha256sum] = "b9d782e804c2f632e395708e99a94275910eb9100b2114651e04744e9b125006"
SRC_URI[windows_i686_gnu-0.34.0.sha256sum] = "2564fde759adb79129d9b4f54be42b32c89970c18ebf93124ca8870a498688ed"
SRC_URI[windows_i686_gnu-0.42.2.sha256sum] = "c61d927d8da41da96a81f029489353e68739737d3beca43145c8afec9a31a84f"
SRC_URI[windows_i686_gnu-0.52.6.sha256sum] = "8e9b5ad5ab802e97eb8e295ac6720e509ee4c243f69d781394014ebfe8bbfa0b"
SRC_URI[windows_i686_gnu-0.53.1.sha256sum] = "960e6da069d81e09becb0ca57a65220ddff016ff2d6af6a223cf372a506593a3"
SRC_URI[windows_i686_gnullvm-0.52.6.sha256sum] = "0eee52d38c090b3caa76c563b86c3a4bd71ef1a819287c19d586d7334ae8ed66"
SRC_URI[windows_i686_gnullvm-0.53.1.sha256sum] = "fa7359d10048f68ab8b09fa71c3daccfb0e9b559aed648a8f95469c27057180c"
SRC_URI[windows_i686_msvc-0.34.0.sha256sum] = "9cd9d32ba70453522332c14d38814bceeb747d80b3958676007acadd7e166956"
SRC_URI[windows_i686_msvc-0.42.2.sha256sum] = "44d840b6ec649f480a41c8d80f9c65108b92d89345dd94027bfe06ac444d1060"
SRC_URI[windows_i686_msvc-0.52.6.sha256sum] = "240948bc05c5e7c6dabba28bf89d89ffce3e303022809e73deaefe4f6ec56c66"
SRC_URI[windows_i686_msvc-0.53.1.sha256sum] = "1e7ac75179f18232fe9c285163565a57ef8d3c89254a30685b57d83a38d326c2"
SRC_URI[windows_x86_64_gnu-0.34.0.sha256sum] = "cfce6deae227ee8d356d19effc141a509cc503dfd1f850622ec4b0f84428e1f4"
SRC_URI[windows_x86_64_gnu-0.42.2.sha256sum] = "8de912b8b8feb55c064867cf047dda097f92d51efad5b491dfb98f6bbb70cb36"
SRC_URI[windows_x86_64_gnu-0.52.6.sha256sum] = "147a5c80aabfbf0c7d901cb5895d1de30ef2907eb21fbbab29ca94c5b08b1a78"
SRC_URI[windows_x86_64_gnu-0.53.1.sha256sum] = "9c3842cdd74a865a8066ab39c8a7a473c0778a3f29370b5fd6b4b9aa7df4a499"
SRC_URI[windows_x86_64_gnullvm-0.42.2.sha256sum] = "26d41b46a36d453748aedef1486d5c7a85db22e56aff34643984ea85514e94a3"
SRC_URI[windows_x86_64_gnullvm-0.52.6.sha256sum] = "24d5b23dc417412679681396f2b49f3de8c1473deb516bd34410872eff51ed0d"
SRC_URI[windows_x86_64_gnullvm-0.53.1.sha256sum] = "0ffa179e2d07eee8ad8f57493436566c7cc30ac536a3379fdf008f47f6bb7ae1"
SRC_URI[windows_x86_64_msvc-0.34.0.sha256sum] = "d19538ccc21819d01deaf88d6a17eae6596a12e9aafdbb97916fb49896d89de9"
SRC_URI[windows_x86_64_msvc-0.42.2.sha256sum] = "9aec5da331524158c6d1a4ac0ab1541149c0b9505fde06423b02f5ef0106b9f0"
SRC_URI[windows_x86_64_msvc-0.52.6.sha256sum] = "589f6da84c646204747d1270a2a5661ea66ed1cced2631d546fdfb155959f9ec"
SRC_URI[windows_x86_64_msvc-0.53.1.sha256sum] = "d6bbff5f0aada427a1e5a6da5f1f98158182f26556f345ac9e04d36d0ebed650"
SRC_URI[winnow-0.7.14.sha256sum] = "5a5364e9d77fcdeeaa6062ced926ee3381faa2ee02d3eb83a5c27a8825540829"
SRC_URI[wit-bindgen-0.46.0.sha256sum] = "f17a85883d4e6d00e8a97c586de764dabcc06133f7f1d55dce5cdc070ad7fe59"
SRC_URI[write16-1.0.0.sha256sum] = "d1890f4022759daae28ed4fe62859b1236caebfc61ede2f63ed4e695f3f6d936"
SRC_URI[writeable-0.5.5.sha256sum] = "1e9df38ee2d2c3c5948ea468a8406ff0db0b29ae1ffde1bcf20ef305bcc95c51"
SRC_URI[x509-parser-0.18.0.sha256sum] = "eb3e137310115a65136898d2079f003ce33331a6c4b0d51f1531d1be082b6425"
SRC_URI[yoke-0.7.5.sha256sum] = "120e6aef9aa629e3d4f52dc8cc43a015c7724194c97dfaf45180d2daf2b77f40"
SRC_URI[yoke-derive-0.7.5.sha256sum] = "2380878cad4ac9aac1e2435f3eb4020e8374b5f13c296cb75b4620ff8e229154"
SRC_URI[z-serial-0.3.1.sha256sum] = "1660dfc9f90480610f94c285a9a967b49cd2f57b3b1267d9bd7fd5d4f57c36c8"
SRC_URI[zenoh-1.7.1.sha256sum] = "4e2df46d36ba8d173f18e9cce5011117fed81a90a22bc3cfe8bbcfaf66b54114"
SRC_URI[zenoh-buffers-1.7.1.sha256sum] = "82d610eaa2099c16844b092c2b16605d115f354e332eb1d37e9af46e5430ecac"
SRC_URI[zenoh-codec-1.7.1.sha256sum] = "7f1cff28c30bca3d07e7b84f71f1c9b81d505449f6fec36a023cc8b601c01150"
SRC_URI[zenoh-collections-1.7.1.sha256sum] = "a72cac7d4bbe99e41ef46c175e0dd2933e883b17cef3e60151e4461b5a088ad3"
SRC_URI[zenoh-config-1.7.1.sha256sum] = "df65e4ab337079d897aaaa6d01474b4f8683daaa05a8671b18db34e71a872af7"
SRC_URI[zenoh-core-1.7.1.sha256sum] = "869deb22305e8f7a6aa324142ab6717f0cc979be8e4a2de646e8f31313224a1c"
SRC_URI[zenoh-crypto-1.7.1.sha256sum] = "7f5b09559108c9e11128730d5a6f551dbcc226adfd82423439ad7eeed024c736"
SRC_URI[zenoh-ext-1.7.1.sha256sum] = "e717f9553e299e6645b4d76d3dcceed188cd860365f10356a65a3f2a704b46fb"
SRC_URI[zenoh-keyexpr-1.7.1.sha256sum] = "b8b754ea6460c4c3c5dd67e6a8c62bfc076c16f8b794898fb3ea6f0039a5939e"
SRC_URI[zenoh-link-1.7.1.sha256sum] = "0d0c04d554b67600967cb520061ef9f635caf7704978357334e66cd7179a204a"
SRC_URI[zenoh-link-commons-1.7.1.sha256sum] = "52d1c652a706da1da46eae54a65c4b658153cdebfa213f061beea3bef71088f2"
SRC_URI[zenoh-link-quic-1.7.1.sha256sum] = "0069d889388d06e56eb86139021a1af12b9846222847aeabaa05eb92fc2ee108"
SRC_URI[zenoh-link-quic_datagram-1.7.1.sha256sum] = "dc81e512b51cf9b6ab479ba11be70e7a4ce072c0e985271e09c88e4bbff591b3"
SRC_URI[zenoh-link-serial-1.7.1.sha256sum] = "0178ad0007ed1869c2ebc9ef8e773e5b41a7771d362c32108f4982d4aff217b9"
SRC_URI[zenoh-link-tcp-1.7.1.sha256sum] = "279ff42ab4a65508069596045ab8a3c6fb03f94343c290a9b75f9568c49094e4"
SRC_URI[zenoh-link-tls-1.7.1.sha256sum] = "d3172615126b64456beb0c537351eb9c715f20f641e37ae8f84cb209816d205a"
SRC_URI[zenoh-link-udp-1.7.1.sha256sum] = "11006545a887167d431e8c3f2867ad386e7d678ee8babd3df4a7537b168e47de"
SRC_URI[zenoh-link-unixpipe-1.7.1.sha256sum] = "15f6af8077a41fd77c9717fbb2187fc3863bf053334b183658ee0980fab95ec2"
SRC_URI[zenoh-link-unixsock_stream-1.7.1.sha256sum] = "ab57f1a899f869dea28168d6ab46a820b0d94e025e1db8cf8e686fc08b4f5de3"
SRC_URI[zenoh-link-vsock-1.7.1.sha256sum] = "85d1c878a3b4bb6f2ae085b2dbf6927536e44226a7a6c2a9514277812cbfcf3b"
SRC_URI[zenoh-link-ws-1.7.1.sha256sum] = "41c398aaee46ce19ca01c709ea38985da7da6b4ffb803c6b5c07a56e8a31f8b4"
SRC_URI[zenoh-macros-1.7.1.sha256sum] = "21df1681ca014a4bd69db91d356bcf699d346f854ff8a6b73123cee75f5073cd"
SRC_URI[zenoh-plugin-trait-1.7.1.sha256sum] = "4651bc51951eb004e71bba71583f9ea60240bdd11351b61dbd6956e906088567"
SRC_URI[zenoh-protocol-1.7.1.sha256sum] = "ab17d39b24f6fbd0a24e03a5ab96c236d3d5ebb5071978338c9bc3fe1ccff626"
SRC_URI[zenoh-result-1.7.1.sha256sum] = "1b7d23a2f69c4b96ae95ac2f80808cce5f2ed9697ba37e769a75428fb6806a57"
SRC_URI[zenoh-runtime-1.7.1.sha256sum] = "a71f356bb63c1c9d37cb4bc89112e83a9fd6079458d1440232d67ca41a52c687"
SRC_URI[zenoh-shm-1.7.1.sha256sum] = "5afd96e33312892de8af96065100c936c76ac9921cf34e8c6510443705271d77"
SRC_URI[zenoh-stats-1.7.1.sha256sum] = "ad79de90789ea01bbf89e84da4e0eaf9eedd9d74cd4b53f9bb657e1b2d47d598"
SRC_URI[zenoh-sync-1.7.1.sha256sum] = "e3b1113111e247d6b1ebd5d406b43e23e78faca2c7525dca22a2a075c64787bd"
SRC_URI[zenoh-task-1.7.1.sha256sum] = "7a1f690f81704b1e934b9fb7a63ce544af73521ca9d11b5a439cdfc74108dd28"
SRC_URI[zenoh-transport-1.7.1.sha256sum] = "41cdc4dcb4a68161afe25e44871a66a5c3c347d86a77628ab101d859a9518db9"
SRC_URI[zenoh-util-1.7.1.sha256sum] = "ea9b52e8beceffc0deca01e10ca726c604286a1ac475f95acdd87ee55f18b120"
SRC_URI[zerocopy-0.8.31.sha256sum] = "fd74ec98b9250adb3ca554bdde269adf631549f51d8a8f8f0a10b50f1cb298c3"
SRC_URI[zerocopy-derive-0.8.31.sha256sum] = "d8a8d209fdf45cf5138cbb5a506f6b52522a25afccc534d1475dad8e31105c6a"
SRC_URI[zerofrom-0.1.5.sha256sum] = "cff3ee08c995dee1859d998dea82f7374f2826091dd9cd47def953cae446cd2e"
SRC_URI[zerofrom-derive-0.1.6.sha256sum] = "d71e5d6e06ab090c67b5e44993ec16b72dcbaabc526db883a360057678b48502"
SRC_URI[zeroize-1.8.2.sha256sum] = "b97154e67e32c85465826e8bcc1c59429aaaf107c1e4a9e53c8d8ccd5eff88d0"
SRC_URI[zerovec-0.10.4.sha256sum] = "aa2b893d79df23bfb12d5461018d408ea19dfafe76c2c7ef6d4eba614f8ff079"
SRC_URI[zerovec-derive-0.10.3.sha256sum] = "6eafa6dfb17584ea3e2bd6e76e0cc15ad7af12b09abdd1ca55961bed9b1063c6"
