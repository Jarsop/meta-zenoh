SRC_URI += "\
    crate://crates.io/adler2/2.0.1 \
    crate://crates.io/advisory-lock/0.3.0 \
    crate://crates.io/aes/0.8.4 \
    crate://crates.io/ahash/0.8.12 \
    crate://crates.io/aho-corasick/1.1.4 \
    crate://crates.io/allocator-api2/0.2.21 \
    crate://crates.io/android_system_properties/0.1.5 \
    crate://crates.io/anstream/1.0.0 \
    crate://crates.io/anstyle-parse/1.0.0 \
    crate://crates.io/anstyle-query/1.1.5 \
    crate://crates.io/anstyle-wincon/3.0.11 \
    crate://crates.io/anstyle/1.0.13 \
    crate://crates.io/anyhow/1.0.102 \
    crate://crates.io/arc-swap/1.8.2 \
    crate://crates.io/array-init/2.1.0 \
    crate://crates.io/asn1-rs-derive/0.6.0 \
    crate://crates.io/asn1-rs-impl/0.2.0 \
    crate://crates.io/asn1-rs/0.7.1 \
    crate://crates.io/async-trait/0.1.89 \
    crate://crates.io/autocfg/1.5.0 \
    crate://crates.io/base64/0.22.1 \
    crate://crates.io/base64ct/1.8.3 \
    crate://crates.io/bincode/1.3.3 \
    crate://crates.io/bitflags/1.3.2 \
    crate://crates.io/bitflags/2.11.0 \
    crate://crates.io/block-buffer/0.10.4 \
    crate://crates.io/buddy_system_allocator/0.10.0 \
    crate://crates.io/bumpalo/3.20.2 \
    crate://crates.io/byteorder/1.5.0 \
    crate://crates.io/bytes/1.11.1 \
    crate://crates.io/cbindgen/0.29.2 \
    crate://crates.io/cc/1.2.56 \
    crate://crates.io/cesu8/1.1.0 \
    crate://crates.io/cfg-if/1.0.4 \
    crate://crates.io/cfg_aliases/0.1.1 \
    crate://crates.io/cfg_aliases/0.2.1 \
    crate://crates.io/chrono/0.4.44 \
    crate://crates.io/cipher/0.4.4 \
    crate://crates.io/clap/4.6.0 \
    crate://crates.io/clap_builder/4.6.0 \
    crate://crates.io/clap_lex/1.1.0 \
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
    crate://crates.io/data-encoding/2.10.0 \
    crate://crates.io/der-parser/10.0.0 \
    crate://crates.io/der/0.7.10 \
    crate://crates.io/deranged/0.5.8 \
    crate://crates.io/digest/0.10.7 \
    crate://crates.io/dirs-sys/0.5.0 \
    crate://crates.io/dirs/6.0.0 \
    crate://crates.io/displaydoc/0.2.5 \
    crate://crates.io/dtoa/1.0.11 \
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
    crate://crates.io/fastbloom/0.14.1 \
    crate://crates.io/fastrand/2.3.0 \
    crate://crates.io/filepath/0.1.3 \
    crate://crates.io/find-msvc-tools/0.1.9 \
    crate://crates.io/fixedbitset/0.5.7 \
    crate://crates.io/flate2/1.1.9 \
    crate://crates.io/flume/0.11.1 \
    crate://crates.io/fnv/1.0.7 \
    crate://crates.io/foldhash/0.1.5 \
    crate://crates.io/foldhash/0.2.0 \
    crate://crates.io/form_urlencoded/1.2.2 \
    crate://crates.io/fs2/0.4.3 \
    crate://crates.io/fs_extra/1.3.0 \
    crate://crates.io/futures-channel/0.3.32 \
    crate://crates.io/futures-core/0.3.32 \
    crate://crates.io/futures-executor/0.3.32 \
    crate://crates.io/futures-io/0.3.32 \
    crate://crates.io/futures-macro/0.3.32 \
    crate://crates.io/futures-sink/0.3.32 \
    crate://crates.io/futures-task/0.3.32 \
    crate://crates.io/futures-util/0.3.32 \
    crate://crates.io/futures/0.3.32 \
    crate://crates.io/generic-array/0.14.7 \
    crate://crates.io/getrandom/0.2.17 \
    crate://crates.io/getrandom/0.3.4 \
    crate://crates.io/getrandom/0.4.2 \
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
    crate://crates.io/home/0.5.12 \
    crate://crates.io/http/1.4.0 \
    crate://crates.io/httparse/1.10.1 \
    crate://crates.io/humantime/2.3.0 \
    crate://crates.io/iana-time-zone-haiku/0.1.2 \
    crate://crates.io/iana-time-zone/0.1.65 \
    crate://crates.io/icu_collections/2.1.1 \
    crate://crates.io/icu_locale_core/2.1.1 \
    crate://crates.io/icu_normalizer/2.1.1 \
    crate://crates.io/icu_normalizer_data/2.1.1 \
    crate://crates.io/icu_properties/2.1.2 \
    crate://crates.io/icu_properties_data/2.1.2 \
    crate://crates.io/icu_provider/2.1.1 \
    crate://crates.io/id-arena/2.3.0 \
    crate://crates.io/ident_case/1.0.1 \
    crate://crates.io/idna/1.1.0 \
    crate://crates.io/idna_adapter/1.2.1 \
    crate://crates.io/indexmap/1.9.3 \
    crate://crates.io/indexmap/2.13.0 \
    crate://crates.io/inout/0.1.4 \
    crate://crates.io/io-kit-sys/0.4.1 \
    crate://crates.io/ipnetwork/0.20.0 \
    crate://crates.io/is_terminal_polyfill/1.70.2 \
    crate://crates.io/itertools/0.14.0 \
    crate://crates.io/itoa/1.0.17 \
    crate://crates.io/jni-sys/0.3.0 \
    crate://crates.io/jni/0.21.1 \
    crate://crates.io/js-sys/0.3.91 \
    crate://crates.io/json5/0.4.1 \
    crate://crates.io/keccak/0.1.6 \
    crate://crates.io/keyed-set/1.1.0 \
    crate://crates.io/lazy_static/1.5.0 \
    crate://crates.io/leb128/0.2.5 \
    crate://crates.io/leb128fmt/0.1.0 \
    crate://crates.io/libc/0.2.183 \
    crate://crates.io/libloading/0.8.9 \
    crate://crates.io/libm/0.2.16 \
    crate://crates.io/libredox/0.1.14 \
    crate://crates.io/linux-raw-sys/0.12.1 \
    crate://crates.io/litemap/0.8.1 \
    crate://crates.io/lock_api/0.4.14 \
    crate://crates.io/log/0.4.29 \
    crate://crates.io/lru-slab/0.1.2 \
    crate://crates.io/lz4_flex/0.11.5 \
    crate://crates.io/mach2/0.4.3 \
    crate://crates.io/matchers/0.2.0 \
    crate://crates.io/memchr/2.8.0 \
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
    crate://crates.io/num-conv/0.2.0 \
    crate://crates.io/num-integer/0.1.46 \
    crate://crates.io/num-iter/0.1.45 \
    crate://crates.io/num-traits/0.2.19 \
    crate://crates.io/num_cpus/1.17.0 \
    crate://crates.io/oid-registry/0.8.1 \
    crate://crates.io/once_cell/1.21.4 \
    crate://crates.io/once_cell_polyfill/1.70.2 \
    crate://crates.io/openssl-probe/0.2.1 \
    crate://crates.io/option-ext/0.2.0 \
    crate://crates.io/parking/2.2.1 \
    crate://crates.io/parking_lot/0.12.5 \
    crate://crates.io/parking_lot_core/0.9.12 \
    crate://crates.io/paste/1.0.15 \
    crate://crates.io/pem-rfc7468/0.7.0 \
    crate://crates.io/percent-encoding/2.3.2 \
    crate://crates.io/pest/2.8.6 \
    crate://crates.io/pest_derive/2.8.6 \
    crate://crates.io/pest_generator/2.8.6 \
    crate://crates.io/pest_meta/2.8.6 \
    crate://crates.io/petgraph/0.8.3 \
    crate://crates.io/phf/0.11.3 \
    crate://crates.io/phf/0.13.1 \
    crate://crates.io/phf_generator/0.11.3 \
    crate://crates.io/phf_generator/0.13.1 \
    crate://crates.io/phf_macros/0.11.3 \
    crate://crates.io/phf_macros/0.13.1 \
    crate://crates.io/phf_shared/0.11.3 \
    crate://crates.io/phf_shared/0.13.1 \
    crate://crates.io/pin-project-lite/0.2.17 \
    crate://crates.io/pkcs1/0.7.5 \
    crate://crates.io/pkcs8/0.10.2 \
    crate://crates.io/pnet_base/0.35.0 \
    crate://crates.io/pnet_datalink/0.35.0 \
    crate://crates.io/pnet_sys/0.35.0 \
    crate://crates.io/portable-atomic/1.13.1 \
    crate://crates.io/potential_utf/0.1.4 \
    crate://crates.io/powerfmt/0.2.0 \
    crate://crates.io/ppv-lite86/0.2.21 \
    crate://crates.io/prettyplease/0.2.37 \
    crate://crates.io/proc-macro-crate/3.5.0 \
    crate://crates.io/proc-macro2/1.0.106 \
    crate://crates.io/prometheus-client-derive-encode/0.5.0 \
    crate://crates.io/prometheus-client/0.24.0 \
    crate://crates.io/quinn-proto/0.11.14 \
    crate://crates.io/quinn-udp/0.5.14 \
    crate://crates.io/quinn/0.11.9 \
    crate://crates.io/quote/1.0.45 \
    crate://crates.io/r-efi/5.3.0 \
    crate://crates.io/r-efi/6.0.0 \
    crate://crates.io/rand/0.8.5 \
    crate://crates.io/rand/0.9.2 \
    crate://crates.io/rand_chacha/0.3.1 \
    crate://crates.io/rand_chacha/0.9.0 \
    crate://crates.io/rand_core/0.6.4 \
    crate://crates.io/rand_core/0.9.5 \
    crate://crates.io/redox_syscall/0.5.18 \
    crate://crates.io/redox_users/0.5.2 \
    crate://crates.io/ref-cast-impl/1.0.25 \
    crate://crates.io/ref-cast/1.0.25 \
    crate://crates.io/regex-automata/0.4.14 \
    crate://crates.io/regex-syntax/0.8.10 \
    crate://crates.io/regex/1.12.3 \
    crate://crates.io/ring/0.17.14 \
    crate://crates.io/ringbuffer-spsc/0.1.15 \
    crate://crates.io/ron/0.12.0 \
    crate://crates.io/rsa/0.9.10 \
    crate://crates.io/rustc-hash/2.1.1 \
    crate://crates.io/rustc_version/0.4.1 \
    crate://crates.io/rusticata-macros/4.1.0 \
    crate://crates.io/rustix/1.1.4 \
    crate://crates.io/rustls-native-certs/0.8.3 \
    crate://crates.io/rustls-pemfile/2.2.0 \
    crate://crates.io/rustls-pki-types/1.14.0 \
    crate://crates.io/rustls-platform-verifier-android/0.1.1 \
    crate://crates.io/rustls-platform-verifier/0.6.2 \
    crate://crates.io/rustls-webpki/0.103.9 \
    crate://crates.io/rustls/0.23.37 \
    crate://crates.io/rustversion/1.0.22 \
    crate://crates.io/ryu/1.0.23 \
    crate://crates.io/same-file/1.0.6 \
    crate://crates.io/schannel/0.1.29 \
    crate://crates.io/schemars/0.9.0 \
    crate://crates.io/schemars/1.2.1 \
    crate://crates.io/schemars_derive/1.2.1 \
    crate://crates.io/scopeguard/1.2.0 \
    crate://crates.io/secrecy/0.8.0 \
    crate://crates.io/security-framework-sys/2.17.0 \
    crate://crates.io/security-framework/3.7.0 \
    crate://crates.io/semver/1.0.27 \
    crate://crates.io/serde/1.0.228 \
    crate://crates.io/serde_core/1.0.228 \
    crate://crates.io/serde_derive/1.0.228 \
    crate://crates.io/serde_derive_internals/0.29.1 \
    crate://crates.io/serde_json/1.0.149 \
    crate://crates.io/serde_spanned/1.0.4 \
    crate://crates.io/serde_with/3.17.0 \
    crate://crates.io/serde_with_macros/3.17.0 \
    crate://crates.io/serde_yaml/0.9.34+deprecated \
    crate://crates.io/serialport/4.7.3 \
    crate://crates.io/sha1/0.10.6 \
    crate://crates.io/sha2-const-stable/0.1.0 \
    crate://crates.io/sha2/0.10.9 \
    crate://crates.io/sha3/0.10.8 \
    crate://crates.io/sharded-slab/0.1.7 \
    crate://crates.io/shellexpand/3.1.2 \
    crate://crates.io/shlex/1.3.0 \
    crate://crates.io/signature/2.2.0 \
    crate://crates.io/simd-adler32/0.3.8 \
    crate://crates.io/siphasher/1.0.2 \
    crate://crates.io/slab/0.4.12 \
    crate://crates.io/smallvec/1.15.1 \
    crate://crates.io/socket2/0.5.10 \
    crate://crates.io/socket2/0.6.3 \
    crate://crates.io/spin/0.10.0 \
    crate://crates.io/spin/0.9.8 \
    crate://crates.io/spki/0.7.3 \
    crate://crates.io/stabby-abi/72.1.1 \
    crate://crates.io/stabby-macros/72.1.1 \
    crate://crates.io/stabby/72.1.1 \
    crate://crates.io/stable_deref_trait/1.2.1 \
    crate://crates.io/static_assertions/1.1.0 \
    crate://crates.io/static_init/1.0.4 \
    crate://crates.io/static_init_macro/1.0.4 \
    crate://crates.io/strsim/0.11.1 \
    crate://crates.io/subtle/2.6.1 \
    crate://crates.io/syn/1.0.109 \
    crate://crates.io/syn/2.0.117 \
    crate://crates.io/synstructure/0.13.2 \
    crate://crates.io/talc/4.4.3 \
    crate://crates.io/tempfile/3.27.0 \
    crate://crates.io/thiserror-impl/1.0.69 \
    crate://crates.io/thiserror-impl/2.0.18 \
    crate://crates.io/thiserror/1.0.69 \
    crate://crates.io/thiserror/2.0.18 \
    crate://crates.io/thread-priority/1.2.0 \
    crate://crates.io/thread_local/1.1.9 \
    crate://crates.io/time-core/0.1.8 \
    crate://crates.io/time-macros/0.2.27 \
    crate://crates.io/time/0.3.47 \
    crate://crates.io/tinystr/0.8.2 \
    crate://crates.io/tinyvec/1.10.0 \
    crate://crates.io/tinyvec_macros/0.1.1 \
    crate://crates.io/tls-listener/0.11.2 \
    crate://crates.io/token-cell/2.1.1 \
    crate://crates.io/tokio-macros/2.6.1 \
    crate://crates.io/tokio-rustls/0.26.4 \
    crate://crates.io/tokio-serial/5.4.5 \
    crate://crates.io/tokio-tungstenite/0.24.0 \
    crate://crates.io/tokio-util/0.7.18 \
    crate://crates.io/tokio-vsock/0.5.0 \
    crate://crates.io/tokio/1.50.0 \
    crate://crates.io/toml/0.9.12+spec-1.1.0 \
    crate://crates.io/toml_datetime/0.7.5+spec-1.1.0 \
    crate://crates.io/toml_datetime/1.0.0+spec-1.1.0 \
    crate://crates.io/toml_edit/0.25.4+spec-1.1.0 \
    crate://crates.io/toml_parser/1.0.9+spec-1.1.0 \
    crate://crates.io/toml_writer/1.0.6+spec-1.1.0 \
    crate://crates.io/tracing-attributes/0.1.31 \
    crate://crates.io/tracing-core/0.1.36 \
    crate://crates.io/tracing-log/0.2.0 \
    crate://crates.io/tracing-serde/0.2.0 \
    crate://crates.io/tracing-subscriber/0.3.23 \
    crate://crates.io/tracing/0.1.44 \
    crate://crates.io/tungstenite/0.24.0 \
    crate://crates.io/twox-hash/2.1.2 \
    crate://crates.io/typeid/1.0.3 \
    crate://crates.io/typenum/1.19.0 \
    crate://crates.io/ucd-trie/0.1.7 \
    crate://crates.io/uhlc/0.8.2 \
    crate://crates.io/unescaper/0.1.8 \
    crate://crates.io/unicode-ident/1.0.24 \
    crate://crates.io/unicode-xid/0.2.6 \
    crate://crates.io/unix-named-pipe/0.2.0 \
    crate://crates.io/unsafe-libyaml/0.2.11 \
    crate://crates.io/untrusted/0.9.0 \
    crate://crates.io/unwrap-infallible/0.1.5 \
    crate://crates.io/unzip-n/0.1.4 \
    crate://crates.io/url/2.5.8 \
    crate://crates.io/utf-8/0.7.6 \
    crate://crates.io/utf8_iter/1.0.4 \
    crate://crates.io/utf8parse/0.2.2 \
    crate://crates.io/uuid/1.22.0 \
    crate://crates.io/validated_struct/2.2.0 \
    crate://crates.io/validated_struct_macros/2.2.0 \
    crate://crates.io/valuable/0.1.1 \
    crate://crates.io/vec_map/0.8.2 \
    crate://crates.io/version_check/0.9.5 \
    crate://crates.io/vsock/0.4.0 \
    crate://crates.io/walkdir/2.5.0 \
    crate://crates.io/wasi/0.11.1+wasi-snapshot-preview1 \
    crate://crates.io/wasip2/1.0.2+wasi-0.2.9 \
    crate://crates.io/wasip3/0.4.0+wasi-0.3.0-rc-2026-01-06 \
    crate://crates.io/wasm-bindgen-macro-support/0.2.114 \
    crate://crates.io/wasm-bindgen-macro/0.2.114 \
    crate://crates.io/wasm-bindgen-shared/0.2.114 \
    crate://crates.io/wasm-bindgen/0.2.114 \
    crate://crates.io/wasm-encoder/0.244.0 \
    crate://crates.io/wasm-metadata/0.244.0 \
    crate://crates.io/wasmparser/0.244.0 \
    crate://crates.io/web-time/1.1.0 \
    crate://crates.io/webpki-root-certs/1.0.6 \
    crate://crates.io/webpki-roots/1.0.6 \
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
    crate://crates.io/winnow/0.7.15 \
    crate://crates.io/wit-bindgen-core/0.51.0 \
    crate://crates.io/wit-bindgen-rust-macro/0.51.0 \
    crate://crates.io/wit-bindgen-rust/0.51.0 \
    crate://crates.io/wit-bindgen/0.51.0 \
    crate://crates.io/wit-component/0.244.0 \
    crate://crates.io/wit-parser/0.244.0 \
    crate://crates.io/writeable/0.6.2 \
    crate://crates.io/x509-parser/0.18.1 \
    crate://crates.io/yoke-derive/0.8.1 \
    crate://crates.io/yoke/0.8.1 \
    crate://crates.io/z-serial/0.3.1 \
    crate://crates.io/zenoh-buffers/1.8.0 \
    crate://crates.io/zenoh-codec/1.8.0 \
    crate://crates.io/zenoh-collections/1.8.0 \
    crate://crates.io/zenoh-config/1.8.0 \
    crate://crates.io/zenoh-core/1.8.0 \
    crate://crates.io/zenoh-crypto/1.8.0 \
    crate://crates.io/zenoh-ext/1.8.0 \
    crate://crates.io/zenoh-keyexpr/1.8.0 \
    crate://crates.io/zenoh-link-commons/1.8.0 \
    crate://crates.io/zenoh-link-quic/1.8.0 \
    crate://crates.io/zenoh-link-quic_datagram/1.8.0 \
    crate://crates.io/zenoh-link-serial/1.8.0 \
    crate://crates.io/zenoh-link-tcp/1.8.0 \
    crate://crates.io/zenoh-link-tls/1.8.0 \
    crate://crates.io/zenoh-link-udp/1.8.0 \
    crate://crates.io/zenoh-link-unixpipe/1.8.0 \
    crate://crates.io/zenoh-link-unixsock_stream/1.8.0 \
    crate://crates.io/zenoh-link-vsock/1.8.0 \
    crate://crates.io/zenoh-link-ws/1.8.0 \
    crate://crates.io/zenoh-link/1.8.0 \
    crate://crates.io/zenoh-macros/1.8.0 \
    crate://crates.io/zenoh-plugin-trait/1.8.0 \
    crate://crates.io/zenoh-protocol/1.8.0 \
    crate://crates.io/zenoh-result/1.8.0 \
    crate://crates.io/zenoh-runtime/1.8.0 \
    crate://crates.io/zenoh-shm/1.8.0 \
    crate://crates.io/zenoh-stats/1.8.0 \
    crate://crates.io/zenoh-sync/1.8.0 \
    crate://crates.io/zenoh-task/1.8.0 \
    crate://crates.io/zenoh-transport/1.8.0 \
    crate://crates.io/zenoh-util/1.8.0 \
    crate://crates.io/zenoh/1.8.0 \
    crate://crates.io/zerocopy-derive/0.8.42 \
    crate://crates.io/zerocopy/0.8.42 \
    crate://crates.io/zerofrom-derive/0.1.6 \
    crate://crates.io/zerofrom/0.1.6 \
    crate://crates.io/zeroize/1.8.2 \
    crate://crates.io/zerotrie/0.2.3 \
    crate://crates.io/zerovec-derive/0.11.2 \
    crate://crates.io/zerovec/0.11.5 \
    crate://crates.io/zmij/1.0.21 \
"

SRC_URI[adler2-2.0.1.sha256sum] = "320119579fcad9c21884f5c4861d16174d0e06250625266f50fe6898340abefa"
SRC_URI[advisory-lock-0.3.0.sha256sum] = "a6caee7d48f930f9ad3fc9546f8cbf843365da0c5b0ca4eee1d1ac3dd12d8f93"
SRC_URI[aes-0.8.4.sha256sum] = "b169f7a6d4742236a0a00c541b845991d0ac43e546831af1249753ab4c3aa3a0"
SRC_URI[ahash-0.8.12.sha256sum] = "5a15f179cd60c4584b8a8c596927aadc462e27f2ca70c04e0071964a73ba7a75"
SRC_URI[aho-corasick-1.1.4.sha256sum] = "ddd31a130427c27518df266943a5308ed92d4b226cc639f5a8f1002816174301"
SRC_URI[allocator-api2-0.2.21.sha256sum] = "683d7910e743518b0e34f1186f92494becacb047c7b6bf616c96772180fef923"
SRC_URI[android_system_properties-0.1.5.sha256sum] = "819e7219dbd41043ac279b19830f2efc897156490d7fd6ea916720117ee66311"
SRC_URI[anstream-1.0.0.sha256sum] = "824a212faf96e9acacdbd09febd34438f8f711fb84e09a8916013cd7815ca28d"
SRC_URI[anstyle-1.0.13.sha256sum] = "5192cca8006f1fd4f7237516f40fa183bb07f8fbdfedaa0036de5ea9b0b45e78"
SRC_URI[anstyle-parse-1.0.0.sha256sum] = "52ce7f38b242319f7cabaa6813055467063ecdc9d355bbb4ce0c68908cd8130e"
SRC_URI[anstyle-query-1.1.5.sha256sum] = "40c48f72fd53cd289104fc64099abca73db4166ad86ea0b4341abe65af83dadc"
SRC_URI[anstyle-wincon-3.0.11.sha256sum] = "291e6a250ff86cd4a820112fb8898808a366d8f9f58ce16d1f538353ad55747d"
SRC_URI[anyhow-1.0.102.sha256sum] = "7f202df86484c868dbad7eaa557ef785d5c66295e41b460ef922eca0723b842c"
SRC_URI[arc-swap-1.8.2.sha256sum] = "f9f3647c145568cec02c42054e07bdf9a5a698e15b466fb2341bfc393cd24aa5"
SRC_URI[array-init-2.1.0.sha256sum] = "3d62b7694a562cdf5a74227903507c56ab2cc8bdd1f781ed5cb4cf9c9f810bfc"
SRC_URI[asn1-rs-0.7.1.sha256sum] = "56624a96882bb8c26d61312ae18cb45868e5a9992ea73c58e45c3101e56a1e60"
SRC_URI[asn1-rs-derive-0.6.0.sha256sum] = "3109e49b1e4909e9db6515a30c633684d68cdeaa252f215214cb4fa1a5bfee2c"
SRC_URI[asn1-rs-impl-0.2.0.sha256sum] = "7b18050c2cd6fe86c3a76584ef5e0baf286d038cda203eb6223df2cc413565f7"
SRC_URI[async-trait-0.1.89.sha256sum] = "9035ad2d096bed7955a320ee7e2230574d28fd3c3a0f186cbea1ff3c7eed5dbb"
SRC_URI[autocfg-1.5.0.sha256sum] = "c08606f8c3cbf4ce6ec8e28fb0014a2c086708fe954eaa885384a6165172e7e8"
SRC_URI[base64-0.22.1.sha256sum] = "72b3254f16251a8381aa12e40e3c4d2f0199f8c6508fbecb9d91f575e0fbb8c6"
SRC_URI[base64ct-1.8.3.sha256sum] = "2af50177e190e07a26ab74f8b1efbfe2ef87da2116221318cb1c2e82baf7de06"
SRC_URI[bincode-1.3.3.sha256sum] = "b1f45e9417d87227c7a56d22e471c6206462cba514c7590c09aff4cf6d1ddcad"
SRC_URI[bitflags-1.3.2.sha256sum] = "bef38d45163c2f1dde094a7dfd33ccf595c92905c8f8f4fdc18d06fb1037718a"
SRC_URI[bitflags-2.11.0.sha256sum] = "843867be96c8daad0d758b57df9392b6d8d271134fce549de6ce169ff98a92af"
SRC_URI[block-buffer-0.10.4.sha256sum] = "3078c7629b62d3f0439517fa394996acacc5cbc91c5a20d8c658e77abd503a71"
SRC_URI[buddy_system_allocator-0.10.0.sha256sum] = "a7913f22349ffcfc6ca0ca9a656ec26cfbba538ed49c31a273dff2c5d1ea83d9"
SRC_URI[bumpalo-3.20.2.sha256sum] = "5d20789868f4b01b2f2caec9f5c4e0213b41e3e5702a50157d699ae31ced2fcb"
SRC_URI[byteorder-1.5.0.sha256sum] = "1fd0f2584146f6f2ef48085050886acf353beff7305ebd1ae69500e27c67f64b"
SRC_URI[bytes-1.11.1.sha256sum] = "1e748733b7cbc798e1434b6ac524f0c1ff2ab456fe201501e6497c8417a4fc33"
SRC_URI[cbindgen-0.29.2.sha256sum] = "befbfd072a8e81c02f8c507aefce431fe5e7d051f83d48a23ffc9b9fe5a11799"
SRC_URI[cc-1.2.56.sha256sum] = "aebf35691d1bfb0ac386a69bac2fde4dd276fb618cf8bf4f5318fe285e821bb2"
SRC_URI[cesu8-1.1.0.sha256sum] = "6d43a04d8753f35258c91f8ec639f792891f748a1edbd759cf1dcea3382ad83c"
SRC_URI[cfg-if-1.0.4.sha256sum] = "9330f8b2ff13f34540b44e946ef35111825727b38d33286ef986142615121801"
SRC_URI[cfg_aliases-0.1.1.sha256sum] = "fd16c4719339c4530435d38e511904438d07cce7950afa3718a84ac36c10e89e"
SRC_URI[cfg_aliases-0.2.1.sha256sum] = "613afe47fcd5fac7ccf1db93babcb082c5994d996f20b8b159f2ad1658eb5724"
SRC_URI[chrono-0.4.44.sha256sum] = "c673075a2e0e5f4a1dde27ce9dee1ea4558c7ffe648f576438a20ca1d2acc4b0"
SRC_URI[cipher-0.4.4.sha256sum] = "773f3b9af64447d2ce9850330c473515014aa235e6a783b02db81ff39e4a3dad"
SRC_URI[clap-4.6.0.sha256sum] = "b193af5b67834b676abd72466a96c1024e6a6ad978a1f484bd90b85c94041351"
SRC_URI[clap_builder-4.6.0.sha256sum] = "714a53001bf66416adb0e2ef5ac857140e7dc3a0c48fb28b2f10762fc4b5069f"
SRC_URI[clap_lex-1.1.0.sha256sum] = "c8d4a3bb8b1e0c1050499d1815f5ab16d04f0959b233085fb31653fbfc9d98f9"
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
SRC_URI[data-encoding-2.10.0.sha256sum] = "d7a1e2f27636f116493b8b860f5546edb47c8d8f8ea73e1d2a20be88e28d1fea"
SRC_URI[der-0.7.10.sha256sum] = "e7c1832837b905bbfb5101e07cc24c8deddf52f93225eee6ead5f4d63d53ddcb"
SRC_URI[der-parser-10.0.0.sha256sum] = "07da5016415d5a3c4dd39b11ed26f915f52fc4e0dc197d87908bc916e51bc1a6"
SRC_URI[deranged-0.5.8.sha256sum] = "7cd812cc2bc1d69d4764bd80df88b4317eaef9e773c75226407d9bc0876b211c"
SRC_URI[digest-0.10.7.sha256sum] = "9ed9a281f7bc9b7576e61468ba615a66a5c8cfdff42420a70aa82701a3b1e292"
SRC_URI[dirs-6.0.0.sha256sum] = "c3e8aa94d75141228480295a7d0e7feb620b1a5ad9f12bc40be62411e38cce4e"
SRC_URI[dirs-sys-0.5.0.sha256sum] = "e01a3366d27ee9890022452ee61b2b63a67e6f13f58900b651ff5665f0bb1fab"
SRC_URI[displaydoc-0.2.5.sha256sum] = "97369cbbc041bc366949bc74d34658d6cda5621039731c6310521892a3a20ae0"
SRC_URI[dtoa-1.0.11.sha256sum] = "4c3cf4824e2d5f025c7b531afcb2325364084a16806f6d47fbc1f5fbd9960590"
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
SRC_URI[fastbloom-0.14.1.sha256sum] = "4e7f34442dbe69c60fe8eaf58a8cafff81a1f278816d8ab4db255b3bef4ac3c4"
SRC_URI[fastrand-2.3.0.sha256sum] = "37909eebbb50d72f9059c3b6d82c0463f2ff062c9e95845c43a6c9c0355411be"
SRC_URI[filepath-0.1.3.sha256sum] = "38ea8b8ba1c652fcc17279418e1d1eac2a05c6a941e13407b325719b2b1f617f"
SRC_URI[find-msvc-tools-0.1.9.sha256sum] = "5baebc0774151f905a1a2cc41989300b1e6fbb29aff0ceffa1064fdd3088d582"
SRC_URI[fixedbitset-0.5.7.sha256sum] = "1d674e81391d1e1ab681a28d99df07927c6d4aa5b027d7da16ba32d1d21ecd99"
SRC_URI[flate2-1.1.9.sha256sum] = "843fba2746e448b37e26a819579957415c8cef339bf08564fe8b7ddbd959573c"
SRC_URI[flume-0.11.1.sha256sum] = "da0e4dd2a88388a1f4ccc7c9ce104604dab68d9f408dc34cd45823d5a9069095"
SRC_URI[fnv-1.0.7.sha256sum] = "3f9eec918d3f24069decb9af1554cad7c880e2da24a9afd88aca000531ab82c1"
SRC_URI[foldhash-0.1.5.sha256sum] = "d9c4f5dac5e15c24eb999c26181a6ca40b39fe946cbe4c263c7209467bc83af2"
SRC_URI[foldhash-0.2.0.sha256sum] = "77ce24cb58228fbb8aa041425bb1050850ac19177686ea6e0f41a70416f56fdb"
SRC_URI[form_urlencoded-1.2.2.sha256sum] = "cb4cb245038516f5f85277875cdaa4f7d2c9a0fa0468de06ed190163b1581fcf"
SRC_URI[fs2-0.4.3.sha256sum] = "9564fc758e15025b46aa6643b1b77d047d1a56a1aea6e01002ac0c7026876213"
SRC_URI[fs_extra-1.3.0.sha256sum] = "42703706b716c37f96a77aea830392ad231f44c9e9a67872fa5548707e11b11c"
SRC_URI[futures-0.3.32.sha256sum] = "8b147ee9d1f6d097cef9ce628cd2ee62288d963e16fb287bd9286455b241382d"
SRC_URI[futures-channel-0.3.32.sha256sum] = "07bbe89c50d7a535e539b8c17bc0b49bdb77747034daa8087407d655f3f7cc1d"
SRC_URI[futures-core-0.3.32.sha256sum] = "7e3450815272ef58cec6d564423f6e755e25379b217b0bc688e295ba24df6b1d"
SRC_URI[futures-executor-0.3.32.sha256sum] = "baf29c38818342a3b26b5b923639e7b1f4a61fc5e76102d4b1981c6dc7a7579d"
SRC_URI[futures-io-0.3.32.sha256sum] = "cecba35d7ad927e23624b22ad55235f2239cfa44fd10428eecbeba6d6a717718"
SRC_URI[futures-macro-0.3.32.sha256sum] = "e835b70203e41293343137df5c0664546da5745f82ec9b84d40be8336958447b"
SRC_URI[futures-sink-0.3.32.sha256sum] = "c39754e157331b013978ec91992bde1ac089843443c49cbc7f46150b0fad0893"
SRC_URI[futures-task-0.3.32.sha256sum] = "037711b3d59c33004d3856fbdc83b99d4ff37a24768fa1be9ce3538a1cde4393"
SRC_URI[futures-util-0.3.32.sha256sum] = "389ca41296e6190b48053de0321d02a77f32f8a5d2461dd38762c0593805c6d6"
SRC_URI[generic-array-0.14.7.sha256sum] = "85649ca51fd72272d7821adaf274ad91c288277713d9c18820d8499a7ff69e9a"
SRC_URI[getrandom-0.2.17.sha256sum] = "ff2abc00be7fca6ebc474524697ae276ad847ad0a6b3faa4bcb027e9a4614ad0"
SRC_URI[getrandom-0.3.4.sha256sum] = "899def5c37c4fd7b2664648c28120ecec138e4d395b459e5ca34f9cce2dd77fd"
SRC_URI[getrandom-0.4.2.sha256sum] = "0de51e6874e94e7bf76d726fc5d13ba782deca734ff60d5bb2fb2607c7406555"
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
SRC_URI[home-0.5.12.sha256sum] = "cc627f471c528ff0c4a49e1d5e60450c8f6461dd6d10ba9dcd3a61d3dff7728d"
SRC_URI[http-1.4.0.sha256sum] = "e3ba2a386d7f85a81f119ad7498ebe444d2e22c2af0b86b069416ace48b3311a"
SRC_URI[httparse-1.10.1.sha256sum] = "6dbf3de79e51f3d586ab4cb9d5c3e2c14aa28ed23d180cf89b4df0454a69cc87"
SRC_URI[humantime-2.3.0.sha256sum] = "135b12329e5e3ce057a9f972339ea52bc954fe1e9358ef27f95e89716fbc5424"
SRC_URI[iana-time-zone-0.1.65.sha256sum] = "e31bc9ad994ba00e440a8aa5c9ef0ec67d5cb5e5cb0cc7f8b744a35b389cc470"
SRC_URI[iana-time-zone-haiku-0.1.2.sha256sum] = "f31827a206f56af32e590ba56d5d2d085f558508192593743f16b2306495269f"
SRC_URI[icu_collections-2.1.1.sha256sum] = "4c6b649701667bbe825c3b7e6388cb521c23d88644678e83c0c4d0a621a34b43"
SRC_URI[icu_locale_core-2.1.1.sha256sum] = "edba7861004dd3714265b4db54a3c390e880ab658fec5f7db895fae2046b5bb6"
SRC_URI[icu_normalizer-2.1.1.sha256sum] = "5f6c8828b67bf8908d82127b2054ea1b4427ff0230ee9141c54251934ab1b599"
SRC_URI[icu_normalizer_data-2.1.1.sha256sum] = "7aedcccd01fc5fe81e6b489c15b247b8b0690feb23304303a9e560f37efc560a"
SRC_URI[icu_properties-2.1.2.sha256sum] = "020bfc02fe870ec3a66d93e677ccca0562506e5872c650f893269e08615d74ec"
SRC_URI[icu_properties_data-2.1.2.sha256sum] = "616c294cf8d725c6afcd8f55abc17c56464ef6211f9ed59cccffe534129c77af"
SRC_URI[icu_provider-2.1.1.sha256sum] = "85962cf0ce02e1e0a629cc34e7ca3e373ce20dda4c4d7294bbd0bf1fdb59e614"
SRC_URI[id-arena-2.3.0.sha256sum] = "3d3067d79b975e8844ca9eb072e16b31c3c1c36928edf9c6789548c524d0d954"
SRC_URI[ident_case-1.0.1.sha256sum] = "b9e0384b61958566e926dc50660321d12159025e767c18e043daf26b70104c39"
SRC_URI[idna-1.1.0.sha256sum] = "3b0875f23caa03898994f6ddc501886a45c7d3d62d04d2d90788d47be1b1e4de"
SRC_URI[idna_adapter-1.2.1.sha256sum] = "3acae9609540aa318d1bc588455225fb2085b9ed0c4f6bd0d9d5bcd86f1a0344"
SRC_URI[indexmap-1.9.3.sha256sum] = "bd070e393353796e801d209ad339e89596eb4c8d430d18ede6a1cced8fafbd99"
SRC_URI[indexmap-2.13.0.sha256sum] = "7714e70437a7dc3ac8eb7e6f8df75fd8eb422675fc7678aff7364301092b1017"
SRC_URI[inout-0.1.4.sha256sum] = "879f10e63c20629ecabbb64a8010319738c66a5cd0c29b02d63d272b03751d01"
SRC_URI[io-kit-sys-0.4.1.sha256sum] = "617ee6cf8e3f66f3b4ea67a4058564628cde41901316e19f559e14c7c72c5e7b"
SRC_URI[ipnetwork-0.20.0.sha256sum] = "bf466541e9d546596ee94f9f69590f89473455f88372423e0008fc1a7daf100e"
SRC_URI[is_terminal_polyfill-1.70.2.sha256sum] = "a6cb138bb79a146c1bd460005623e142ef0181e3d0219cb493e02f7d08a35695"
SRC_URI[itertools-0.14.0.sha256sum] = "2b192c782037fadd9cfa75548310488aabdbf3d2da73885b31bd0abd03351285"
SRC_URI[itoa-1.0.17.sha256sum] = "92ecc6618181def0457392ccd0ee51198e065e016d1d527a7ac1b6dc7c1f09d2"
SRC_URI[jni-0.21.1.sha256sum] = "1a87aa2bb7d2af34197c04845522473242e1aa17c12f4935d5856491a7fb8c97"
SRC_URI[jni-sys-0.3.0.sha256sum] = "8eaf4bc02d17cbdd7ff4c7438cafcdf7fb9a4613313ad11b4f8fefe7d3fa0130"
SRC_URI[js-sys-0.3.91.sha256sum] = "b49715b7073f385ba4bc528e5747d02e66cb39c6146efb66b781f131f0fb399c"
SRC_URI[json5-0.4.1.sha256sum] = "96b0db21af676c1ce64250b5f40f3ce2cf27e4e47cb91ed91eb6fe9350b430c1"
SRC_URI[keccak-0.1.6.sha256sum] = "cb26cec98cce3a3d96cbb7bced3c4b16e3d13f27ec56dbd62cbc8f39cfb9d653"
SRC_URI[keyed-set-1.1.0.sha256sum] = "89d255a6b6ecd77bb93ce91de984d7039bff7503f500eb4851a1269732f22baf"
SRC_URI[lazy_static-1.5.0.sha256sum] = "bbd2bcb4c963f2ddae06a2efc7e9f3591312473c50c6685e1f298068316e66fe"
SRC_URI[leb128-0.2.5.sha256sum] = "884e2677b40cc8c339eaefcb701c32ef1fd2493d71118dc0ca4b6a736c93bd67"
SRC_URI[leb128fmt-0.1.0.sha256sum] = "09edd9e8b54e49e587e4f6295a7d29c3ea94d469cb40ab8ca70b288248a81db2"
SRC_URI[libc-0.2.183.sha256sum] = "b5b646652bf6661599e1da8901b3b9522896f01e736bad5f723fe7a3a27f899d"
SRC_URI[libloading-0.8.9.sha256sum] = "d7c4b02199fee7c5d21a5ae7d8cfa79a6ef5bb2fc834d6e9058e89c825efdc55"
SRC_URI[libm-0.2.16.sha256sum] = "b6d2cec3eae94f9f509c767b45932f1ada8350c4bdb85af2fcab4a3c14807981"
SRC_URI[libredox-0.1.14.sha256sum] = "1744e39d1d6a9948f4f388969627434e31128196de472883b39f148769bfe30a"
SRC_URI[linux-raw-sys-0.12.1.sha256sum] = "32a66949e030da00e8c7d4434b251670a91556f4144941d37452769c25d58a53"
SRC_URI[litemap-0.8.1.sha256sum] = "6373607a59f0be73a39b6fe456b8192fcc3585f602af20751600e974dd455e77"
SRC_URI[lock_api-0.4.14.sha256sum] = "224399e74b87b5f3557511d98dff8b14089b3dadafcab6bb93eab67d3aace965"
SRC_URI[log-0.4.29.sha256sum] = "5e5032e24019045c762d3c0f28f5b6b8bbf38563a65908389bf7978758920897"
SRC_URI[lru-slab-0.1.2.sha256sum] = "112b39cec0b298b6c1999fee3e31427f74f676e4cb9879ed1a121b43661a4154"
SRC_URI[lz4_flex-0.11.5.sha256sum] = "08ab2867e3eeeca90e844d1940eab391c9dc5228783db2ed999acbc0a9ed375a"
SRC_URI[mach2-0.4.3.sha256sum] = "d640282b302c0bb0a2a8e0233ead9035e3bed871f0b7e81fe4a1ec829765db44"
SRC_URI[matchers-0.2.0.sha256sum] = "d1525a2a28c7f4fa0fc98bb91ae755d1e2d1505079e05539e35bc876b5d65ae9"
SRC_URI[memchr-2.8.0.sha256sum] = "f8ca58f447f06ed17d5fc4043ce1b10dd205e060fb3ce5b979b8ed8e59ff3f79"
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
SRC_URI[num-conv-0.2.0.sha256sum] = "cf97ec579c3c42f953ef76dbf8d55ac91fb219dde70e49aa4a6b7d74e9919050"
SRC_URI[num-integer-0.1.46.sha256sum] = "7969661fd2958a5cb096e56c8e1ad0444ac2bbcd0061bd28660485a44879858f"
SRC_URI[num-iter-0.1.45.sha256sum] = "1429034a0490724d0075ebb2bc9e875d6503c3cf69e235a8941aa757d83ef5bf"
SRC_URI[num-traits-0.2.19.sha256sum] = "071dfc062690e90b734c0b2273ce72ad0ffa95f0c74596bc250dcfd960262841"
SRC_URI[num_cpus-1.17.0.sha256sum] = "91df4bbde75afed763b708b7eee1e8e7651e02d97f6d5dd763e89367e957b23b"
SRC_URI[oid-registry-0.8.1.sha256sum] = "12f40cff3dde1b6087cc5d5f5d4d65712f34016a03ed60e9c08dcc392736b5b7"
SRC_URI[once_cell-1.21.4.sha256sum] = "9f7c3e4beb33f85d45ae3e3a1792185706c8e16d043238c593331cc7cd313b50"
SRC_URI[once_cell_polyfill-1.70.2.sha256sum] = "384b8ab6d37215f3c5301a95a4accb5d64aa607f1fcb26a11b5303878451b4fe"
SRC_URI[openssl-probe-0.2.1.sha256sum] = "7c87def4c32ab89d880effc9e097653c8da5d6ef28e6b539d313baaacfbafcbe"
SRC_URI[option-ext-0.2.0.sha256sum] = "04744f49eae99ab78e0d5c0b603ab218f515ea8cfe5a456d7629ad883a3b6e7d"
SRC_URI[parking-2.2.1.sha256sum] = "f38d5652c16fde515bb1ecef450ab0f6a219d619a7274976324d5e377f7dceba"
SRC_URI[parking_lot-0.12.5.sha256sum] = "93857453250e3077bd71ff98b6a65ea6621a19bb0f559a85248955ac12c45a1a"
SRC_URI[parking_lot_core-0.9.12.sha256sum] = "2621685985a2ebf1c516881c026032ac7deafcda1a2c9b7850dc81e3dfcb64c1"
SRC_URI[paste-1.0.15.sha256sum] = "57c0d7b74b563b49d38dae00a0c37d4d6de9b432382b2892f0574ddcae73fd0a"
SRC_URI[pem-rfc7468-0.7.0.sha256sum] = "88b39c9bfcfc231068454382784bb460aae594343fb030d46e9f50a645418412"
SRC_URI[percent-encoding-2.3.2.sha256sum] = "9b4f627cb1b25917193a259e49bdad08f671f8d9708acfd5fe0a8c1455d87220"
SRC_URI[pest-2.8.6.sha256sum] = "e0848c601009d37dfa3430c4666e147e49cdcf1b92ecd3e63657d8a5f19da662"
SRC_URI[pest_derive-2.8.6.sha256sum] = "11f486f1ea21e6c10ed15d5a7c77165d0ee443402f0780849d1768e7d9d6fe77"
SRC_URI[pest_generator-2.8.6.sha256sum] = "8040c4647b13b210a963c1ed407c1ff4fdfa01c31d6d2a098218702e6664f94f"
SRC_URI[pest_meta-2.8.6.sha256sum] = "89815c69d36021a140146f26659a81d6c2afa33d216d736dd4be5381a7362220"
SRC_URI[petgraph-0.8.3.sha256sum] = "8701b58ea97060d5e5b155d383a69952a60943f0e6dfe30b04c287beb0b27455"
SRC_URI[phf-0.11.3.sha256sum] = "1fd6780a80ae0c52cc120a26a1a42c1ae51b247a253e4e06113d23d2c2edd078"
SRC_URI[phf-0.13.1.sha256sum] = "c1562dc717473dbaa4c1f85a36410e03c047b2e7df7f45ee938fbef64ae7fadf"
SRC_URI[phf_generator-0.11.3.sha256sum] = "3c80231409c20246a13fddb31776fb942c38553c51e871f8cbd687a4cfb5843d"
SRC_URI[phf_generator-0.13.1.sha256sum] = "135ace3a761e564ec88c03a77317a7c6b80bb7f7135ef2544dbe054243b89737"
SRC_URI[phf_macros-0.11.3.sha256sum] = "f84ac04429c13a7ff43785d75ad27569f2951ce0ffd30a3321230db2fc727216"
SRC_URI[phf_macros-0.13.1.sha256sum] = "812f032b54b1e759ccd5f8b6677695d5268c588701effba24601f6932f8269ef"
SRC_URI[phf_shared-0.11.3.sha256sum] = "67eabc2ef2a60eb7faa00097bd1ffdb5bd28e62bf39990626a582201b7a754e5"
SRC_URI[phf_shared-0.13.1.sha256sum] = "e57fef6bc5981e38c2ce2d63bfa546861309f875b8a75f092d1d54ae2d64f266"
SRC_URI[pin-project-lite-0.2.17.sha256sum] = "a89322df9ebe1c1578d689c92318e070967d1042b512afbe49518723f4e6d5cd"
SRC_URI[pkcs1-0.7.5.sha256sum] = "c8ffb9f10fa047879315e6625af03c164b16962a5368d724ed16323b68ace47f"
SRC_URI[pkcs8-0.10.2.sha256sum] = "f950b2377845cebe5cf8b5165cb3cc1a5e0fa5cfa3e1f7f55707d8fd82e0a7b7"
SRC_URI[pnet_base-0.35.0.sha256sum] = "ffc190d4067df16af3aba49b3b74c469e611cad6314676eaf1157f31aa0fb2f7"
SRC_URI[pnet_datalink-0.35.0.sha256sum] = "e79e70ec0be163102a332e1d2d5586d362ad76b01cec86f830241f2b6452a7b7"
SRC_URI[pnet_sys-0.35.0.sha256sum] = "7d4643d3d4db6b08741050c2f3afa9a892c4244c085a72fcda93c9c2c9a00f4b"
SRC_URI[portable-atomic-1.13.1.sha256sum] = "c33a9471896f1c69cecef8d20cbe2f7accd12527ce60845ff44c153bb2a21b49"
SRC_URI[potential_utf-0.1.4.sha256sum] = "b73949432f5e2a09657003c25bca5e19a0e9c84f8058ca374f49e0ebe605af77"
SRC_URI[powerfmt-0.2.0.sha256sum] = "439ee305def115ba05938db6eb1644ff94165c5ab5e9420d1c1bcedbba909391"
SRC_URI[ppv-lite86-0.2.21.sha256sum] = "85eae3c4ed2f50dcfe72643da4befc30deadb458a9b590d720cde2f2b1e97da9"
SRC_URI[prettyplease-0.2.37.sha256sum] = "479ca8adacdd7ce8f1fb39ce9ecccbfe93a3f1344b3d0d97f20bc0196208f62b"
SRC_URI[proc-macro-crate-3.5.0.sha256sum] = "e67ba7e9b2b56446f1d419b1d807906278ffa1a658a8a5d8a39dcb1f5a78614f"
SRC_URI[proc-macro2-1.0.106.sha256sum] = "8fd00f0bb2e90d81d1044c2b32617f68fcb9fa3bb7640c23e9c748e53fb30934"
SRC_URI[prometheus-client-0.24.0.sha256sum] = "e4500adecd7af8e0e9f4dbce15cfee07ce913fbf6ad605cc468b83f2d531ee94"
SRC_URI[prometheus-client-derive-encode-0.5.0.sha256sum] = "9adf1691c04c0a5ff46ff8f262b58beb07b0dbb61f96f9f54f6cbd82106ed87f"
SRC_URI[quinn-0.11.9.sha256sum] = "b9e20a958963c291dc322d98411f541009df2ced7b5a4f2bd52337638cfccf20"
SRC_URI[quinn-proto-0.11.14.sha256sum] = "434b42fec591c96ef50e21e886936e66d3cc3f737104fdb9b737c40ffb94c098"
SRC_URI[quinn-udp-0.5.14.sha256sum] = "addec6a0dcad8a8d96a771f815f0eaf55f9d1805756410b39f5fa81332574cbd"
SRC_URI[quote-1.0.45.sha256sum] = "41f2619966050689382d2b44f664f4bc593e129785a36d6ee376ddf37259b924"
SRC_URI[r-efi-5.3.0.sha256sum] = "69cdb34c158ceb288df11e18b4bd39de994f6657d83847bdffdbd7f346754b0f"
SRC_URI[r-efi-6.0.0.sha256sum] = "f8dcc9c7d52a811697d2151c701e0d08956f92b0e24136cf4cf27b57a6a0d9bf"
SRC_URI[rand-0.8.5.sha256sum] = "34af8d1a0e25924bc5b7c43c079c942339d8f0a8b57c39049bef581b46327404"
SRC_URI[rand-0.9.2.sha256sum] = "6db2770f06117d490610c7488547d543617b21bfa07796d7a12f6f1bd53850d1"
SRC_URI[rand_chacha-0.3.1.sha256sum] = "e6c10a63a0fa32252be49d21e7709d4d4baf8d231c2dbce1eaa8141b9b127d88"
SRC_URI[rand_chacha-0.9.0.sha256sum] = "d3022b5f1df60f26e1ffddd6c66e8aa15de382ae63b3a0c1bfc0e4d3e3f325cb"
SRC_URI[rand_core-0.6.4.sha256sum] = "ec0be4795e2f6a28069bec0b5ff3e2ac9bafc99e6a9a7dc3547996c5c816922c"
SRC_URI[rand_core-0.9.5.sha256sum] = "76afc826de14238e6e8c374ddcc1fa19e374fd8dd986b0d2af0d02377261d83c"
SRC_URI[redox_syscall-0.5.18.sha256sum] = "ed2bf2547551a7053d6fdfafda3f938979645c44812fbfcda098faae3f1a362d"
SRC_URI[redox_users-0.5.2.sha256sum] = "a4e608c6638b9c18977b00b475ac1f28d14e84b27d8d42f70e0bf1e3dec127ac"
SRC_URI[ref-cast-1.0.25.sha256sum] = "f354300ae66f76f1c85c5f84693f0ce81d747e2c3f21a45fef496d89c960bf7d"
SRC_URI[ref-cast-impl-1.0.25.sha256sum] = "b7186006dcb21920990093f30e3dea63b7d6e977bf1256be20c3563a5db070da"
SRC_URI[regex-1.12.3.sha256sum] = "e10754a14b9137dd7b1e3e5b0493cc9171fdd105e0ab477f51b72e7f3ac0e276"
SRC_URI[regex-automata-0.4.14.sha256sum] = "6e1dd4122fc1595e8162618945476892eefca7b88c52820e74af6262213cae8f"
SRC_URI[regex-syntax-0.8.10.sha256sum] = "dc897dd8d9e8bd1ed8cdad82b5966c3e0ecae09fb1907d58efaa013543185d0a"
SRC_URI[ring-0.17.14.sha256sum] = "a4689e6c2294d81e88dc6261c768b63bc4fcdb852be6d1352498b114f61383b7"
SRC_URI[ringbuffer-spsc-0.1.15.sha256sum] = "8d3e7aa0a681b232e7cd7f856a53b10603df88ca74b79a8d8088845185492e35"
SRC_URI[ron-0.12.0.sha256sum] = "fd490c5b18261893f14449cbd28cb9c0b637aebf161cd77900bfdedaff21ec32"
SRC_URI[rsa-0.9.10.sha256sum] = "b8573f03f5883dcaebdfcf4725caa1ecb9c15b2ef50c43a07b816e06799bb12d"
SRC_URI[rustc-hash-2.1.1.sha256sum] = "357703d41365b4b27c590e3ed91eabb1b663f07c4c084095e60cbed4362dff0d"
SRC_URI[rustc_version-0.4.1.sha256sum] = "cfcb3a22ef46e85b45de6ee7e79d063319ebb6594faafcf1c225ea92ab6e9b92"
SRC_URI[rusticata-macros-4.1.0.sha256sum] = "faf0c4a6ece9950b9abdb62b1cfcf2a68b3b67a10ba445b3bb85be2a293d0632"
SRC_URI[rustix-1.1.4.sha256sum] = "b6fe4565b9518b83ef4f91bb47ce29620ca828bd32cb7e408f0062e9930ba190"
SRC_URI[rustls-0.23.37.sha256sum] = "758025cb5fccfd3bc2fd74708fd4682be41d99e5dff73c377c0646c6012c73a4"
SRC_URI[rustls-native-certs-0.8.3.sha256sum] = "612460d5f7bea540c490b2b6395d8e34a953e52b491accd6c86c8164c5932a63"
SRC_URI[rustls-pemfile-2.2.0.sha256sum] = "dce314e5fee3f39953d46bb63bb8a46d40c2f8fb7cc5a3b6cab2bde9721d6e50"
SRC_URI[rustls-pki-types-1.14.0.sha256sum] = "be040f8b0a225e40375822a563fa9524378b9d63112f53e19ffff34df5d33fdd"
SRC_URI[rustls-platform-verifier-0.6.2.sha256sum] = "1d99feebc72bae7ab76ba994bb5e121b8d83d910ca40b36e0921f53becc41784"
SRC_URI[rustls-platform-verifier-android-0.1.1.sha256sum] = "f87165f0995f63a9fbeea62b64d10b4d9d8e78ec6d7d51fb2125fda7bb36788f"
SRC_URI[rustls-webpki-0.103.9.sha256sum] = "d7df23109aa6c1567d1c575b9952556388da57401e4ace1d15f79eedad0d8f53"
SRC_URI[rustversion-1.0.22.sha256sum] = "b39cdef0fa800fc44525c84ccb54a029961a8215f9619753635a9c0d2538d46d"
SRC_URI[ryu-1.0.23.sha256sum] = "9774ba4a74de5f7b1c1451ed6cd5285a32eddb5cccb8cc655a4e50009e06477f"
SRC_URI[same-file-1.0.6.sha256sum] = "93fc1dc3aaa9bfed95e02e6eadabb4baf7e3078b0bd1b4d7b6b0b68378900502"
SRC_URI[schannel-0.1.29.sha256sum] = "91c1b7e4904c873ef0710c1f407dde2e6287de2bebc1bbbf7d430bb7cbffd939"
SRC_URI[schemars-0.9.0.sha256sum] = "4cd191f9397d57d581cddd31014772520aa448f65ef991055d7f61582c65165f"
SRC_URI[schemars-1.2.1.sha256sum] = "a2b42f36aa1cd011945615b92222f6bf73c599a102a300334cd7f8dbeec726cc"
SRC_URI[schemars_derive-1.2.1.sha256sum] = "7d115b50f4aaeea07e79c1912f645c7513d81715d0420f8bc77a18c6260b307f"
SRC_URI[scopeguard-1.2.0.sha256sum] = "94143f37725109f92c262ed2cf5e59bce7498c01bcc1502d7b9afe439a4e9f49"
SRC_URI[secrecy-0.8.0.sha256sum] = "9bd1c54ea06cfd2f6b63219704de0b9b4f72dcc2b8fdef820be6cd799780e91e"
SRC_URI[security-framework-3.7.0.sha256sum] = "b7f4bc775c73d9a02cde8bf7b2ec4c9d12743edf609006c7facc23998404cd1d"
SRC_URI[security-framework-sys-2.17.0.sha256sum] = "6ce2691df843ecc5d231c0b14ece2acc3efb62c0a398c7e1d875f3983ce020e3"
SRC_URI[semver-1.0.27.sha256sum] = "d767eb0aabc880b29956c35734170f26ed551a859dbd361d140cdbeca61ab1e2"
SRC_URI[serde-1.0.228.sha256sum] = "9a8e94ea7f378bd32cbbd37198a4a91436180c5bb472411e48b5ec2e2124ae9e"
SRC_URI[serde_core-1.0.228.sha256sum] = "41d385c7d4ca58e59fc732af25c3983b67ac852c1a25000afe1175de458b67ad"
SRC_URI[serde_derive-1.0.228.sha256sum] = "d540f220d3187173da220f885ab66608367b6574e925011a9353e4badda91d79"
SRC_URI[serde_derive_internals-0.29.1.sha256sum] = "18d26a20a969b9e3fdf2fc2d9f21eda6c40e2de84c9408bb5d3b05d499aae711"
SRC_URI[serde_json-1.0.149.sha256sum] = "83fc039473c5595ace860d8c4fafa220ff474b3fc6bfdb4293327f1a37e94d86"
SRC_URI[serde_spanned-1.0.4.sha256sum] = "f8bbf91e5a4d6315eee45e704372590b30e260ee83af6639d64557f51b067776"
SRC_URI[serde_with-3.17.0.sha256sum] = "381b283ce7bc6b476d903296fb59d0d36633652b633b27f64db4fb46dcbfc3b9"
SRC_URI[serde_with_macros-3.17.0.sha256sum] = "a6d4e30573c8cb306ed6ab1dca8423eec9a463ea0e155f45399455e0368b27e0"
SRC_URI[serde_yaml-0.9.34+deprecated.sha256sum] = "6a8b1a1a2ebf674015cc02edccce75287f1a0130d394307b36743c2f5d504b47"
SRC_URI[serialport-4.7.3.sha256sum] = "2acaf3f973e8616d7ceac415f53fc60e190b2a686fbcf8d27d0256c741c5007b"
SRC_URI[sha1-0.10.6.sha256sum] = "e3bf829a2d51ab4a5ddf1352d8470c140cadc8301b2ae1789db023f01cedd6ba"
SRC_URI[sha2-0.10.9.sha256sum] = "a7507d819769d01a365ab707794a4084392c824f54a7a6a7862f8c3d0892b283"
SRC_URI[sha2-const-stable-0.1.0.sha256sum] = "5f179d4e11094a893b82fff208f74d448a7512f99f5a0acbd5c679b705f83ed9"
SRC_URI[sha3-0.10.8.sha256sum] = "75872d278a8f37ef87fa0ddbda7802605cb18344497949862c0d4dcb291eba60"
SRC_URI[sharded-slab-0.1.7.sha256sum] = "f40ca3c46823713e0d4209592e8d6e826aa57e928f09752619fc696c499637f6"
SRC_URI[shellexpand-3.1.2.sha256sum] = "32824fab5e16e6c4d86dc1ba84489390419a39f97699852b66480bb87d297ed8"
SRC_URI[shlex-1.3.0.sha256sum] = "0fda2ff0d084019ba4d7c6f371c95d8fd75ce3524c3cb8fb653a3023f6323e64"
SRC_URI[signature-2.2.0.sha256sum] = "77549399552de45a898a580c1b41d445bf730df867cc44e6c0233bbc4b8329de"
SRC_URI[simd-adler32-0.3.8.sha256sum] = "e320a6c5ad31d271ad523dcf3ad13e2767ad8b1cb8f047f75a8aeaf8da139da2"
SRC_URI[siphasher-1.0.2.sha256sum] = "b2aa850e253778c88a04c3d7323b043aeda9d3e30d5971937c1855769763678e"
SRC_URI[slab-0.4.12.sha256sum] = "0c790de23124f9ab44544d7ac05d60440adc586479ce501c1d6d7da3cd8c9cf5"
SRC_URI[smallvec-1.15.1.sha256sum] = "67b1b7a3b5fe4f1376887184045fcf45c69e92af734b7aaddc05fb777b6fbd03"
SRC_URI[socket2-0.5.10.sha256sum] = "e22376abed350d73dd1cd119b57ffccad95b4e585a7cda43e286245ce23c0678"
SRC_URI[socket2-0.6.3.sha256sum] = "3a766e1110788c36f4fa1c2b71b387a7815aa65f88ce0229841826633d93723e"
SRC_URI[spin-0.10.0.sha256sum] = "d5fe4ccb98d9c292d56fec89a5e07da7fc4cf0dc11e156b41793132775d3e591"
SRC_URI[spin-0.9.8.sha256sum] = "6980e8d7511241f8acf4aebddbb1ff938df5eebe98691418c4468d0b72a96a67"
SRC_URI[spki-0.7.3.sha256sum] = "d91ed6c858b01f942cd56b37a94b3e0a1798290327d1236e4d9cf4eaca44d29d"
SRC_URI[stabby-72.1.1.sha256sum] = "976399a0c48ea769ef7f5dc303bb88240ab8d84008647a6b2303eced3dab3945"
SRC_URI[stabby-abi-72.1.1.sha256sum] = "f7b54832a9a1f92a0e55e74a5c0332744426edc515bb3fbad82f10b874a87f0d"
SRC_URI[stabby-macros-72.1.1.sha256sum] = "a768b1e51e4dbfa4fa52ae5c01241c0a41e2938fdffbb84add0c8238092f9091"
SRC_URI[stable_deref_trait-1.2.1.sha256sum] = "6ce2be8dc25455e1f91df71bfa12ad37d7af1092ae736f3a6cd0e37bc7810596"
SRC_URI[static_assertions-1.1.0.sha256sum] = "a2eb9349b6444b326872e140eb1cf5e7c522154d69e7a0ffb0fb81c06b37543f"
SRC_URI[static_init-1.0.4.sha256sum] = "8bae1df58c5fea7502e8e352ec26b5579f6178e1fdb311e088580c980dee25ed"
SRC_URI[static_init_macro-1.0.4.sha256sum] = "1389c88ddd739ec6d3f8f83343764a0e944cd23cfbf126a9796a714b0b6edd6f"
SRC_URI[strsim-0.11.1.sha256sum] = "7da8b5736845d9f2fcb837ea5d9e2628564b3b043a70948a3f0b778838c5fb4f"
SRC_URI[subtle-2.6.1.sha256sum] = "13c2bddecc57b384dee18652358fb23172facb8a2c51ccc10d74c157bdea3292"
SRC_URI[syn-1.0.109.sha256sum] = "72b64191b275b66ffe2469e8af2c1cfe3bafa67b529ead792a6d0160888b4237"
SRC_URI[syn-2.0.117.sha256sum] = "e665b8803e7b1d2a727f4023456bbbbe74da67099c585258af0ad9c5013b9b99"
SRC_URI[synstructure-0.13.2.sha256sum] = "728a70f3dbaf5bab7f0c4b1ac8d7ae5ea60a4b5549c8a5914361c99147a709d2"
SRC_URI[talc-4.4.3.sha256sum] = "a3ae828aa394de34c7de08f522d1b86bd1c182c668d27da69caadda00590f26d"
SRC_URI[tempfile-3.27.0.sha256sum] = "32497e9a4c7b38532efcdebeef879707aa9f794296a4f0244f6f69e9bc8574bd"
SRC_URI[thiserror-1.0.69.sha256sum] = "b6aaf5339b578ea85b50e080feb250a3e8ae8cfcdff9a461c9ec2904bc923f52"
SRC_URI[thiserror-2.0.18.sha256sum] = "4288b5bcbc7920c07a1149a35cf9590a2aa808e0bc1eafaade0b80947865fbc4"
SRC_URI[thiserror-impl-1.0.69.sha256sum] = "4fee6c4efc90059e10f81e6d42c60a18f76588c3d74cb83a0b242a2b6c7504c1"
SRC_URI[thiserror-impl-2.0.18.sha256sum] = "ebc4ee7f67670e9b64d05fa4253e753e016c6c95ff35b89b7941d6b856dec1d5"
SRC_URI[thread-priority-1.2.0.sha256sum] = "cfe075d7053dae61ac5413a34ea7d4913b6e6207844fd726bdd858b37ff72bf5"
SRC_URI[thread_local-1.1.9.sha256sum] = "f60246a4944f24f6e018aa17cdeffb7818b76356965d03b07d6a9886e8962185"
SRC_URI[time-0.3.47.sha256sum] = "743bd48c283afc0388f9b8827b976905fb217ad9e647fae3a379a9283c4def2c"
SRC_URI[time-core-0.1.8.sha256sum] = "7694e1cfe791f8d31026952abf09c69ca6f6fa4e1a1229e18988f06a04a12dca"
SRC_URI[time-macros-0.2.27.sha256sum] = "2e70e4c5a0e0a8a4823ad65dfe1a6930e4f4d756dcd9dd7939022b5e8c501215"
SRC_URI[tinystr-0.8.2.sha256sum] = "42d3e9c45c09de15d06dd8acf5f4e0e399e85927b7f00711024eb7ae10fa4869"
SRC_URI[tinyvec-1.10.0.sha256sum] = "bfa5fdc3bce6191a1dbc8c02d5c8bffcf557bafa17c124c5264a458f1b0613fa"
SRC_URI[tinyvec_macros-0.1.1.sha256sum] = "1f3ccbac311fea05f86f61904b462b55fb3df8837a366dfc601a0161d0532f20"
SRC_URI[tls-listener-0.11.2.sha256sum] = "1461056cc1ef47003f7ee16e4cef3741068d4c7f6b627bfce49b7c00c120a530"
SRC_URI[token-cell-2.1.1.sha256sum] = "fb48920ae769b58126c8c93269805011c793201f95fde28b479b81a9a531bbde"
SRC_URI[tokio-1.50.0.sha256sum] = "27ad5e34374e03cfffefc301becb44e9dc3c17584f414349ebe29ed26661822d"
SRC_URI[tokio-macros-2.6.1.sha256sum] = "5c55a2eff8b69ce66c84f85e1da1c233edc36ceb85a2058d11b0d6a3c7e7569c"
SRC_URI[tokio-rustls-0.26.4.sha256sum] = "1729aa945f29d91ba541258c8df89027d5792d85a8841fb65e8bf0f4ede4ef61"
SRC_URI[tokio-serial-5.4.5.sha256sum] = "aa1d5427f11ba7c5e6384521cfd76f2d64572ff29f3f4f7aa0f496282923fdc8"
SRC_URI[tokio-tungstenite-0.24.0.sha256sum] = "edc5f74e248dc973e0dbb7b74c7e0d6fcc301c694ff50049504004ef4d0cdcd9"
SRC_URI[tokio-util-0.7.18.sha256sum] = "9ae9cec805b01e8fc3fd2fe289f89149a9b66dd16786abd8b19cfa7b48cb0098"
SRC_URI[tokio-vsock-0.5.0.sha256sum] = "2e336ac4b36df625d5429a735dd5847732fe5f62010e3ce0c50f3705d44730f8"
SRC_URI[toml-0.9.12+spec-1.1.0.sha256sum] = "cf92845e79fc2e2def6a5d828f0801e29a2f8acc037becc5ab08595c7d5e9863"
SRC_URI[toml_datetime-0.7.5+spec-1.1.0.sha256sum] = "92e1cfed4a3038bc5a127e35a2d360f145e1f4b971b551a2ba5fd7aedf7e1347"
SRC_URI[toml_datetime-1.0.0+spec-1.1.0.sha256sum] = "32c2555c699578a4f59f0cc68e5116c8d7cabbd45e1409b989d4be085b53f13e"
SRC_URI[toml_edit-0.25.4+spec-1.1.0.sha256sum] = "7193cbd0ce53dc966037f54351dbbcf0d5a642c7f0038c382ef9e677ce8c13f2"
SRC_URI[toml_parser-1.0.9+spec-1.1.0.sha256sum] = "702d4415e08923e7e1ef96cd5727c0dfed80b4d2fa25db9647fe5eb6f7c5a4c4"
SRC_URI[toml_writer-1.0.6+spec-1.1.0.sha256sum] = "ab16f14aed21ee8bfd8ec22513f7287cd4a91aa92e44edfe2c17ddd004e92607"
SRC_URI[tracing-0.1.44.sha256sum] = "63e71662fa4b2a2c3a26f570f037eb95bb1f85397f3cd8076caed2f026a6d100"
SRC_URI[tracing-attributes-0.1.31.sha256sum] = "7490cfa5ec963746568740651ac6781f701c9c5ea257c58e057f3ba8cf69e8da"
SRC_URI[tracing-core-0.1.36.sha256sum] = "db97caf9d906fbde555dd62fa95ddba9eecfd14cb388e4f491a66d74cd5fb79a"
SRC_URI[tracing-log-0.2.0.sha256sum] = "ee855f1f400bd0e5c02d150ae5de3840039a3f54b025156404e34c23c03f47c3"
SRC_URI[tracing-serde-0.2.0.sha256sum] = "704b1aeb7be0d0a84fc9828cae51dab5970fee5088f83d1dd7ee6f6246fc6ff1"
SRC_URI[tracing-subscriber-0.3.23.sha256sum] = "cb7f578e5945fb242538965c2d0b04418d38ec25c79d160cd279bf0731c8d319"
SRC_URI[tungstenite-0.24.0.sha256sum] = "18e5b8366ee7a95b16d32197d0b2604b43a0be89dc5fac9f8e96ccafbaedda8a"
SRC_URI[twox-hash-2.1.2.sha256sum] = "9ea3136b675547379c4bd395ca6b938e5ad3c3d20fad76e7fe85f9e0d011419c"
SRC_URI[typeid-1.0.3.sha256sum] = "bc7d623258602320d5c55d1bc22793b57daff0ec7efc270ea7d55ce1d5f5471c"
SRC_URI[typenum-1.19.0.sha256sum] = "562d481066bde0658276a35467c4af00bdc6ee726305698a55b86e61d7ad82bb"
SRC_URI[ucd-trie-0.1.7.sha256sum] = "2896d95c02a80c6d6a5d6e953d479f5ddf2dfdb6a244441010e373ac0fb88971"
SRC_URI[uhlc-0.8.2.sha256sum] = "b62a645e3e4e6c85b7abe49b086aa3204119431f42b6123b0070419fb6e9d24e"
SRC_URI[unescaper-0.1.8.sha256sum] = "4064ed685c487dbc25bd3f0e9548f2e34bab9d18cefc700f9ec2dba74ba1138e"
SRC_URI[unicode-ident-1.0.24.sha256sum] = "e6e4313cd5fcd3dad5cafa179702e2b244f760991f45397d14d4ebf38247da75"
SRC_URI[unicode-xid-0.2.6.sha256sum] = "ebc1c04c71510c7f702b52b7c350734c9ff1295c464a03335b00bb84fc54f853"
SRC_URI[unix-named-pipe-0.2.0.sha256sum] = "6ad653da8f36ac5825ba06642b5a3cce14a4e52c6a5fab4a8928d53f4426dae2"
SRC_URI[unsafe-libyaml-0.2.11.sha256sum] = "673aac59facbab8a9007c7f6108d11f63b603f7cabff99fabf650fea5c32b861"
SRC_URI[untrusted-0.9.0.sha256sum] = "8ecb6da28b8a351d773b68d5825ac39017e680750f980f3a1a85cd8dd28a47c1"
SRC_URI[unwrap-infallible-0.1.5.sha256sum] = "151ac09978d3c2862c4e39b557f4eceee2cc72150bc4cb4f16abf061b6e381fb"
SRC_URI[unzip-n-0.1.4.sha256sum] = "3b5bb2756c16fb66f80cfbf5fb0e0c09a7001e739f453c9ec241b9c8b1556fda"
SRC_URI[url-2.5.8.sha256sum] = "ff67a8a4397373c3ef660812acab3268222035010ab8680ec4215f38ba3d0eed"
SRC_URI[utf-8-0.7.6.sha256sum] = "09cc8ee72d2a9becf2f2febe0205bbed8fc6615b7cb429ad062dc7b7ddd036a9"
SRC_URI[utf8_iter-1.0.4.sha256sum] = "b6c140620e7ffbb22c2dee59cafe6084a59b5ffc27a8859a5f0d494b5d52b6be"
SRC_URI[utf8parse-0.2.2.sha256sum] = "06abde3611657adf66d383f00b093d7faecc7fa57071cce2578660c9f1010821"
SRC_URI[uuid-1.22.0.sha256sum] = "a68d3c8f01c0cfa54a75291d83601161799e4a89a39e0929f4b0354d88757a37"
SRC_URI[validated_struct-2.2.0.sha256sum] = "869a93e8a7286e339e1128630051d82babbcd75d585975af07b9f3327220e60e"
SRC_URI[validated_struct_macros-2.2.0.sha256sum] = "8c44ce98e7227a04eeb4cf9c784109a5c9710e54849ceb4f09f8597247897f1e"
SRC_URI[valuable-0.1.1.sha256sum] = "ba73ea9cf16a25df0c8caa16c51acb937d5712a8429db78a3ee29d5dcacd3a65"
SRC_URI[vec_map-0.8.2.sha256sum] = "f1bddf1187be692e79c5ffeab891132dfb0f236ed36a43c7ed39f1165ee20191"
SRC_URI[version_check-0.9.5.sha256sum] = "0b928f33d975fc6ad9f86c8f283853ad26bdd5b10b7f1542aa2fa15e2289105a"
SRC_URI[vsock-0.4.0.sha256sum] = "2dfb6e7a74830912f1f4a7655227c9ded1ea4e9136676311fedf54bedb412f35"
SRC_URI[walkdir-2.5.0.sha256sum] = "29790946404f91d9c5d06f9874efddea1dc06c5efe94541a7d6863108e3a5e4b"
SRC_URI[wasi-0.11.1+wasi-snapshot-preview1.sha256sum] = "ccf3ec651a847eb01de73ccad15eb7d99f80485de043efb2f370cd654f4ea44b"
SRC_URI[wasip2-1.0.2+wasi-0.2.9.sha256sum] = "9517f9239f02c069db75e65f174b3da828fe5f5b945c4dd26bd25d89c03ebcf5"
SRC_URI[wasip3-0.4.0+wasi-0.3.0-rc-2026-01-06.sha256sum] = "5428f8bf88ea5ddc08faddef2ac4a67e390b88186c703ce6dbd955e1c145aca5"
SRC_URI[wasm-bindgen-0.2.114.sha256sum] = "6532f9a5c1ece3798cb1c2cfdba640b9b3ba884f5db45973a6f442510a87d38e"
SRC_URI[wasm-bindgen-macro-0.2.114.sha256sum] = "18a2d50fcf105fb33bb15f00e7a77b772945a2ee45dcf454961fd843e74c18e6"
SRC_URI[wasm-bindgen-macro-support-0.2.114.sha256sum] = "03ce4caeaac547cdf713d280eda22a730824dd11e6b8c3ca9e42247b25c631e3"
SRC_URI[wasm-bindgen-shared-0.2.114.sha256sum] = "75a326b8c223ee17883a4251907455a2431acc2791c98c26279376490c378c16"
SRC_URI[wasm-encoder-0.244.0.sha256sum] = "990065f2fe63003fe337b932cfb5e3b80e0b4d0f5ff650e6985b1048f62c8319"
SRC_URI[wasm-metadata-0.244.0.sha256sum] = "bb0e353e6a2fbdc176932bbaab493762eb1255a7900fe0fea1a2f96c296cc909"
SRC_URI[wasmparser-0.244.0.sha256sum] = "47b807c72e1bac69382b3a6fb3dbe8ea4c0ed87ff5629b8685ae6b9a611028fe"
SRC_URI[web-time-1.1.0.sha256sum] = "5a6580f308b1fad9207618087a65c04e7a10bc77e02c8e84e9b00dd4b12fa0bb"
SRC_URI[webpki-root-certs-1.0.6.sha256sum] = "804f18a4ac2676ffb4e8b5b5fa9ae38af06df08162314f96a68d2a363e21a8ca"
SRC_URI[webpki-roots-1.0.6.sha256sum] = "22cfaf3c063993ff62e73cb4311efde4db1efb31ab78a3e5c457939ad5cc0bed"
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
SRC_URI[winnow-0.7.15.sha256sum] = "df79d97927682d2fd8adb29682d1140b343be4ac0f08fd68b7765d9c059d3945"
SRC_URI[wit-bindgen-0.51.0.sha256sum] = "d7249219f66ced02969388cf2bb044a09756a083d0fab1e566056b04d9fbcaa5"
SRC_URI[wit-bindgen-core-0.51.0.sha256sum] = "ea61de684c3ea68cb082b7a88508a8b27fcc8b797d738bfc99a82facf1d752dc"
SRC_URI[wit-bindgen-rust-0.51.0.sha256sum] = "b7c566e0f4b284dd6561c786d9cb0142da491f46a9fbed79ea69cdad5db17f21"
SRC_URI[wit-bindgen-rust-macro-0.51.0.sha256sum] = "0c0f9bfd77e6a48eccf51359e3ae77140a7f50b1e2ebfe62422d8afdaffab17a"
SRC_URI[wit-component-0.244.0.sha256sum] = "9d66ea20e9553b30172b5e831994e35fbde2d165325bec84fc43dbf6f4eb9cb2"
SRC_URI[wit-parser-0.244.0.sha256sum] = "ecc8ac4bc1dc3381b7f59c34f00b67e18f910c2c0f50015669dde7def656a736"
SRC_URI[writeable-0.6.2.sha256sum] = "9edde0db4769d2dc68579893f2306b26c6ecfbe0ef499b013d731b7b9247e0b9"
SRC_URI[x509-parser-0.18.1.sha256sum] = "d43b0f71ce057da06bc0851b23ee24f3f86190b07203dd8f567d0b706a185202"
SRC_URI[yoke-0.8.1.sha256sum] = "72d6e5c6afb84d73944e5cedb052c4680d5657337201555f9f2a16b7406d4954"
SRC_URI[yoke-derive-0.8.1.sha256sum] = "b659052874eb698efe5b9e8cf382204678a0086ebf46982b79d6ca3182927e5d"
SRC_URI[z-serial-0.3.1.sha256sum] = "1660dfc9f90480610f94c285a9a967b49cd2f57b3b1267d9bd7fd5d4f57c36c8"
SRC_URI[zenoh-1.8.0.sha256sum] = "7717b0e6a0a3463680b70e567496a7e26f10dbc2584fd79af922a530f596fcf0"
SRC_URI[zenoh-buffers-1.8.0.sha256sum] = "8bcbe41150794b2c49f6aa107e56a9a995cad538ea6a9cd20f1e127181330c55"
SRC_URI[zenoh-codec-1.8.0.sha256sum] = "6c92a5f6928fb4d6d33ef34c1818266720885409521f9f3016d0e57f90abe9d1"
SRC_URI[zenoh-collections-1.8.0.sha256sum] = "fb87ed45b3cba05fdb53fddc0644ef4eaa1a6ed68e944f7d761b483c4571a0ce"
SRC_URI[zenoh-config-1.8.0.sha256sum] = "654d7a535f32d8bf5b1bfd0e21431a495d3ff60cfd2a7bc0f27172fa3caaa88e"
SRC_URI[zenoh-core-1.8.0.sha256sum] = "3f0fccee692fa37f7585f0b2d1b3153203ae6073293bc13fe0d5bc5dd12ca1fd"
SRC_URI[zenoh-crypto-1.8.0.sha256sum] = "ae0e4d9b102043c6229f4a6d4e760ba96b10f02abef3bbd646f0ea431eec76e8"
SRC_URI[zenoh-ext-1.8.0.sha256sum] = "ba3e818887ffe081162471b46e77e9a188a2223ab78c59c72f3473397516375c"
SRC_URI[zenoh-keyexpr-1.8.0.sha256sum] = "5328ae37471ae54300a354107c625a864a8e8cd074ecaf9e6e9286f78d1dd021"
SRC_URI[zenoh-link-1.8.0.sha256sum] = "80440bf41c90987e5b1c1b02f42ab475ba616d7115d180c26ef4cdeb3f6afe7a"
SRC_URI[zenoh-link-commons-1.8.0.sha256sum] = "c6b104d459fa6e1abec12bce867ac845444b20b4e1a7f8ca8533b4c9edd2b00c"
SRC_URI[zenoh-link-quic-1.8.0.sha256sum] = "69e02852210b8ce8c93008e7e60f806e38eee8e57e0dcb362a9a8547ce308b97"
SRC_URI[zenoh-link-quic_datagram-1.8.0.sha256sum] = "2b5e7a2fc08ab6e5df126f23b7fa30a58bf80a7c7ca0b9f7b931c5b37168f031"
SRC_URI[zenoh-link-serial-1.8.0.sha256sum] = "c4cabd8a16e1153ce4e9c85ebea74339e082c6fa4b74e1181942c13df89792bd"
SRC_URI[zenoh-link-tcp-1.8.0.sha256sum] = "af351f5b66df749677f8fc6e6a1ee4c15f004439791540f38c737e7c5e764be1"
SRC_URI[zenoh-link-tls-1.8.0.sha256sum] = "f36da0bed1d9a7231fac2bb0d86ee6b08e7239fe42b36d0e877c7c3dd858ec00"
SRC_URI[zenoh-link-udp-1.8.0.sha256sum] = "30c279cd4144cb2ab14eba32cab956c03869d7e02b088a8a9965c070f6512805"
SRC_URI[zenoh-link-unixpipe-1.8.0.sha256sum] = "8cb0621253f88fb02264323692009e734e452a5f8ae8794c5ae4d66b7b226d4c"
SRC_URI[zenoh-link-unixsock_stream-1.8.0.sha256sum] = "bf7c5144802d0fdda1123484a79d944265947e528ba0763784e05ae0bd40db40"
SRC_URI[zenoh-link-vsock-1.8.0.sha256sum] = "d133f65be67036930f609bc666cc4b5fee728701796e814b913df0fe32d2801f"
SRC_URI[zenoh-link-ws-1.8.0.sha256sum] = "306c59fde40c46e3d7838ad628645eaf4cd3a76355b91e0e076628267fb98446"
SRC_URI[zenoh-macros-1.8.0.sha256sum] = "21523a418d0c52310ed9f3127099a40244040ea1dc3d420f5b4fa3178e27a8ba"
SRC_URI[zenoh-plugin-trait-1.8.0.sha256sum] = "9f54cb62ce3d7b8c2261f091f7f0ba855780f70690e7e8238e2deb490cdf8260"
SRC_URI[zenoh-protocol-1.8.0.sha256sum] = "8688f5f4748123ac6e5950c51c281ba65ad444f4435624e1f93112d94f4809db"
SRC_URI[zenoh-result-1.8.0.sha256sum] = "a1f04e46152cf494d1bc3e35948fed82cf5e57e559e5f2c4ff4223d0984b537d"
SRC_URI[zenoh-runtime-1.8.0.sha256sum] = "63259ecef5e54b5875ffb4ac4aff6d31680cfac4c78cdc6f9a385f8f28fc5396"
SRC_URI[zenoh-shm-1.8.0.sha256sum] = "d5905d7d5dcfb934e94d225aff5e01546c2ad5f38b577709416893968041066d"
SRC_URI[zenoh-stats-1.8.0.sha256sum] = "03fd0409089a7630c6af81f8106979194b2e6c450fdcae36b62aeb14292aded8"
SRC_URI[zenoh-sync-1.8.0.sha256sum] = "17ba3547e15ebfe1799d84b5e6861502f026b967508601f4f344b1edfc42d946"
SRC_URI[zenoh-task-1.8.0.sha256sum] = "b888098524b4ed57978e899f35d16250cf7805bbcc962312be7e1d5d60c1dcf4"
SRC_URI[zenoh-transport-1.8.0.sha256sum] = "a7c32b85396519616c4088ca973fa5ec4f798fdd49aa203b3bb2b60e468cd587"
SRC_URI[zenoh-util-1.8.0.sha256sum] = "1b3ee5dc455e67c571bd0d6177a5da0e744fdd544817799cc7d7d83adea94172"
SRC_URI[zerocopy-0.8.42.sha256sum] = "f2578b716f8a7a858b7f02d5bd870c14bf4ddbbcf3a4c05414ba6503640505e3"
SRC_URI[zerocopy-derive-0.8.42.sha256sum] = "7e6cc098ea4d3bd6246687de65af3f920c430e236bee1e3bf2e441463f08a02f"
SRC_URI[zerofrom-0.1.6.sha256sum] = "50cc42e0333e05660c3587f3bf9d0478688e15d870fab3346451ce7f8c9fbea5"
SRC_URI[zerofrom-derive-0.1.6.sha256sum] = "d71e5d6e06ab090c67b5e44993ec16b72dcbaabc526db883a360057678b48502"
SRC_URI[zeroize-1.8.2.sha256sum] = "b97154e67e32c85465826e8bcc1c59429aaaf107c1e4a9e53c8d8ccd5eff88d0"
SRC_URI[zerotrie-0.2.3.sha256sum] = "2a59c17a5562d507e4b54960e8569ebee33bee890c70aa3fe7b97e85a9fd7851"
SRC_URI[zerovec-0.11.5.sha256sum] = "6c28719294829477f525be0186d13efa9a3c602f7ec202ca9e353d310fb9a002"
SRC_URI[zerovec-derive-0.11.2.sha256sum] = "eadce39539ca5cb3985590102671f2567e659fca9666581ad3411d59207951f3"
SRC_URI[zmij-1.0.21.sha256sum] = "b8848ee67ecc8aedbaf3e4122217aff892639231befc6a1b58d29fff4c2cabaa"
