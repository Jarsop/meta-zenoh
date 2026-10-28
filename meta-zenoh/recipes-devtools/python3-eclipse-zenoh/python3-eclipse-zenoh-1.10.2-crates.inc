SRC_URI += "\
    crate://crates.io/adler2/2.0.1 \
    crate://crates.io/advisory-lock/0.3.0 \
    crate://crates.io/aes/0.8.4 \
    crate://crates.io/ahash/0.8.12 \
    crate://crates.io/aho-corasick/1.1.5 \
    crate://crates.io/allocator-api2/0.2.21 \
    crate://crates.io/android_system_properties/0.1.6 \
    crate://crates.io/anyhow/1.0.104 \
    crate://crates.io/arc-swap/1.9.2 \
    crate://crates.io/array-init/2.1.0 \
    crate://crates.io/asn1-rs-derive/0.6.0 \
    crate://crates.io/asn1-rs-impl/0.2.0 \
    crate://crates.io/asn1-rs/0.7.2 \
    crate://crates.io/async-trait/0.1.92 \
    crate://crates.io/autocfg/1.5.1 \
    crate://crates.io/base64/0.22.1 \
    crate://crates.io/base64/0.23.1 \
    crate://crates.io/base64ct/1.8.3 \
    crate://crates.io/bincode/1.3.3 \
    crate://crates.io/bit-vec/0.9.1 \
    crate://crates.io/bitflags/1.3.2 \
    crate://crates.io/bitflags/2.13.2 \
    crate://crates.io/block-buffer/0.10.4 \
    crate://crates.io/bs58/0.5.1 \
    crate://crates.io/buddy_system_allocator/0.10.0 \
    crate://crates.io/bumpalo/3.20.3 \
    crate://crates.io/byteorder/1.5.0 \
    crate://crates.io/bytes/1.12.1 \
    crate://crates.io/cc/1.6.0 \
    crate://crates.io/cfg-if/1.0.5 \
    crate://crates.io/cfg_aliases/0.1.1 \
    crate://crates.io/cfg_aliases/0.2.2 \
    crate://crates.io/chacha20/0.10.2 \
    crate://crates.io/chrono/0.4.45 \
    crate://crates.io/cipher/0.4.4 \
    crate://crates.io/combine/4.6.8 \
    crate://crates.io/const-oid/0.9.6 \
    crate://crates.io/const_format/0.2.36 \
    crate://crates.io/const_format_proc_macros/0.2.34 \
    crate://crates.io/core-foundation-sys/0.8.7 \
    crate://crates.io/core-foundation/0.10.1 \
    crate://crates.io/cpufeatures/0.2.17 \
    crate://crates.io/cpufeatures/0.3.1 \
    crate://crates.io/crc32fast/1.5.2 \
    crate://crates.io/crossbeam-channel/0.5.17 \
    crate://crates.io/crossbeam-deque/0.8.8 \
    crate://crates.io/crossbeam-epoch/0.9.21 \
    crate://crates.io/crossbeam-queue/0.3.14 \
    crate://crates.io/crossbeam-utils/0.8.23 \
    crate://crates.io/crossbeam/0.8.5 \
    crate://crates.io/crypto-common/0.1.7 \
    crate://crates.io/darling/0.24.1 \
    crate://crates.io/darling_core/0.24.1 \
    crate://crates.io/darling_macro/0.24.1 \
    crate://crates.io/data-encoding/2.11.1 \
    crate://crates.io/defmt-macros/1.1.1 \
    crate://crates.io/defmt-parser/1.0.0 \
    crate://crates.io/defmt/1.1.1 \
    crate://crates.io/der-parser/10.0.0 \
    crate://crates.io/der/0.7.10 \
    crate://crates.io/deranged/0.5.8 \
    crate://crates.io/digest/0.10.7 \
    crate://crates.io/dirs-sys/0.5.0 \
    crate://crates.io/dirs/6.0.0 \
    crate://crates.io/displaydoc/0.2.7 \
    crate://crates.io/dtoa/1.0.11 \
    crate://crates.io/dyn-clone/1.0.20 \
    crate://crates.io/either/1.19.0 \
    crate://crates.io/equivalent/1.0.2 \
    crate://crates.io/event-listener/5.4.2 \
    crate://crates.io/fastbloom/0.17.0 \
    crate://crates.io/fastrand/2.5.0 \
    crate://crates.io/find-msvc-tools/0.1.14 \
    crate://crates.io/fixedbitset/0.5.7 \
    crate://crates.io/flate2/1.1.10 \
    crate://crates.io/flume/0.11.1 \
    crate://crates.io/foldhash/0.1.5 \
    crate://crates.io/foldhash/0.2.0 \
    crate://crates.io/form_urlencoded/1.2.2 \
    crate://crates.io/futures-channel/0.3.34 \
    crate://crates.io/futures-core/0.3.34 \
    crate://crates.io/futures-executor/0.3.34 \
    crate://crates.io/futures-io/0.3.34 \
    crate://crates.io/futures-macro/0.3.34 \
    crate://crates.io/futures-sink/0.3.34 \
    crate://crates.io/futures-task/0.3.34 \
    crate://crates.io/futures-util/0.3.34 \
    crate://crates.io/futures/0.3.34 \
    crate://crates.io/generic-array/0.14.7 \
    crate://crates.io/getrandom/0.2.17 \
    crate://crates.io/getrandom/0.3.4 \
    crate://crates.io/getrandom/0.4.3 \
    crate://crates.io/git-version-macro/0.3.9 \
    crate://crates.io/git-version/0.3.9 \
    crate://crates.io/hashbrown/0.12.3 \
    crate://crates.io/hashbrown/0.14.5 \
    crate://crates.io/hashbrown/0.15.5 \
    crate://crates.io/hashbrown/0.16.1 \
    crate://crates.io/hashbrown/0.17.1 \
    crate://crates.io/heck/0.5.0 \
    crate://crates.io/hermit-abi/0.5.3 \
    crate://crates.io/hex/0.4.3 \
    crate://crates.io/hmac/0.12.1 \
    crate://crates.io/home/0.5.12 \
    crate://crates.io/http/1.5.0 \
    crate://crates.io/httparse/1.10.1 \
    crate://crates.io/humantime/2.4.0 \
    crate://crates.io/iana-time-zone-haiku/0.1.2 \
    crate://crates.io/iana-time-zone/0.1.65 \
    crate://crates.io/icu_collections/2.3.0 \
    crate://crates.io/icu_locale_core/2.3.0 \
    crate://crates.io/icu_normalizer/2.3.0 \
    crate://crates.io/icu_normalizer_data/2.3.0 \
    crate://crates.io/icu_properties/2.3.0 \
    crate://crates.io/icu_properties_data/2.3.0 \
    crate://crates.io/icu_provider/2.3.1 \
    crate://crates.io/ident_case/1.0.1 \
    crate://crates.io/idna/1.1.0 \
    crate://crates.io/idna_adapter/1.2.2 \
    crate://crates.io/indexmap/1.9.3 \
    crate://crates.io/indexmap/2.14.2 \
    crate://crates.io/indoc/2.0.8 \
    crate://crates.io/inout/0.1.4 \
    crate://crates.io/ipnetwork/0.20.0 \
    crate://crates.io/itertools/0.14.0 \
    crate://crates.io/itoa/1.0.18 \
    crate://crates.io/jiff-core/0.1.1 \
    crate://crates.io/jiff-static/0.2.38 \
    crate://crates.io/jiff-tzdb-platform/0.1.3 \
    crate://crates.io/jiff-tzdb/0.1.9 \
    crate://crates.io/jiff/0.2.38 \
    crate://crates.io/jni-macros/0.22.4 \
    crate://crates.io/jni-sys-macros/0.4.1 \
    crate://crates.io/jni-sys/0.4.1 \
    crate://crates.io/jni/0.22.4 \
    crate://crates.io/js-sys/0.3.106 \
    crate://crates.io/json5/0.4.1 \
    crate://crates.io/keccak/0.1.6 \
    crate://crates.io/keyed-set/1.1.0 \
    crate://crates.io/konst/0.2.20 \
    crate://crates.io/konst_macro_rules/0.2.19 \
    crate://crates.io/lazy_static/1.5.1 \
    crate://crates.io/leb128/0.2.7 \
    crate://crates.io/libc/0.2.190 \
    crate://crates.io/libloading/0.8.9 \
    crate://crates.io/libm/0.2.16 \
    crate://crates.io/libredox/0.1.25 \
    crate://crates.io/litemap/0.8.3 \
    crate://crates.io/lock_api/0.4.14 \
    crate://crates.io/lockfree/0.5.1 \
    crate://crates.io/log/0.4.34 \
    crate://crates.io/lru-slab/0.1.3 \
    crate://crates.io/lru/0.16.4 \
    crate://crates.io/lz4_flex/0.10.0 \
    crate://crates.io/matchers/0.2.0 \
    crate://crates.io/memchr/2.8.3 \
    crate://crates.io/memoffset/0.9.1 \
    crate://crates.io/minimal-lexical/0.2.1 \
    crate://crates.io/miniz_oxide/0.9.1 \
    crate://crates.io/mio/1.2.4 \
    crate://crates.io/nanorand/0.7.0 \
    crate://crates.io/nix/0.29.0 \
    crate://crates.io/no-std-net/0.6.0 \
    crate://crates.io/nom/7.1.3 \
    crate://crates.io/nonempty-collections/0.3.1 \
    crate://crates.io/nu-ansi-term/0.50.3 \
    crate://crates.io/num-bigint-dig/0.8.6 \
    crate://crates.io/num-bigint/0.4.8 \
    crate://crates.io/num-conv/0.2.2 \
    crate://crates.io/num-integer/0.1.47 \
    crate://crates.io/num-iter/0.1.46 \
    crate://crates.io/num-traits/0.2.19 \
    crate://crates.io/num_cpus/1.17.0 \
    crate://crates.io/oid-registry/0.8.1 \
    crate://crates.io/once_cell/1.21.4 \
    crate://crates.io/openssl-probe/0.2.1 \
    crate://crates.io/option-ext/0.2.0 \
    crate://crates.io/owned-alloc/0.2.0 \
    crate://crates.io/parking/2.2.1 \
    crate://crates.io/parking_lot/0.12.5 \
    crate://crates.io/parking_lot_core/0.9.12 \
    crate://crates.io/paste/1.0.15 \
    crate://crates.io/pem-rfc7468/0.7.0 \
    crate://crates.io/pem/4.0.0 \
    crate://crates.io/percent-encoding/2.3.2 \
    crate://crates.io/pest/2.9.2 \
    crate://crates.io/pest_derive/2.9.2 \
    crate://crates.io/pest_generator/2.9.2 \
    crate://crates.io/pest_meta/2.9.2 \
    crate://crates.io/petgraph/0.8.3 \
    crate://crates.io/phf/0.13.1 \
    crate://crates.io/phf_generator/0.13.1 \
    crate://crates.io/phf_macros/0.13.1 \
    crate://crates.io/phf_shared/0.13.1 \
    crate://crates.io/pin-project-lite/0.2.17 \
    crate://crates.io/pkcs1/0.7.5 \
    crate://crates.io/pkcs8/0.10.2 \
    crate://crates.io/pnet_base/0.35.0 \
    crate://crates.io/pnet_datalink/0.35.0 \
    crate://crates.io/pnet_sys/0.35.0 \
    crate://crates.io/portable-atomic-util/0.2.8 \
    crate://crates.io/portable-atomic/1.15.0 \
    crate://crates.io/potential_utf/0.1.6 \
    crate://crates.io/powerfmt/0.2.1 \
    crate://crates.io/ppv-lite86/0.2.21 \
    crate://crates.io/proc-macro-crate/3.5.0 \
    crate://crates.io/proc-macro2/1.0.107 \
    crate://crates.io/prometheus-client-derive-encode/0.5.1 \
    crate://crates.io/prometheus-client/0.24.1 \
    crate://crates.io/pyo3-build-config/0.25.1 \
    crate://crates.io/pyo3-ffi/0.25.1 \
    crate://crates.io/pyo3-macros-backend/0.25.1 \
    crate://crates.io/pyo3-macros/0.25.1 \
    crate://crates.io/pyo3/0.25.1 \
    crate://crates.io/quinn-proto/0.11.19 \
    crate://crates.io/quinn-udp/0.5.16 \
    crate://crates.io/quinn/0.11.12 \
    crate://crates.io/quote/1.0.47 \
    crate://crates.io/r-efi/5.3.0 \
    crate://crates.io/r-efi/6.0.0 \
    crate://crates.io/rand/0.10.3 \
    crate://crates.io/rand/0.8.8 \
    crate://crates.io/rand_chacha/0.3.1 \
    crate://crates.io/rand_core/0.10.1 \
    crate://crates.io/rand_core/0.6.4 \
    crate://crates.io/rand_pcg/0.10.2 \
    crate://crates.io/rcgen/0.14.10 \
    crate://crates.io/redox_syscall/0.5.18 \
    crate://crates.io/redox_users/0.5.3 \
    crate://crates.io/ref-cast-impl/1.0.27 \
    crate://crates.io/ref-cast/1.0.27 \
    crate://crates.io/regex-automata/0.4.18 \
    crate://crates.io/regex-syntax/0.8.11 \
    crate://crates.io/ring/0.17.14 \
    crate://crates.io/ringbuffer-spsc/0.1.15 \
    crate://crates.io/rlimit/0.10.2 \
    crate://crates.io/ron/0.12.2 \
    crate://crates.io/rsa/0.9.10 \
    crate://crates.io/rustc-hash/2.1.3 \
    crate://crates.io/rustc_version/0.4.1 \
    crate://crates.io/rusticata-macros/4.1.0 \
    crate://crates.io/rustls-native-certs/0.8.4 \
    crate://crates.io/rustls-pemfile/2.2.0 \
    crate://crates.io/rustls-pki-types/1.15.1 \
    crate://crates.io/rustls-platform-verifier-android/0.2.0 \
    crate://crates.io/rustls-platform-verifier/0.7.1 \
    crate://crates.io/rustls-webpki/0.103.15 \
    crate://crates.io/rustls/0.23.45 \
    crate://crates.io/rustversion/1.0.23 \
    crate://crates.io/ryu/1.0.23 \
    crate://crates.io/same-file/1.0.6 \
    crate://crates.io/schannel/0.1.29 \
    crate://crates.io/schemars/0.9.0 \
    crate://crates.io/schemars/1.2.2 \
    crate://crates.io/schemars_derive/1.2.2 \
    crate://crates.io/scopeguard/1.2.0 \
    crate://crates.io/secrecy/0.8.0 \
    crate://crates.io/security-framework-sys/2.17.0 \
    crate://crates.io/security-framework/3.7.0 \
    crate://crates.io/semver/1.0.28 \
    crate://crates.io/serde/1.0.229 \
    crate://crates.io/serde_core/1.0.229 \
    crate://crates.io/serde_derive/1.0.229 \
    crate://crates.io/serde_derive_internals/0.30.0 \
    crate://crates.io/serde_json/1.0.151 \
    crate://crates.io/serde_spanned/1.1.1 \
    crate://crates.io/serde_with/3.24.0 \
    crate://crates.io/serde_with_macros/3.24.0 \
    crate://crates.io/serde_yaml/0.9.34+deprecated \
    crate://crates.io/sha1/0.10.7 \
    crate://crates.io/sha2-const-stable/0.1.0 \
    crate://crates.io/sha3/0.10.9 \
    crate://crates.io/sharded-slab/0.1.7 \
    crate://crates.io/shellexpand/3.1.2 \
    crate://crates.io/shlex/2.0.1 \
    crate://crates.io/signature/2.2.0 \
    crate://crates.io/simd-adler32/0.3.10 \
    crate://crates.io/simd_cesu8/1.2.0 \
    crate://crates.io/simdutf8/0.1.5 \
    crate://crates.io/siphasher/1.0.4 \
    crate://crates.io/slab/0.4.12 \
    crate://crates.io/smallvec/1.16.2 \
    crate://crates.io/socket2/0.5.10 \
    crate://crates.io/socket2/0.6.5 \
    crate://crates.io/spin/0.10.1 \
    crate://crates.io/spin/0.9.9 \
    crate://crates.io/spki/0.7.3 \
    crate://crates.io/stabby-abi/72.1.16 \
    crate://crates.io/stabby-macros/72.1.16 \
    crate://crates.io/stabby/72.1.16 \
    crate://crates.io/stable_deref_trait/1.2.1 \
    crate://crates.io/static_assertions/1.1.0 \
    crate://crates.io/static_init/1.0.4 \
    crate://crates.io/static_init_macro/1.0.4 \
    crate://crates.io/strsim/0.11.1 \
    crate://crates.io/subtle/2.6.1 \
    crate://crates.io/syn/1.0.109 \
    crate://crates.io/syn/2.0.119 \
    crate://crates.io/syn/3.0.6 \
    crate://crates.io/synstructure/0.13.2 \
    crate://crates.io/synstructure/0.14.0 \
    crate://crates.io/talc/4.4.3 \
    crate://crates.io/target-lexicon/0.13.5 \
    crate://crates.io/thiserror-impl/1.0.69 \
    crate://crates.io/thiserror-impl/2.0.21 \
    crate://crates.io/thiserror/1.0.69 \
    crate://crates.io/thiserror/2.0.21 \
    crate://crates.io/thread-priority/1.2.0 \
    crate://crates.io/thread_local/1.1.10 \
    crate://crates.io/time-core/0.1.9 \
    crate://crates.io/time-macros/0.2.32 \
    crate://crates.io/time/0.3.55 \
    crate://crates.io/tinystr/0.8.4 \
    crate://crates.io/tinyvec/1.13.3 \
    crate://crates.io/tls-listener/0.11.2 \
    crate://crates.io/token-cell/2.1.1 \
    crate://crates.io/tokio-macros/2.7.2 \
    crate://crates.io/tokio-rustls/0.26.6 \
    crate://crates.io/tokio-tungstenite/0.24.0 \
    crate://crates.io/tokio-util/0.7.19 \
    crate://crates.io/tokio/1.53.2 \
    crate://crates.io/toml/0.9.12+spec-1.1.0 \
    crate://crates.io/toml_datetime/0.7.5+spec-1.1.0 \
    crate://crates.io/toml_datetime/1.1.1+spec-1.1.0 \
    crate://crates.io/toml_edit/0.25.15+spec-1.1.0 \
    crate://crates.io/toml_parser/1.1.3+spec-1.1.0 \
    crate://crates.io/toml_writer/1.1.2+spec-1.1.0 \
    crate://crates.io/tracing-attributes/0.1.31 \
    crate://crates.io/tracing-core/0.1.36 \
    crate://crates.io/tracing-log/0.2.0 \
    crate://crates.io/tracing-serde/0.2.0 \
    crate://crates.io/tracing-subscriber/0.3.23 \
    crate://crates.io/tracing/0.1.44 \
    crate://crates.io/tungstenite/0.24.0 \
    crate://crates.io/twox-hash/1.6.3 \
    crate://crates.io/typeid/1.0.3 \
    crate://crates.io/typenum/1.20.1 \
    crate://crates.io/ucd-trie/0.1.7 \
    crate://crates.io/uhlc/0.8.2 \
    crate://crates.io/unicode-ident/1.0.26 \
    crate://crates.io/unicode-xid/0.2.6 \
    crate://crates.io/unindent/0.2.4 \
    crate://crates.io/unsafe-libyaml/0.2.11 \
    crate://crates.io/untrusted/0.9.0 \
    crate://crates.io/unzip-n/0.1.4 \
    crate://crates.io/url/2.5.8 \
    crate://crates.io/utf-8/0.7.6 \
    crate://crates.io/utf8_iter/1.0.4 \
    crate://crates.io/uuid/1.27.0 \
    crate://crates.io/validated_struct/2.2.0 \
    crate://crates.io/validated_struct_macros/2.2.0 \
    crate://crates.io/valuable/0.1.1 \
    crate://crates.io/vec_map/0.8.2 \
    crate://crates.io/version_check/0.9.5 \
    crate://crates.io/walkdir/2.5.0 \
    crate://crates.io/wasi/0.11.1+wasi-snapshot-preview1 \
    crate://crates.io/wasip2/1.0.4+wasi-0.2.12 \
    crate://crates.io/wasm-bindgen-macro-support/0.2.129 \
    crate://crates.io/wasm-bindgen-macro/0.2.129 \
    crate://crates.io/wasm-bindgen-shared/0.2.129 \
    crate://crates.io/wasm-bindgen/0.2.129 \
    crate://crates.io/web-time/1.1.0 \
    crate://crates.io/webpki-root-certs/1.0.9 \
    crate://crates.io/webpki-roots/1.0.10 \
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
    crate://crates.io/windows-sys/0.52.0 \
    crate://crates.io/windows-sys/0.61.2 \
    crate://crates.io/windows-targets/0.52.6 \
    crate://crates.io/windows/0.34.0 \
    crate://crates.io/windows_aarch64_gnullvm/0.52.6 \
    crate://crates.io/windows_aarch64_msvc/0.34.0 \
    crate://crates.io/windows_aarch64_msvc/0.52.6 \
    crate://crates.io/windows_i686_gnu/0.34.0 \
    crate://crates.io/windows_i686_gnu/0.52.6 \
    crate://crates.io/windows_i686_gnullvm/0.52.6 \
    crate://crates.io/windows_i686_msvc/0.34.0 \
    crate://crates.io/windows_i686_msvc/0.52.6 \
    crate://crates.io/windows_x86_64_gnu/0.34.0 \
    crate://crates.io/windows_x86_64_gnu/0.52.6 \
    crate://crates.io/windows_x86_64_gnullvm/0.52.6 \
    crate://crates.io/windows_x86_64_msvc/0.34.0 \
    crate://crates.io/windows_x86_64_msvc/0.52.6 \
    crate://crates.io/winnow/0.7.15 \
    crate://crates.io/winnow/1.0.4 \
    crate://crates.io/wit-bindgen/0.57.1 \
    crate://crates.io/writeable/0.6.4 \
    crate://crates.io/x509-parser/0.18.1 \
    crate://crates.io/yasna/0.6.0 \
    crate://crates.io/yoke-derive/0.8.4 \
    crate://crates.io/yoke/0.8.3 \
    crate://crates.io/zenoh-buffers/1.10.2 \
    crate://crates.io/zenoh-codec/1.10.2 \
    crate://crates.io/zenoh-collections/1.10.2 \
    crate://crates.io/zenoh-config/1.10.2 \
    crate://crates.io/zenoh-core/1.10.2 \
    crate://crates.io/zenoh-crypto/1.10.2 \
    crate://crates.io/zenoh-ext/1.10.2 \
    crate://crates.io/zenoh-keyexpr/1.10.2 \
    crate://crates.io/zenoh-link-commons/1.10.2 \
    crate://crates.io/zenoh-link-quic/1.10.2 \
    crate://crates.io/zenoh-link-quic_datagram/1.10.2 \
    crate://crates.io/zenoh-link-tcp/1.10.2 \
    crate://crates.io/zenoh-link-tls/1.10.2 \
    crate://crates.io/zenoh-link-udp/1.10.2 \
    crate://crates.io/zenoh-link-unixsock_stream/1.10.2 \
    crate://crates.io/zenoh-link-ws/1.10.2 \
    crate://crates.io/zenoh-link/1.10.2 \
    crate://crates.io/zenoh-macros/1.10.2 \
    crate://crates.io/zenoh-plugin-trait/1.10.2 \
    crate://crates.io/zenoh-protocol/1.10.2 \
    crate://crates.io/zenoh-result/1.10.2 \
    crate://crates.io/zenoh-runtime/1.10.2 \
    crate://crates.io/zenoh-shm/1.10.2 \
    crate://crates.io/zenoh-stats/1.10.2 \
    crate://crates.io/zenoh-sync/1.10.2 \
    crate://crates.io/zenoh-task/1.10.2 \
    crate://crates.io/zenoh-transport/1.10.2 \
    crate://crates.io/zenoh-util/1.10.2 \
    crate://crates.io/zenoh/1.10.2 \
    crate://crates.io/zerocopy-derive/0.8.61 \
    crate://crates.io/zerocopy/0.8.61 \
    crate://crates.io/zerofrom-derive/0.1.8 \
    crate://crates.io/zerofrom/0.1.8 \
    crate://crates.io/zeroize/1.9.1 \
    crate://crates.io/zerotrie/0.2.5 \
    crate://crates.io/zerovec-derive/0.11.6 \
    crate://crates.io/zerovec/0.11.8 \
    crate://crates.io/zlib-rs/0.6.8 \
    crate://crates.io/zmij/1.0.23 \
"

SRC_URI[adler2-2.0.1.sha256sum] = "320119579fcad9c21884f5c4861d16174d0e06250625266f50fe6898340abefa"
SRC_URI[advisory-lock-0.3.0.sha256sum] = "a6caee7d48f930f9ad3fc9546f8cbf843365da0c5b0ca4eee1d1ac3dd12d8f93"
SRC_URI[aes-0.8.4.sha256sum] = "b169f7a6d4742236a0a00c541b845991d0ac43e546831af1249753ab4c3aa3a0"
SRC_URI[ahash-0.8.12.sha256sum] = "5a15f179cd60c4584b8a8c596927aadc462e27f2ca70c04e0071964a73ba7a75"
SRC_URI[aho-corasick-1.1.5.sha256sum] = "c982642fa9e8606056828ee9a8505737230110bb1099153c79efe865c59d12ba"
SRC_URI[allocator-api2-0.2.21.sha256sum] = "683d7910e743518b0e34f1186f92494becacb047c7b6bf616c96772180fef923"
SRC_URI[android_system_properties-0.1.6.sha256sum] = "ae221649c9976a6f6c56ae1facf410f3ddb33cc661c4b7b61020a912d4237fbc"
SRC_URI[anyhow-1.0.104.sha256sum] = "330a5ed07fa54e4702c9d6c4174f74427fc0ef6e214bbd677ae50a5099946470"
SRC_URI[arc-swap-1.9.2.sha256sum] = "c049c0be4daef0b145cb3555416b3b8ef5b7888a38aea1a3a155801fe7b0810b"
SRC_URI[array-init-2.1.0.sha256sum] = "3d62b7694a562cdf5a74227903507c56ab2cc8bdd1f781ed5cb4cf9c9f810bfc"
SRC_URI[asn1-rs-0.7.2.sha256sum] = "b7f43a50ac4fdca5df8e885c21b835997f0a1cdee65494a6847694a98652d9d8"
SRC_URI[asn1-rs-derive-0.6.0.sha256sum] = "3109e49b1e4909e9db6515a30c633684d68cdeaa252f215214cb4fa1a5bfee2c"
SRC_URI[asn1-rs-impl-0.2.0.sha256sum] = "7b18050c2cd6fe86c3a76584ef5e0baf286d038cda203eb6223df2cc413565f7"
SRC_URI[async-trait-0.1.92.sha256sum] = "82f6aeea286b8eb4dd3431a1be1b59d290ace00f5bfd8e2a159bc2a05e2c1667"
SRC_URI[autocfg-1.5.1.sha256sum] = "f2032f911046de80f0a198e0901378627c33f59ea0ac00e363d481118bd70a53"
SRC_URI[base64-0.22.1.sha256sum] = "72b3254f16251a8381aa12e40e3c4d2f0199f8c6508fbecb9d91f575e0fbb8c6"
SRC_URI[base64-0.23.1.sha256sum] = "ac07cdecf99051d9a5238b80f35af32cdeba5b336e55d957b318b50137e18da5"
SRC_URI[base64ct-1.8.3.sha256sum] = "2af50177e190e07a26ab74f8b1efbfe2ef87da2116221318cb1c2e82baf7de06"
SRC_URI[bincode-1.3.3.sha256sum] = "b1f45e9417d87227c7a56d22e471c6206462cba514c7590c09aff4cf6d1ddcad"
SRC_URI[bit-vec-0.9.1.sha256sum] = "b71798fca2c1fe1086445a7258a4bc81e6e49dcd24c8d0dd9a1e57395b603f51"
SRC_URI[bitflags-1.3.2.sha256sum] = "bef38d45163c2f1dde094a7dfd33ccf595c92905c8f8f4fdc18d06fb1037718a"
SRC_URI[bitflags-2.13.2.sha256sum] = "3ded4057c258ba199e2d26386d3af3780957ecaee6c4ef4041c6b4b8b97c0b06"
SRC_URI[block-buffer-0.10.4.sha256sum] = "3078c7629b62d3f0439517fa394996acacc5cbc91c5a20d8c658e77abd503a71"
SRC_URI[bs58-0.5.1.sha256sum] = "bf88ba1141d185c399bee5288d850d63b8369520c1eafc32a0430b5b6c287bf4"
SRC_URI[buddy_system_allocator-0.10.0.sha256sum] = "a7913f22349ffcfc6ca0ca9a656ec26cfbba538ed49c31a273dff2c5d1ea83d9"
SRC_URI[bumpalo-3.20.3.sha256sum] = "72f5acc6cb2ba439de613abc23857ec3d78374d8ed5ac84e9d11336e87da8649"
SRC_URI[byteorder-1.5.0.sha256sum] = "1fd0f2584146f6f2ef48085050886acf353beff7305ebd1ae69500e27c67f64b"
SRC_URI[bytes-1.12.1.sha256sum] = "fc652a48c352aef3ea3aed32080501cf3ef6ed5da78602a020c991775b0aff04"
SRC_URI[cc-1.6.0.sha256sum] = "f74872d07caf508b30a21f6836e7d7016a2eaf7d9ff4f48deaa58cd8a0407630"
SRC_URI[cfg-if-1.0.5.sha256sum] = "4e7648175b45a9a48536d676f68d918270699102aa8dab5496df06904c914600"
SRC_URI[cfg_aliases-0.1.1.sha256sum] = "fd16c4719339c4530435d38e511904438d07cce7950afa3718a84ac36c10e89e"
SRC_URI[cfg_aliases-0.2.2.sha256sum] = "f079e83a288787bcd14a6aea84cee5c87a67c5a3e660c30f557a3d24761b3527"
SRC_URI[chacha20-0.10.2.sha256sum] = "65c35e4b699c7e15ccbe7ee35c005e4fc0a278d22238a2857e6ce2dadeda1b06"
SRC_URI[chrono-0.4.45.sha256sum] = "1aa79e62e7697b8e29b513a68abacf485adcd1fe8284a4316c5ae868e6633327"
SRC_URI[cipher-0.4.4.sha256sum] = "773f3b9af64447d2ce9850330c473515014aa235e6a783b02db81ff39e4a3dad"
SRC_URI[combine-4.6.8.sha256sum] = "cfc320937d09e6de266b31b9afb480f197d7a861be86be7cb2ea7e5d1bfffc5e"
SRC_URI[const-oid-0.9.6.sha256sum] = "c2459377285ad874054d797f3ccebf984978aa39129f6eafde5cdc8315b612f8"
SRC_URI[const_format-0.2.36.sha256sum] = "4481a617ad9a412be3b97c5d403fef8ed023103368908b9c50af598ff467cc1e"
SRC_URI[const_format_proc_macros-0.2.34.sha256sum] = "1d57c2eccfb16dbac1f4e61e206105db5820c9d26c3c472bc17c774259ef7744"
SRC_URI[core-foundation-0.10.1.sha256sum] = "b2a6cd9ae233e7f62ba4e9353e81a88df7fc8a5987b8d445b4d90c879bd156f6"
SRC_URI[core-foundation-sys-0.8.7.sha256sum] = "773648b94d0e5d620f64f280777445740e61fe701025087ec8b57f45c791888b"
SRC_URI[cpufeatures-0.2.17.sha256sum] = "59ed5838eebb26a2bb2e58f6d5b5316989ae9d08bab10e0e6d103e656d1b0280"
SRC_URI[cpufeatures-0.3.1.sha256sum] = "5ca28b0ae3115b884660db4118d803791fd6756b6e88f39c0f3f7859060d7566"
SRC_URI[crc32fast-1.5.2.sha256sum] = "01a7799fd6b852db0e61728dde9a204c423b44d689dbd432522543614b490e78"
SRC_URI[crossbeam-0.8.5.sha256sum] = "e71406cd8807725f7ac2f999a4cdd32e98f829fdf65f528343cebf945e41df1e"
SRC_URI[crossbeam-channel-0.5.17.sha256sum] = "98b0cc327b5bc766e7fda9c9260cc0fa81b43a8e240440422dff70788e3f9ef1"
SRC_URI[crossbeam-deque-0.8.8.sha256sum] = "622f3fc73690be383c7214310406f28a90e6edeadc3cea882f9d71e495b9711a"
SRC_URI[crossbeam-epoch-0.9.21.sha256sum] = "dc74980687109a3b14c72fd458107bf0baa1da1a1a805e178d15501ba9b86d9d"
SRC_URI[crossbeam-queue-0.3.14.sha256sum] = "03e8bd762f7479489c70ed6c768ddca99d7296857de437a68dcb2a94365b3fae"
SRC_URI[crossbeam-utils-0.8.23.sha256sum] = "a31eee39dddec8330830986fcd7625edb5a24ec90ea038215273bbc3adb08ac6"
SRC_URI[crypto-common-0.1.7.sha256sum] = "78c8292055d1c1df0cce5d180393dc8cce0abec0a7102adb6c7b1eef6016d60a"
SRC_URI[darling-0.24.1.sha256sum] = "ed17f5901b6630b993ca003def43f2f8ef4014fc13b047b57aad617ff32bc2ec"
SRC_URI[darling_core-0.24.1.sha256sum] = "6837e2cf7485aaae18f86181d2f0e9a7ed297a025e220aeabf63fdebd3a2ddff"
SRC_URI[darling_macro-0.24.1.sha256sum] = "2ac7135c3ef02b2f7833bbeb1be5ba7f966dcde8a87c6b87f65a778d71a02785"
SRC_URI[data-encoding-2.11.1.sha256sum] = "4583a4551df46e2792f82ceeac45e850d2e2d5debba0b91f102385cda5b11f06"
SRC_URI[defmt-1.1.1.sha256sum] = "e2953bfe4f93bbd20cc71198842756f77d161884c99ebbabc41d80231ded88d1"
SRC_URI[defmt-macros-1.1.1.sha256sum] = "bad9c72e7ca2137e0dc3813245a0d282fd6daad32fd800af018306a9169b5fe8"
SRC_URI[defmt-parser-1.0.0.sha256sum] = "10d60334b3b2e7c9d91ef8150abfb6fa4c1c39ebbcf4a81c2e346aad939fee3e"
SRC_URI[der-0.7.10.sha256sum] = "e7c1832837b905bbfb5101e07cc24c8deddf52f93225eee6ead5f4d63d53ddcb"
SRC_URI[der-parser-10.0.0.sha256sum] = "07da5016415d5a3c4dd39b11ed26f915f52fc4e0dc197d87908bc916e51bc1a6"
SRC_URI[deranged-0.5.8.sha256sum] = "7cd812cc2bc1d69d4764bd80df88b4317eaef9e773c75226407d9bc0876b211c"
SRC_URI[digest-0.10.7.sha256sum] = "9ed9a281f7bc9b7576e61468ba615a66a5c8cfdff42420a70aa82701a3b1e292"
SRC_URI[dirs-6.0.0.sha256sum] = "c3e8aa94d75141228480295a7d0e7feb620b1a5ad9f12bc40be62411e38cce4e"
SRC_URI[dirs-sys-0.5.0.sha256sum] = "e01a3366d27ee9890022452ee61b2b63a67e6f13f58900b651ff5665f0bb1fab"
SRC_URI[displaydoc-0.2.7.sha256sum] = "c6232dd377dcc64799954cbd3a9bb882e9cdc1308ccd87b1c098f1fb2eaf82a8"
SRC_URI[dtoa-1.0.11.sha256sum] = "4c3cf4824e2d5f025c7b531afcb2325364084a16806f6d47fbc1f5fbd9960590"
SRC_URI[dyn-clone-1.0.20.sha256sum] = "d0881ea181b1df73ff77ffaaf9c7544ecc11e82fba9b5f27b262a3c73a332555"
SRC_URI[either-1.19.0.sha256sum] = "0e9c71c2167ca323c882b99918929403426e2373ea17242ff5653e0d5e1058be"
SRC_URI[equivalent-1.0.2.sha256sum] = "877a4ace8713b0bcf2a4e7eec82529c029f1d0619886d18145fea96c3ffe5c0f"
SRC_URI[event-listener-5.4.2.sha256sum] = "5a23add41df1562121a9393cb065eab5146a1242410f23a644851e90cfd669d2"
SRC_URI[fastbloom-0.17.0.sha256sum] = "ef975e30683b2d965054bb0a836f8973857c4ebf6acf274fe46617cd285060d8"
SRC_URI[fastrand-2.5.0.sha256sum] = "da7c62ceae207dd37ea5b845da6a0696c799f85e97da1ab5b7910be3c1c80223"
SRC_URI[find-msvc-tools-0.1.14.sha256sum] = "aedcfb3409746eddb02b9e19ebda1c3394f759a152e48ee875a0844d1b955484"
SRC_URI[fixedbitset-0.5.7.sha256sum] = "1d674e81391d1e1ab681a28d99df07927c6d4aa5b027d7da16ba32d1d21ecd99"
SRC_URI[flate2-1.1.10.sha256sum] = "6e634e2e0ebac1ee034020da1ca582e17ffe4e0f5e985823721e168928136dcb"
SRC_URI[flume-0.11.1.sha256sum] = "da0e4dd2a88388a1f4ccc7c9ce104604dab68d9f408dc34cd45823d5a9069095"
SRC_URI[foldhash-0.1.5.sha256sum] = "d9c4f5dac5e15c24eb999c26181a6ca40b39fe946cbe4c263c7209467bc83af2"
SRC_URI[foldhash-0.2.0.sha256sum] = "77ce24cb58228fbb8aa041425bb1050850ac19177686ea6e0f41a70416f56fdb"
SRC_URI[form_urlencoded-1.2.2.sha256sum] = "cb4cb245038516f5f85277875cdaa4f7d2c9a0fa0468de06ed190163b1581fcf"
SRC_URI[futures-0.3.34.sha256sum] = "9a31d2a3fbaaeb2af2368bbdd904aa8e812d3c04a1ee10d3171f52d556e5d0a3"
SRC_URI[futures-channel-0.3.34.sha256sum] = "b1f9e3d69d39e4862ffed03ed071a76f9a13ba1d9109d355b0f0aa6b15e393c4"
SRC_URI[futures-core-0.3.34.sha256sum] = "92d699e522242e69e3003b94ecc1f960f3a5e015aa7c5d7486e65ad01dd94f5e"
SRC_URI[futures-executor-0.3.34.sha256sum] = "031b47cf1a3c6cc8bc2fc76cd437f521619387907d469316e7c0bc278f1f5432"
SRC_URI[futures-io-0.3.34.sha256sum] = "53c0fa8157de1303bfffdaa1cc2a673bfffb60102f76b0ef4441659124373fed"
SRC_URI[futures-macro-0.3.34.sha256sum] = "9fb9654ba8355388abeb8dcb4fc62f511300867002afc858860463bdd9fe0c44"
SRC_URI[futures-sink-0.3.34.sha256sum] = "1944426bf7d03f1d14f708785e4b33efd750b36d48a157b836b3efc15ede8e1d"
SRC_URI[futures-task-0.3.34.sha256sum] = "cd417de3d1d015fc3bfd2b1ea46dfc7bab72ef86f1cc7cc9c78e728b34a6d1fd"
SRC_URI[futures-util-0.3.34.sha256sum] = "0d50a92467f8ba5dd6e3ee5d4bd04d73ab2e4e1c44474a0674821dfce14b79bc"
SRC_URI[generic-array-0.14.7.sha256sum] = "85649ca51fd72272d7821adaf274ad91c288277713d9c18820d8499a7ff69e9a"
SRC_URI[getrandom-0.2.17.sha256sum] = "ff2abc00be7fca6ebc474524697ae276ad847ad0a6b3faa4bcb027e9a4614ad0"
SRC_URI[getrandom-0.3.4.sha256sum] = "899def5c37c4fd7b2664648c28120ecec138e4d395b459e5ca34f9cce2dd77fd"
SRC_URI[getrandom-0.4.3.sha256sum] = "300e883d756b2e4ec94e02791f39b04b522276138852cfc41d9fb7e904106099"
SRC_URI[git-version-0.3.9.sha256sum] = "1ad568aa3db0fcbc81f2f116137f263d7304f512a1209b35b85150d3ef88ad19"
SRC_URI[git-version-macro-0.3.9.sha256sum] = "53010ccb100b96a67bc32c0175f0ed1426b31b655d562898e57325f81c023ac0"
SRC_URI[hashbrown-0.12.3.sha256sum] = "8a9ee70c43aaf417c914396645a0fa852624801b24ebb7ae78fe8272889ac888"
SRC_URI[hashbrown-0.14.5.sha256sum] = "e5274423e17b7c9fc20b6e7e208532f9b19825d82dfd615708b70edd83df41f1"
SRC_URI[hashbrown-0.15.5.sha256sum] = "9229cfe53dfd69f0609a49f65461bd93001ea1ef889cd5529dd176593f5338a1"
SRC_URI[hashbrown-0.16.1.sha256sum] = "841d1cc9bed7f9236f321df977030373f4a4163ae1a7dbfe1a51a2c1a51d9100"
SRC_URI[hashbrown-0.17.1.sha256sum] = "ed5909b6e89a2db4456e54cd5f673791d7eca6732202bbf2a9cc504fe2f9b84a"
SRC_URI[heck-0.5.0.sha256sum] = "2304e00983f87ffb38b55b444b5e3b60a884b5d30c0fca7d82fe33449bbe55ea"
SRC_URI[hermit-abi-0.5.3.sha256sum] = "e17592d60ebacc7d5e169f4663c5f84f9161cc90328abcfe8456f41e4dfcb284"
SRC_URI[hex-0.4.3.sha256sum] = "7f24254aa9a54b5c858eaee2f5bccdb46aaf0e486a595ed5fd8f86ba55232a70"
SRC_URI[hmac-0.12.1.sha256sum] = "6c49c37c09c17a53d937dfbb742eb3a961d65a994e6bcdcf37e7399d0cc8ab5e"
SRC_URI[home-0.5.12.sha256sum] = "cc627f471c528ff0c4a49e1d5e60450c8f6461dd6d10ba9dcd3a61d3dff7728d"
SRC_URI[http-1.5.0.sha256sum] = "918d3568bebf352712bc2ef3d46a8bcf1a75b373be6539de198e9105cbbf9ce0"
SRC_URI[httparse-1.10.1.sha256sum] = "6dbf3de79e51f3d586ab4cb9d5c3e2c14aa28ed23d180cf89b4df0454a69cc87"
SRC_URI[humantime-2.4.0.sha256sum] = "15cdd26707701c53297e2fa6afb323d55fbc1d0810c3aec078ae3ef0424c3c15"
SRC_URI[iana-time-zone-0.1.65.sha256sum] = "e31bc9ad994ba00e440a8aa5c9ef0ec67d5cb5e5cb0cc7f8b744a35b389cc470"
SRC_URI[iana-time-zone-haiku-0.1.2.sha256sum] = "f31827a206f56af32e590ba56d5d2d085f558508192593743f16b2306495269f"
SRC_URI[icu_collections-2.3.0.sha256sum] = "fa68d21081c4a05d5a901a1c62add574c77048b6a1c67be3b50ce0b60d4ca513"
SRC_URI[icu_locale_core-2.3.0.sha256sum] = "d56e28588da92eee5c3201a6eff33fabdd49b62269c8938d4ff050ce4d900deb"
SRC_URI[icu_normalizer-2.3.0.sha256sum] = "12f9cf5f235641ed274641dd81c3f28d870e276763d0797aeeab72317b1c646f"
SRC_URI[icu_normalizer_data-2.3.0.sha256sum] = "1563da1ed3e0b3bf3d74c9b85917ac9c56464d2f57242270c09c9e752f8021a0"
SRC_URI[icu_properties-2.3.0.sha256sum] = "7e7ca276ad3145661a65914e6daf131ca5120cd3dcee8f8f3214b8875184a148"
SRC_URI[icu_properties_data-2.3.0.sha256sum] = "e590f038c1464a96894fd6d10127e90a8be4509f56ff7ecef851b15cee0b7caa"
SRC_URI[icu_provider-2.3.1.sha256sum] = "d27bbb9d3abbefac45d55f647c9de1d44aafcd1186eb91879afef17c396c3e73"
SRC_URI[ident_case-1.0.1.sha256sum] = "b9e0384b61958566e926dc50660321d12159025e767c18e043daf26b70104c39"
SRC_URI[idna-1.1.0.sha256sum] = "3b0875f23caa03898994f6ddc501886a45c7d3d62d04d2d90788d47be1b1e4de"
SRC_URI[idna_adapter-1.2.2.sha256sum] = "cb68373c0d6620ef8105e855e7745e18b0d00d3bdb07fb532e434244cdb9a714"
SRC_URI[indexmap-1.9.3.sha256sum] = "bd070e393353796e801d209ad339e89596eb4c8d430d18ede6a1cced8fafbd99"
SRC_URI[indexmap-2.14.2.sha256sum] = "cc4e190f5d26ca7051642629da2c52fc03bde85a03197c99408dcd291734c855"
SRC_URI[indoc-2.0.8.sha256sum] = "a37b2691796cffeb8a8cd305ac66e65841559f147f4e63231d0eafa4db5384d1"
SRC_URI[inout-0.1.4.sha256sum] = "879f10e63c20629ecabbb64a8010319738c66a5cd0c29b02d63d272b03751d01"
SRC_URI[ipnetwork-0.20.0.sha256sum] = "bf466541e9d546596ee94f9f69590f89473455f88372423e0008fc1a7daf100e"
SRC_URI[itertools-0.14.0.sha256sum] = "2b192c782037fadd9cfa75548310488aabdbf3d2da73885b31bd0abd03351285"
SRC_URI[itoa-1.0.18.sha256sum] = "8f42a60cbdf9a97f5d2305f08a87dc4e09308d1276d28c869c684d7777685682"
SRC_URI[jiff-0.2.38.sha256sum] = "b2b005715dcbeb0089a3c0dab99f2ff1cc3b2525323552703d648585d342a383"
SRC_URI[jiff-core-0.1.1.sha256sum] = "5e52fe76043ccecc9005d2305ebaadf7d7fc0cc89ca6baa10a94d6bc68c7128c"
SRC_URI[jiff-static-0.2.38.sha256sum] = "2cc9817253cf7c7ee4684451bd327e88d6f3658014e54a29198625590650695c"
SRC_URI[jiff-tzdb-0.1.9.sha256sum] = "fa8377070c6bae868759445e5a77f66d84f0b72f3a054bfb00e6d038b8282da7"
SRC_URI[jiff-tzdb-platform-0.1.3.sha256sum] = "875a5a69ac2bab1a891711cf5eccbec1ce0341ea805560dcd90b7a2e925132e8"
SRC_URI[jni-0.22.4.sha256sum] = "5efd9a482cf3a427f00d6b35f14332adc7902ce91efb778580e180ff90fa3498"
SRC_URI[jni-macros-0.22.4.sha256sum] = "a00109accc170f0bdb141fed3e393c565b6f5e072365c3bd58f5b062591560a3"
SRC_URI[jni-sys-0.4.1.sha256sum] = "c6377a88cb3910bee9b0fa88d4f42e1d2da8e79915598f65fb0c7ee14c878af2"
SRC_URI[jni-sys-macros-0.4.1.sha256sum] = "38c0b942f458fe50cdac086d2f946512305e5631e720728f2a61aabcd47a6264"
SRC_URI[js-sys-0.3.106.sha256sum] = "7883d941dae510fb2d978fc3fe018c71c9e2892fd38854de3e8b92c2e5ad9cc5"
SRC_URI[json5-0.4.1.sha256sum] = "96b0db21af676c1ce64250b5f40f3ce2cf27e4e47cb91ed91eb6fe9350b430c1"
SRC_URI[keccak-0.1.6.sha256sum] = "cb26cec98cce3a3d96cbb7bced3c4b16e3d13f27ec56dbd62cbc8f39cfb9d653"
SRC_URI[keyed-set-1.1.0.sha256sum] = "89d255a6b6ecd77bb93ce91de984d7039bff7503f500eb4851a1269732f22baf"
SRC_URI[konst-0.2.20.sha256sum] = "128133ed7824fcd73d6e7b17957c5eb7bacb885649bd8c69708b2331a10bcefb"
SRC_URI[konst_macro_rules-0.2.19.sha256sum] = "a4933f3f57a8e9d9da04db23fb153356ecaf00cbd14aee46279c33dc80925c37"
SRC_URI[lazy_static-1.5.1.sha256sum] = "20870f649af7073d53e38067b2a84312175d56ea15217e1b15bc83506ec50afb"
SRC_URI[leb128-0.2.7.sha256sum] = "c83bff1d572d6b9aeef67ddfc8448e4a3737909cb28e81f97c791b9018703e52"
SRC_URI[libc-0.2.190.sha256sum] = "ce5d3ddc6d3fa000eb1536d85e147bfe31aacaba692ed6a876f95cb7c855be78"
SRC_URI[libloading-0.8.9.sha256sum] = "d7c4b02199fee7c5d21a5ae7d8cfa79a6ef5bb2fc834d6e9058e89c825efdc55"
SRC_URI[libm-0.2.16.sha256sum] = "b6d2cec3eae94f9f509c767b45932f1ada8350c4bdb85af2fcab4a3c14807981"
SRC_URI[libredox-0.1.25.sha256sum] = "61ff90caf6077a803a240f62fdbe88645a890bbca49ef8174c3cb0404362171d"
SRC_URI[litemap-0.8.3.sha256sum] = "47d9d19d1d6efa0109d2f65ff4c85cddd50bd572e5a00127ab10987290bcefae"
SRC_URI[lock_api-0.4.14.sha256sum] = "224399e74b87b5f3557511d98dff8b14089b3dadafcab6bb93eab67d3aace965"
SRC_URI[lockfree-0.5.1.sha256sum] = "74ee94b5ad113c7cb98c5a040f783d0952ee4fe100993881d1673c2cb002dd23"
SRC_URI[log-0.4.34.sha256sum] = "f9f8bd3e56ce4dfc153cf470fffbfa98c7620958b312ca5c3a4b8d5181fd13c6"
SRC_URI[lru-0.16.4.sha256sum] = "7f66e8d5d03f609abc3a39e6f08e4164ebf1447a732906d39eb9b99b7919ef39"
SRC_URI[lru-slab-0.1.3.sha256sum] = "4050469837a6ff301cd14c1f8f24f88549e6d548f24f64e2148eb0f72cebc51f"
SRC_URI[lz4_flex-0.10.0.sha256sum] = "8b8c72594ac26bfd34f2d99dfced2edfaddfe8a476e3ff2ca0eb293d925c4f83"
SRC_URI[matchers-0.2.0.sha256sum] = "d1525a2a28c7f4fa0fc98bb91ae755d1e2d1505079e05539e35bc876b5d65ae9"
SRC_URI[memchr-2.8.3.sha256sum] = "cf8baf1c55e62ffcace7a9f06f4bd9cd3f0c4beb022d3b367256b91b87513d98"
SRC_URI[memoffset-0.9.1.sha256sum] = "488016bfae457b036d996092f6cb448677611ce4449e970ceaf42695203f218a"
SRC_URI[minimal-lexical-0.2.1.sha256sum] = "68354c5c6bd36d73ff3feceb05efa59b6acb7626617f4962be322a825e61f79a"
SRC_URI[miniz_oxide-0.9.1.sha256sum] = "b63fbc4a50860e98e7b2aa7804ded1db5cbc3aff9193adaff57a6931bf7c4b4c"
SRC_URI[mio-1.2.4.sha256sum] = "1788edb87fdc09c7e26304471e2f5be8cdefb1b6930d6e3985fc02ff53bf86ee"
SRC_URI[nanorand-0.7.0.sha256sum] = "6a51313c5820b0b02bd422f4b44776fbf47961755c74ce64afc73bfad10226c3"
SRC_URI[nix-0.29.0.sha256sum] = "71e2746dc3a24dd78b3cfcb7be93368c6de9963d30f43a6a73998a9cf4b17b46"
SRC_URI[no-std-net-0.6.0.sha256sum] = "43794a0ace135be66a25d3ae77d41b91615fb68ae937f904090203e81f755b65"
SRC_URI[nom-7.1.3.sha256sum] = "d273983c5a657a70a3e8f2a01329822f3b8c8172b73826411a55751e404a0a4a"
SRC_URI[nonempty-collections-0.3.1.sha256sum] = "e216d0e8cf9d54fa66e5780f6e1d5dc96d1c1b3c25aeba3b6758548bcbbd8b9d"
SRC_URI[nu-ansi-term-0.50.3.sha256sum] = "7957b9740744892f114936ab4a57b3f487491bbeafaf8083688b16841a4240e5"
SRC_URI[num-bigint-0.4.8.sha256sum] = "c89e69e7e0f03bea5ef08013795c25018e101932225a656383bd384495ecc367"
SRC_URI[num-bigint-dig-0.8.6.sha256sum] = "e661dda6640fad38e827a6d4a310ff4763082116fe217f279885c97f511bb0b7"
SRC_URI[num-conv-0.2.2.sha256sum] = "521739c6d2bac4aa25192232afe6841231376b2b26d4d9fae5ecf8ca5772e441"
SRC_URI[num-integer-0.1.47.sha256sum] = "7ce2d95d4b3734dc35aa2f45e1aa22cd416814592a4f9d9205e11affd5b8e10b"
SRC_URI[num-iter-0.1.46.sha256sum] = "c92800bd69a1eac91786bcfe9da64a897eb72911b8dc3095decbd07429e8048b"
SRC_URI[num-traits-0.2.19.sha256sum] = "071dfc062690e90b734c0b2273ce72ad0ffa95f0c74596bc250dcfd960262841"
SRC_URI[num_cpus-1.17.0.sha256sum] = "91df4bbde75afed763b708b7eee1e8e7651e02d97f6d5dd763e89367e957b23b"
SRC_URI[oid-registry-0.8.1.sha256sum] = "12f40cff3dde1b6087cc5d5f5d4d65712f34016a03ed60e9c08dcc392736b5b7"
SRC_URI[once_cell-1.21.4.sha256sum] = "9f7c3e4beb33f85d45ae3e3a1792185706c8e16d043238c593331cc7cd313b50"
SRC_URI[openssl-probe-0.2.1.sha256sum] = "7c87def4c32ab89d880effc9e097653c8da5d6ef28e6b539d313baaacfbafcbe"
SRC_URI[option-ext-0.2.0.sha256sum] = "04744f49eae99ab78e0d5c0b603ab218f515ea8cfe5a456d7629ad883a3b6e7d"
SRC_URI[owned-alloc-0.2.0.sha256sum] = "30fceb411f9a12ff9222c5f824026be368ff15dc2f13468d850c7d3f502205d6"
SRC_URI[parking-2.2.1.sha256sum] = "f38d5652c16fde515bb1ecef450ab0f6a219d619a7274976324d5e377f7dceba"
SRC_URI[parking_lot-0.12.5.sha256sum] = "93857453250e3077bd71ff98b6a65ea6621a19bb0f559a85248955ac12c45a1a"
SRC_URI[parking_lot_core-0.9.12.sha256sum] = "2621685985a2ebf1c516881c026032ac7deafcda1a2c9b7850dc81e3dfcb64c1"
SRC_URI[paste-1.0.15.sha256sum] = "57c0d7b74b563b49d38dae00a0c37d4d6de9b432382b2892f0574ddcae73fd0a"
SRC_URI[pem-4.0.0.sha256sum] = "d354a98a3d1251555de99e8fdd8afda05573c31b82f59063a7b0a29b5527f120"
SRC_URI[pem-rfc7468-0.7.0.sha256sum] = "88b39c9bfcfc231068454382784bb460aae594343fb030d46e9f50a645418412"
SRC_URI[percent-encoding-2.3.2.sha256sum] = "9b4f627cb1b25917193a259e49bdad08f671f8d9708acfd5fe0a8c1455d87220"
SRC_URI[pest-2.9.2.sha256sum] = "45d3aca230fad2e6f6317ca0a72724338c4960cb97168a85cdee66df4a9a21a8"
SRC_URI[pest_derive-2.9.2.sha256sum] = "284b60557f2c4a2e72ad3f2d34d42685a2fa4a6a61d0d2a10c0ae2a5e916c2cf"
SRC_URI[pest_generator-2.9.2.sha256sum] = "1d9d1f08a115309ee99268cf85e5228e0e56aa9caf8841ec12866b6be07c3109"
SRC_URI[pest_meta-2.9.2.sha256sum] = "ed93ba1a9ffcca32130a5188701c81c0c49cf00d4b7c5007d5148951d743adcb"
SRC_URI[petgraph-0.8.3.sha256sum] = "8701b58ea97060d5e5b155d383a69952a60943f0e6dfe30b04c287beb0b27455"
SRC_URI[phf-0.13.1.sha256sum] = "c1562dc717473dbaa4c1f85a36410e03c047b2e7df7f45ee938fbef64ae7fadf"
SRC_URI[phf_generator-0.13.1.sha256sum] = "135ace3a761e564ec88c03a77317a7c6b80bb7f7135ef2544dbe054243b89737"
SRC_URI[phf_macros-0.13.1.sha256sum] = "812f032b54b1e759ccd5f8b6677695d5268c588701effba24601f6932f8269ef"
SRC_URI[phf_shared-0.13.1.sha256sum] = "e57fef6bc5981e38c2ce2d63bfa546861309f875b8a75f092d1d54ae2d64f266"
SRC_URI[pin-project-lite-0.2.17.sha256sum] = "a89322df9ebe1c1578d689c92318e070967d1042b512afbe49518723f4e6d5cd"
SRC_URI[pkcs1-0.7.5.sha256sum] = "c8ffb9f10fa047879315e6625af03c164b16962a5368d724ed16323b68ace47f"
SRC_URI[pkcs8-0.10.2.sha256sum] = "f950b2377845cebe5cf8b5165cb3cc1a5e0fa5cfa3e1f7f55707d8fd82e0a7b7"
SRC_URI[pnet_base-0.35.0.sha256sum] = "ffc190d4067df16af3aba49b3b74c469e611cad6314676eaf1157f31aa0fb2f7"
SRC_URI[pnet_datalink-0.35.0.sha256sum] = "e79e70ec0be163102a332e1d2d5586d362ad76b01cec86f830241f2b6452a7b7"
SRC_URI[pnet_sys-0.35.0.sha256sum] = "7d4643d3d4db6b08741050c2f3afa9a892c4244c085a72fcda93c9c2c9a00f4b"
SRC_URI[portable-atomic-1.15.0.sha256sum] = "05c8b63e8d9609db387f0324918f81d68fe27748f084ef092fb35954d0539a85"
SRC_URI[portable-atomic-util-0.2.8.sha256sum] = "10ab3eb7f3becc3a1cbc4f2c6f20267996cfc1a6467a873763411b136a122715"
SRC_URI[potential_utf-0.1.6.sha256sum] = "d83eb9bc6d8e5cf568e7a1101d60ee05e81ed50ea106026f3d18deeb046d7661"
SRC_URI[powerfmt-0.2.1.sha256sum] = "4a6394b9e965e73d0a289ee54f589087e2c676aedf60885baf52c76b771e4958"
SRC_URI[ppv-lite86-0.2.21.sha256sum] = "85eae3c4ed2f50dcfe72643da4befc30deadb458a9b590d720cde2f2b1e97da9"
SRC_URI[proc-macro-crate-3.5.0.sha256sum] = "e67ba7e9b2b56446f1d419b1d807906278ffa1a658a8a5d8a39dcb1f5a78614f"
SRC_URI[proc-macro2-1.0.107.sha256sum] = "985e7ec9bb745e6ce6535b544d84d6cd6f7ad8bd711c398938ae983b91a766d9"
SRC_URI[prometheus-client-0.24.1.sha256sum] = "cca3d75b4566b9a29fe1ed623587fb058e826eb329a0be4b7c4da1ebb2d7a6ca"
SRC_URI[prometheus-client-derive-encode-0.5.1.sha256sum] = "01e34894696ff94f64a20c2c373a6440903e9c2789a303d68ec6e6f953f890e4"
SRC_URI[pyo3-0.25.1.sha256sum] = "8970a78afe0628a3e3430376fc5fd76b6b45c4d43360ffd6cdd40bdde72b682a"
SRC_URI[pyo3-build-config-0.25.1.sha256sum] = "458eb0c55e7ece017adeba38f2248ff3ac615e53660d7c71a238d7d2a01c7598"
SRC_URI[pyo3-ffi-0.25.1.sha256sum] = "7114fe5457c61b276ab77c5055f206295b812608083644a5c5b2640c3102565c"
SRC_URI[pyo3-macros-0.25.1.sha256sum] = "a8725c0a622b374d6cb051d11a0983786448f7785336139c3c94f5aa6bef7e50"
SRC_URI[pyo3-macros-backend-0.25.1.sha256sum] = "4109984c22491085343c05b0dbc54ddc405c3cf7b4374fc533f5c3313a572ccc"
SRC_URI[quinn-0.11.12.sha256sum] = "4051e23e9185c255a7e33ef59cdbca87a22d359052eecd22fc6b901fb37d9d11"
SRC_URI[quinn-proto-0.11.19.sha256sum] = "0e750cca55fe4f0439a15d0bb529da9651e79993e8e72c61a899a36d462befbe"
SRC_URI[quinn-udp-0.5.16.sha256sum] = "af66907df18639dcf4db56ca65490cabc4b27a97dbadd96f2926cca73298f016"
SRC_URI[quote-1.0.47.sha256sum] = "1fbf4db142a473a8d80c26bbf18454ed458bf8d26c8219c331daecfdbd079001"
SRC_URI[r-efi-5.3.0.sha256sum] = "69cdb34c158ceb288df11e18b4bd39de994f6657d83847bdffdbd7f346754b0f"
SRC_URI[r-efi-6.0.0.sha256sum] = "f8dcc9c7d52a811697d2151c701e0d08956f92b0e24136cf4cf27b57a6a0d9bf"
SRC_URI[rand-0.10.3.sha256sum] = "65c9fb96cbc91e3478eaae79a69fcd3f1ae4ad052e471fe6732fff548984b4af"
SRC_URI[rand-0.8.8.sha256sum] = "e058c7de0b26af77780c769414d6257830bb240f3c38477dbc2c16e5f54d6d4c"
SRC_URI[rand_chacha-0.3.1.sha256sum] = "e6c10a63a0fa32252be49d21e7709d4d4baf8d231c2dbce1eaa8141b9b127d88"
SRC_URI[rand_core-0.10.1.sha256sum] = "63b8176103e19a2643978565ca18b50549f6101881c443590420e4dc998a3c69"
SRC_URI[rand_core-0.6.4.sha256sum] = "ec0be4795e2f6a28069bec0b5ff3e2ac9bafc99e6a9a7dc3547996c5c816922c"
SRC_URI[rand_pcg-0.10.2.sha256sum] = "caa0f4137e1c0a72f4c651489402276c8e8e1cf081f3b0ba156d2cbeef09e86a"
SRC_URI[rcgen-0.14.10.sha256sum] = "8774e05a7d0de114588e6a28fe7e71694b82614ed569d86d8b389dfbc98b8ad8"
SRC_URI[redox_syscall-0.5.18.sha256sum] = "ed2bf2547551a7053d6fdfafda3f938979645c44812fbfcda098faae3f1a362d"
SRC_URI[redox_users-0.5.3.sha256sum] = "60dc65c0ff1a7ae1294b0c67b9f14baf70b644404010370171787bfac1038fc0"
SRC_URI[ref-cast-1.0.27.sha256sum] = "7e440fb4e4b4147295338efb76001ab9e4efc0e5839df2c47fc5ac2381d365c3"
SRC_URI[ref-cast-impl-1.0.27.sha256sum] = "92ecd8964f8453721699a1ed72037b0db49ce2f5a5138486ee89bed6f67cdf3a"
SRC_URI[regex-automata-0.4.18.sha256sum] = "ad8553b9b26413251cbf30e620595c7a41b3887f03da04579c0e6b0d6a06b4b2"
SRC_URI[regex-syntax-0.8.11.sha256sum] = "d6f6ff9a378485b298a5286656da665ba74413d36db0979633275d2e708145d4"
SRC_URI[ring-0.17.14.sha256sum] = "a4689e6c2294d81e88dc6261c768b63bc4fcdb852be6d1352498b114f61383b7"
SRC_URI[ringbuffer-spsc-0.1.15.sha256sum] = "8d3e7aa0a681b232e7cd7f856a53b10603df88ca74b79a8d8088845185492e35"
SRC_URI[rlimit-0.10.2.sha256sum] = "7043b63bd0cd1aaa628e476b80e6d4023a3b50eb32789f2728908107bd0c793a"
SRC_URI[ron-0.12.2.sha256sum] = "81116b9531d61eabc41aeb228e4b6b2435bcca3233b98cf3b3077d4e6e9debb3"
SRC_URI[rsa-0.9.10.sha256sum] = "b8573f03f5883dcaebdfcf4725caa1ecb9c15b2ef50c43a07b816e06799bb12d"
SRC_URI[rustc-hash-2.1.3.sha256sum] = "6b1e7f9a428571be2dc5bc0505c13fb6bf936822b894ec87abf8a08a4e51742d"
SRC_URI[rustc_version-0.4.1.sha256sum] = "cfcb3a22ef46e85b45de6ee7e79d063319ebb6594faafcf1c225ea92ab6e9b92"
SRC_URI[rusticata-macros-4.1.0.sha256sum] = "faf0c4a6ece9950b9abdb62b1cfcf2a68b3b67a10ba445b3bb85be2a293d0632"
SRC_URI[rustls-0.23.45.sha256sum] = "0d41d731c7d2f962d1ccc364cec258de3c0e93b38c2fb3ba97ac74513048d634"
SRC_URI[rustls-native-certs-0.8.4.sha256sum] = "dab5152771c58876a2146916e53e35057e1a4dfa2b9df0f0305b07f611fdea4d"
SRC_URI[rustls-pemfile-2.2.0.sha256sum] = "dce314e5fee3f39953d46bb63bb8a46d40c2f8fb7cc5a3b6cab2bde9721d6e50"
SRC_URI[rustls-pki-types-1.15.1.sha256sum] = "2f4925028c7eb5d1fcdaf196971378ed9d2c1c4efc7dc5d011256f76c99c0a96"
SRC_URI[rustls-platform-verifier-0.7.1.sha256sum] = "1167586491e2b18b8bfbb293e8180ec17c201c4f076d7cb3070ca964e7598f98"
SRC_URI[rustls-platform-verifier-android-0.2.0.sha256sum] = "eec689c0bc40ff2458a5977b6619cb718087084a18e02a131c599b62d05e1a5f"
SRC_URI[rustls-webpki-0.103.15.sha256sum] = "f3c3cf1d8b1e7d4927e2d154c3fcb02979afb9939629c62cd9048d4f07b60ac2"
SRC_URI[rustversion-1.0.23.sha256sum] = "cf54715a573b99ac80df0bc206da022bcd442c974952c7b9720069370852e21f"
SRC_URI[ryu-1.0.23.sha256sum] = "9774ba4a74de5f7b1c1451ed6cd5285a32eddb5cccb8cc655a4e50009e06477f"
SRC_URI[same-file-1.0.6.sha256sum] = "93fc1dc3aaa9bfed95e02e6eadabb4baf7e3078b0bd1b4d7b6b0b68378900502"
SRC_URI[schannel-0.1.29.sha256sum] = "91c1b7e4904c873ef0710c1f407dde2e6287de2bebc1bbbf7d430bb7cbffd939"
SRC_URI[schemars-0.9.0.sha256sum] = "4cd191f9397d57d581cddd31014772520aa448f65ef991055d7f61582c65165f"
SRC_URI[schemars-1.2.2.sha256sum] = "687274d293b6cdc6e73e0fee520bf2049650090d7164f87672d212a3c530cf4a"
SRC_URI[schemars_derive-1.2.2.sha256sum] = "d98c67716b46af2f0b8cf752abc930f6f9aecfbf671ecfb531db8a31dbe4e2ba"
SRC_URI[scopeguard-1.2.0.sha256sum] = "94143f37725109f92c262ed2cf5e59bce7498c01bcc1502d7b9afe439a4e9f49"
SRC_URI[secrecy-0.8.0.sha256sum] = "9bd1c54ea06cfd2f6b63219704de0b9b4f72dcc2b8fdef820be6cd799780e91e"
SRC_URI[security-framework-3.7.0.sha256sum] = "b7f4bc775c73d9a02cde8bf7b2ec4c9d12743edf609006c7facc23998404cd1d"
SRC_URI[security-framework-sys-2.17.0.sha256sum] = "6ce2691df843ecc5d231c0b14ece2acc3efb62c0a398c7e1d875f3983ce020e3"
SRC_URI[semver-1.0.28.sha256sum] = "8a7852d02fc848982e0c167ef163aaff9cd91dc640ba85e263cb1ce46fae51cd"
SRC_URI[serde-1.0.229.sha256sum] = "4148590afebada386688f18773da617792bf2ef03ffc1e4cbd2b1d45b023e0ba"
SRC_URI[serde_core-1.0.229.sha256sum] = "67dca2c9c51e58a4791a4b1ed58308b39c64224d349a935ab5039aa360942a48"
SRC_URI[serde_derive-1.0.229.sha256sum] = "e7a5d71263a5a7d47b41f6b3f06ba276f10cc18b0931f1799f710578e2309348"
SRC_URI[serde_derive_internals-0.30.0.sha256sum] = "f852137cce035d6a4df67ccce505ff6b3e9fd3a10e3e52b24dc71e650bb1a9bd"
SRC_URI[serde_json-1.0.151.sha256sum] = "c841b55ecdae098c80dcae9cf767f6f8a0c2cdb3416bbef72181df4d0fe73f14"
SRC_URI[serde_spanned-1.1.1.sha256sum] = "6662b5879511e06e8999a8a235d848113e942c9124f211511b16466ee2995f26"
SRC_URI[serde_with-3.24.0.sha256sum] = "df9adc193c780ef8f159aee8b61e2d5801aaa555e6eb0947fe45530ec506296f"
SRC_URI[serde_with_macros-3.24.0.sha256sum] = "3e17bbc68e28663bbbb90df47e058aa7eda4fb445b89fe70457bb94fbccf6e49"
SRC_URI[serde_yaml-0.9.34+deprecated.sha256sum] = "6a8b1a1a2ebf674015cc02edccce75287f1a0130d394307b36743c2f5d504b47"
SRC_URI[sha1-0.10.7.sha256sum] = "a978451301f4db1d02937a4ab3ccce137717b81826e79b7d49ffe3244a13c3b8"
SRC_URI[sha2-const-stable-0.1.0.sha256sum] = "5f179d4e11094a893b82fff208f74d448a7512f99f5a0acbd5c679b705f83ed9"
SRC_URI[sha3-0.10.9.sha256sum] = "77fd7028345d415a4034cf8777cd4f8ab1851274233b45f84e3d955502d93874"
SRC_URI[sharded-slab-0.1.7.sha256sum] = "f40ca3c46823713e0d4209592e8d6e826aa57e928f09752619fc696c499637f6"
SRC_URI[shellexpand-3.1.2.sha256sum] = "32824fab5e16e6c4d86dc1ba84489390419a39f97699852b66480bb87d297ed8"
SRC_URI[shlex-2.0.1.sha256sum] = "f8fadd59c855ef2080decdef8ff161eb6661b86933c9d82e5ba29dc602a55aba"
SRC_URI[signature-2.2.0.sha256sum] = "77549399552de45a898a580c1b41d445bf730df867cc44e6c0233bbc4b8329de"
SRC_URI[simd-adler32-0.3.10.sha256sum] = "3a219298ac11a56ea9a6d2120044824d6f01aeb034955e7af7bc16858527deea"
SRC_URI[simd_cesu8-1.2.0.sha256sum] = "11031e251abf8611c80f460e19dbdeb54a66db918e49c65a7065b46ac7aec520"
SRC_URI[simdutf8-0.1.5.sha256sum] = "e3a9fe34e3e7a50316060351f37187a3f546bce95496156754b601a5fa71b76e"
SRC_URI[siphasher-1.0.4.sha256sum] = "33f4fe9184a62d842c9ef383018f3306d8ba224fd9d836f56d7288308847c256"
SRC_URI[slab-0.4.12.sha256sum] = "0c790de23124f9ab44544d7ac05d60440adc586479ce501c1d6d7da3cd8c9cf5"
SRC_URI[smallvec-1.16.2.sha256sum] = "f9395f0f0eee849a9b707b2f06bb92a6a422090e2123bb2ef8e87a0e61892a8e"
SRC_URI[socket2-0.5.10.sha256sum] = "e22376abed350d73dd1cd119b57ffccad95b4e585a7cda43e286245ce23c0678"
SRC_URI[socket2-0.6.5.sha256sum] = "c3d1e2c7f27f8d4cb10542a02c49005dbd6e93095799d6f3be745fae9f8fedd4"
SRC_URI[spin-0.10.1.sha256sum] = "023a211cb3138dbc438680b32560ad89f699977624c9f8dbb95a47d5b4c07dd3"
SRC_URI[spin-0.9.9.sha256sum] = "3763264f6b73151db08c50ff20d7d8a0b8796e021cdea7ceedad07b80155fa0e"
SRC_URI[spki-0.7.3.sha256sum] = "d91ed6c858b01f942cd56b37a94b3e0a1798290327d1236e4d9cf4eaca44d29d"
SRC_URI[stabby-72.1.16.sha256sum] = "3d53d2428934c46277fafd2d41e39357595aa1e47954c75db2b14ed90632f3cc"
SRC_URI[stabby-abi-72.1.16.sha256sum] = "f375eae680bb54203ee5e47d4cd2ae7b79c0a79ed90919279f38f500ad53f190"
SRC_URI[stabby-macros-72.1.16.sha256sum] = "ea664671a576c5f7e32fee291ac123d82af5e92b0689beb3555347c00c76eef1"
SRC_URI[stable_deref_trait-1.2.1.sha256sum] = "6ce2be8dc25455e1f91df71bfa12ad37d7af1092ae736f3a6cd0e37bc7810596"
SRC_URI[static_assertions-1.1.0.sha256sum] = "a2eb9349b6444b326872e140eb1cf5e7c522154d69e7a0ffb0fb81c06b37543f"
SRC_URI[static_init-1.0.4.sha256sum] = "8bae1df58c5fea7502e8e352ec26b5579f6178e1fdb311e088580c980dee25ed"
SRC_URI[static_init_macro-1.0.4.sha256sum] = "1389c88ddd739ec6d3f8f83343764a0e944cd23cfbf126a9796a714b0b6edd6f"
SRC_URI[strsim-0.11.1.sha256sum] = "7da8b5736845d9f2fcb837ea5d9e2628564b3b043a70948a3f0b778838c5fb4f"
SRC_URI[subtle-2.6.1.sha256sum] = "13c2bddecc57b384dee18652358fb23172facb8a2c51ccc10d74c157bdea3292"
SRC_URI[syn-1.0.109.sha256sum] = "72b64191b275b66ffe2469e8af2c1cfe3bafa67b529ead792a6d0160888b4237"
SRC_URI[syn-2.0.119.sha256sum] = "872831b642d1a07999a962a351ed35b955ea2cfc8f3862091e2a240a84f17297"
SRC_URI[syn-3.0.6.sha256sum] = "8593e8e72159ed2257d083c7a454a85cbf854f37a0966d8d483aff8c8a3ebcee"
SRC_URI[synstructure-0.13.2.sha256sum] = "728a70f3dbaf5bab7f0c4b1ac8d7ae5ea60a4b5549c8a5914361c99147a709d2"
SRC_URI[synstructure-0.14.0.sha256sum] = "901704edd0dfe137f1987838ee4f259e4e063c31371bdb423f7ae38ec6f77f02"
SRC_URI[talc-4.4.3.sha256sum] = "a3ae828aa394de34c7de08f522d1b86bd1c182c668d27da69caadda00590f26d"
SRC_URI[target-lexicon-0.13.5.sha256sum] = "adb6935a6f5c20170eeceb1a3835a49e12e19d792f6dd344ccc76a985ca5a6ca"
SRC_URI[thiserror-1.0.69.sha256sum] = "b6aaf5339b578ea85b50e080feb250a3e8ae8cfcdff9a461c9ec2904bc923f52"
SRC_URI[thiserror-2.0.21.sha256sum] = "09e52cb86a36cede5cb101bf8908837b3e4c6e5e59fe7fd85c23fb56200d189e"
SRC_URI[thiserror-impl-1.0.69.sha256sum] = "4fee6c4efc90059e10f81e6d42c60a18f76588c3d74cb83a0b242a2b6c7504c1"
SRC_URI[thiserror-impl-2.0.21.sha256sum] = "fe5197923287db20a58125f0bc85c062f7f2c892de97b18c356f9efb14b28524"
SRC_URI[thread-priority-1.2.0.sha256sum] = "cfe075d7053dae61ac5413a34ea7d4913b6e6207844fd726bdd858b37ff72bf5"
SRC_URI[thread_local-1.1.10.sha256sum] = "1ad99c4c6d32803332c548b1af0540b357b3f5fc0be8f6c6bfe8b2e6ae784070"
SRC_URI[time-0.3.55.sha256sum] = "cdb87b95ec50ddfa440816d227a17b2ccbdda963a316a727fda0fc4334f7d134"
SRC_URI[time-core-0.1.9.sha256sum] = "9e1c906769ad99c88eaa54e728060edef082f8e358ff32030cb7c7d315e81109"
SRC_URI[time-macros-0.2.32.sha256sum] = "7e689342a48d2ea927c87ea50cabf8594854bf940e9310208848d680d668ed85"
SRC_URI[tinystr-0.8.4.sha256sum] = "b1e27c91459209c2986af3dcf603a5a74a4368754ce37414f59acc971167f643"
SRC_URI[tinyvec-1.13.3.sha256sum] = "fd3ca314f692efd6c868f8408f53fe444634a845f96c028b97d35f6a1f79f0ee"
SRC_URI[tls-listener-0.11.2.sha256sum] = "1461056cc1ef47003f7ee16e4cef3741068d4c7f6b627bfce49b7c00c120a530"
SRC_URI[token-cell-2.1.1.sha256sum] = "fb48920ae769b58126c8c93269805011c793201f95fde28b479b81a9a531bbde"
SRC_URI[tokio-1.53.2.sha256sum] = "e95f91fcc7a621e8b030f6aa23c71fe9838ae2fb4d8118b75602a328f5144044"
SRC_URI[tokio-macros-2.7.2.sha256sum] = "78773a2a397f451582ce068015985c33193cf6dea8b74d2a639fe457b2f07b0e"
SRC_URI[tokio-rustls-0.26.6.sha256sum] = "c9cc2678c2cdd569ef8215e2afd7954ada2ae20b4fdd2c5fe6139a3b02d105db"
SRC_URI[tokio-tungstenite-0.24.0.sha256sum] = "edc5f74e248dc973e0dbb7b74c7e0d6fcc301c694ff50049504004ef4d0cdcd9"
SRC_URI[tokio-util-0.7.19.sha256sum] = "494815d09bf52b5548659851081238f0ca39ff638363907596da739561c62c52"
SRC_URI[toml-0.9.12+spec-1.1.0.sha256sum] = "cf92845e79fc2e2def6a5d828f0801e29a2f8acc037becc5ab08595c7d5e9863"
SRC_URI[toml_datetime-0.7.5+spec-1.1.0.sha256sum] = "92e1cfed4a3038bc5a127e35a2d360f145e1f4b971b551a2ba5fd7aedf7e1347"
SRC_URI[toml_datetime-1.1.1+spec-1.1.0.sha256sum] = "3165f65f62e28e0115a00b2ebdd37eb6f3b641855f9d636d3cd4103767159ad7"
SRC_URI[toml_edit-0.25.15+spec-1.1.0.sha256sum] = "1340ea94a5856333492c9064b02c778b191dd2c853778d9609debdcdfea3a614"
SRC_URI[toml_parser-1.1.3+spec-1.1.0.sha256sum] = "1d38ac1cf9b95face32296c0a3ede1fdc270627c9d9c02a7274dd6d960dc4d56"
SRC_URI[toml_writer-1.1.2+spec-1.1.0.sha256sum] = "7d56353a2a665ad0f41a421187180aab746c8c325620617ad883a99a1cbe66d2"
SRC_URI[tracing-0.1.44.sha256sum] = "63e71662fa4b2a2c3a26f570f037eb95bb1f85397f3cd8076caed2f026a6d100"
SRC_URI[tracing-attributes-0.1.31.sha256sum] = "7490cfa5ec963746568740651ac6781f701c9c5ea257c58e057f3ba8cf69e8da"
SRC_URI[tracing-core-0.1.36.sha256sum] = "db97caf9d906fbde555dd62fa95ddba9eecfd14cb388e4f491a66d74cd5fb79a"
SRC_URI[tracing-log-0.2.0.sha256sum] = "ee855f1f400bd0e5c02d150ae5de3840039a3f54b025156404e34c23c03f47c3"
SRC_URI[tracing-serde-0.2.0.sha256sum] = "704b1aeb7be0d0a84fc9828cae51dab5970fee5088f83d1dd7ee6f6246fc6ff1"
SRC_URI[tracing-subscriber-0.3.23.sha256sum] = "cb7f578e5945fb242538965c2d0b04418d38ec25c79d160cd279bf0731c8d319"
SRC_URI[tungstenite-0.24.0.sha256sum] = "18e5b8366ee7a95b16d32197d0b2604b43a0be89dc5fac9f8e96ccafbaedda8a"
SRC_URI[twox-hash-1.6.3.sha256sum] = "97fee6b57c6a41524a810daee9286c02d7752c4253064d0b05472833a438f675"
SRC_URI[typeid-1.0.3.sha256sum] = "bc7d623258602320d5c55d1bc22793b57daff0ec7efc270ea7d55ce1d5f5471c"
SRC_URI[typenum-1.20.1.sha256sum] = "b6f5e870be6c3b371b77fe0ee0bafb859fa4964b4404c27de1d380043c4dda20"
SRC_URI[ucd-trie-0.1.7.sha256sum] = "2896d95c02a80c6d6a5d6e953d479f5ddf2dfdb6a244441010e373ac0fb88971"
SRC_URI[uhlc-0.8.2.sha256sum] = "b62a645e3e4e6c85b7abe49b086aa3204119431f42b6123b0070419fb6e9d24e"
SRC_URI[unicode-ident-1.0.26.sha256sum] = "d245f478577f809a851594d02313b640fb437e0bb33866753cff937863096954"
SRC_URI[unicode-xid-0.2.6.sha256sum] = "ebc1c04c71510c7f702b52b7c350734c9ff1295c464a03335b00bb84fc54f853"
SRC_URI[unindent-0.2.4.sha256sum] = "7264e107f553ccae879d21fbea1d6724ac785e8c3bfc762137959b5802826ef3"
SRC_URI[unsafe-libyaml-0.2.11.sha256sum] = "673aac59facbab8a9007c7f6108d11f63b603f7cabff99fabf650fea5c32b861"
SRC_URI[untrusted-0.9.0.sha256sum] = "8ecb6da28b8a351d773b68d5825ac39017e680750f980f3a1a85cd8dd28a47c1"
SRC_URI[unzip-n-0.1.4.sha256sum] = "3b5bb2756c16fb66f80cfbf5fb0e0c09a7001e739f453c9ec241b9c8b1556fda"
SRC_URI[url-2.5.8.sha256sum] = "ff67a8a4397373c3ef660812acab3268222035010ab8680ec4215f38ba3d0eed"
SRC_URI[utf-8-0.7.6.sha256sum] = "09cc8ee72d2a9becf2f2febe0205bbed8fc6615b7cb429ad062dc7b7ddd036a9"
SRC_URI[utf8_iter-1.0.4.sha256sum] = "b6c140620e7ffbb22c2dee59cafe6084a59b5ffc27a8859a5f0d494b5d52b6be"
SRC_URI[uuid-1.27.0.sha256sum] = "97277d36b9c3ace13e58fa6e753f8b0bbbf302a18dd193240d70f9e29681059a"
SRC_URI[validated_struct-2.2.0.sha256sum] = "869a93e8a7286e339e1128630051d82babbcd75d585975af07b9f3327220e60e"
SRC_URI[validated_struct_macros-2.2.0.sha256sum] = "8c44ce98e7227a04eeb4cf9c784109a5c9710e54849ceb4f09f8597247897f1e"
SRC_URI[valuable-0.1.1.sha256sum] = "ba73ea9cf16a25df0c8caa16c51acb937d5712a8429db78a3ee29d5dcacd3a65"
SRC_URI[vec_map-0.8.2.sha256sum] = "f1bddf1187be692e79c5ffeab891132dfb0f236ed36a43c7ed39f1165ee20191"
SRC_URI[version_check-0.9.5.sha256sum] = "0b928f33d975fc6ad9f86c8f283853ad26bdd5b10b7f1542aa2fa15e2289105a"
SRC_URI[walkdir-2.5.0.sha256sum] = "29790946404f91d9c5d06f9874efddea1dc06c5efe94541a7d6863108e3a5e4b"
SRC_URI[wasi-0.11.1+wasi-snapshot-preview1.sha256sum] = "ccf3ec651a847eb01de73ccad15eb7d99f80485de043efb2f370cd654f4ea44b"
SRC_URI[wasip2-1.0.4+wasi-0.2.12.sha256sum] = "b67efb37e106e55ce722a510d6b5f9c17f083e5fc79afc2badeb12cc313d9487"
SRC_URI[wasm-bindgen-0.2.129.sha256sum] = "9bb54f33acc68fd454578d9820b0bde1a1a3d17aa17bb7b6595806d02886d409"
SRC_URI[wasm-bindgen-macro-0.2.129.sha256sum] = "2e29d0c35b16e224a7eeb5cd2d25e3e1968fbd65604117b44d3b789d00ee8535"
SRC_URI[wasm-bindgen-macro-support-0.2.129.sha256sum] = "6f501a8bc3719dba86ef8ae4728879c08001bea749eb1333ac5b91e040e2a6b7"
SRC_URI[wasm-bindgen-shared-0.2.129.sha256sum] = "23f0c9c52aa7cd7d77769a4cfe2a9adb1b331f489a41d912ce14513d5ab995c6"
SRC_URI[web-time-1.1.0.sha256sum] = "5a6580f308b1fad9207618087a65c04e7a10bc77e02c8e84e9b00dd4b12fa0bb"
SRC_URI[webpki-root-certs-1.0.9.sha256sum] = "b96554aa2acc8ccdb7e1c9a58a7a68dd5d13bccc69cd124cb09406db612a1c9b"
SRC_URI[webpki-roots-1.0.10.sha256sum] = "1c1c8e20c8a38fc7d65abfe74eb7280e4aa667e8eec8bc84996d2874810748d9"
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
SRC_URI[windows-sys-0.52.0.sha256sum] = "282be5f36a8ce781fad8c8ae18fa3f9beff57ec1b52cb3de0789201425d9a33d"
SRC_URI[windows-sys-0.61.2.sha256sum] = "ae137229bcbd6cdf0f7b80a31df61766145077ddf49416a728b02cb3921ff3fc"
SRC_URI[windows-targets-0.52.6.sha256sum] = "9b724f72796e036ab90c1021d4780d4d3d648aca59e491e6b98e725b84e99973"
SRC_URI[windows_aarch64_gnullvm-0.52.6.sha256sum] = "32a4622180e7a0ec044bb555404c800bc9fd9ec262ec147edd5989ccd0c02cd3"
SRC_URI[windows_aarch64_msvc-0.34.0.sha256sum] = "17cffbe740121affb56fad0fc0e421804adf0ae00891205213b5cecd30db881d"
SRC_URI[windows_aarch64_msvc-0.52.6.sha256sum] = "09ec2a7bb152e2252b53fa7803150007879548bc709c039df7627cabbd05d469"
SRC_URI[windows_i686_gnu-0.34.0.sha256sum] = "2564fde759adb79129d9b4f54be42b32c89970c18ebf93124ca8870a498688ed"
SRC_URI[windows_i686_gnu-0.52.6.sha256sum] = "8e9b5ad5ab802e97eb8e295ac6720e509ee4c243f69d781394014ebfe8bbfa0b"
SRC_URI[windows_i686_gnullvm-0.52.6.sha256sum] = "0eee52d38c090b3caa76c563b86c3a4bd71ef1a819287c19d586d7334ae8ed66"
SRC_URI[windows_i686_msvc-0.34.0.sha256sum] = "9cd9d32ba70453522332c14d38814bceeb747d80b3958676007acadd7e166956"
SRC_URI[windows_i686_msvc-0.52.6.sha256sum] = "240948bc05c5e7c6dabba28bf89d89ffce3e303022809e73deaefe4f6ec56c66"
SRC_URI[windows_x86_64_gnu-0.34.0.sha256sum] = "cfce6deae227ee8d356d19effc141a509cc503dfd1f850622ec4b0f84428e1f4"
SRC_URI[windows_x86_64_gnu-0.52.6.sha256sum] = "147a5c80aabfbf0c7d901cb5895d1de30ef2907eb21fbbab29ca94c5b08b1a78"
SRC_URI[windows_x86_64_gnullvm-0.52.6.sha256sum] = "24d5b23dc417412679681396f2b49f3de8c1473deb516bd34410872eff51ed0d"
SRC_URI[windows_x86_64_msvc-0.34.0.sha256sum] = "d19538ccc21819d01deaf88d6a17eae6596a12e9aafdbb97916fb49896d89de9"
SRC_URI[windows_x86_64_msvc-0.52.6.sha256sum] = "589f6da84c646204747d1270a2a5661ea66ed1cced2631d546fdfb155959f9ec"
SRC_URI[winnow-0.7.15.sha256sum] = "df79d97927682d2fd8adb29682d1140b343be4ac0f08fd68b7765d9c059d3945"
SRC_URI[winnow-1.0.4.sha256sum] = "23b97319f7b8343df12cc98938e5c3eb436064524c8d2b4e30a1d3a36eecdf81"
SRC_URI[wit-bindgen-0.57.1.sha256sum] = "1ebf944e87a7c253233ad6766e082e3cd714b5d03812acc24c318f549614536e"
SRC_URI[writeable-0.6.4.sha256sum] = "3ad82d2a33cdc9674dc7465672f271e096168fcdbe0f799d9e6db8c5892679dc"
SRC_URI[x509-parser-0.18.1.sha256sum] = "d43b0f71ce057da06bc0851b23ee24f3f86190b07203dd8f567d0b706a185202"
SRC_URI[yasna-0.6.0.sha256sum] = "b5f6765e852b9b4dc8e2a76843e4d64d1cea8e79bcde0b6901aea8e7c7f08282"
SRC_URI[yoke-0.8.3.sha256sum] = "709fe23a0424b6a435d82152b1bd3fdfb0833487d5fa90d05d42762a9891fef5"
SRC_URI[yoke-derive-0.8.4.sha256sum] = "ec8ebde2db3681e8c9980cc27822030e68752690ddfa9473e739aeb4dbde6d71"
SRC_URI[zenoh-1.10.2.sha256sum] = "946b0c49f30d9d5a29c13d9fe258ca2f14e9457018d145b9392df3bc49f84baa"
SRC_URI[zenoh-buffers-1.10.2.sha256sum] = "81037d2763c9b662f56ae0cf4768c7cdbfdc9e75177f5c63cc92e766f1cf3e73"
SRC_URI[zenoh-codec-1.10.2.sha256sum] = "c308475c70e71e0465951878647b9d50295cb14b94cae6f157ba866eed78a3ff"
SRC_URI[zenoh-collections-1.10.2.sha256sum] = "48afd8ec1d77795813fb68b9284b79973df66dcc5edf62b3358cdef2a6039ef8"
SRC_URI[zenoh-config-1.10.2.sha256sum] = "64d9dd5b2af70352f280fdc8d3fdf1b008599c81340932b078b872eb0616dc22"
SRC_URI[zenoh-core-1.10.2.sha256sum] = "5957623838ad7294754526fb7820e57253ea8ceaba4457ec8eb070260e8c42c3"
SRC_URI[zenoh-crypto-1.10.2.sha256sum] = "cba1238975fb464fc94beb5866aa41a9a1b0eb42e04def2f5db7969f91b8033d"
SRC_URI[zenoh-ext-1.10.2.sha256sum] = "55970106a26186b71550ca1229f69788b98d6f746e7ad03f38becd56f258fc8b"
SRC_URI[zenoh-keyexpr-1.10.2.sha256sum] = "471cc8d38cd7ba4d75e6ce96d076048d31d9ffe319cae0f522e692e705fc453f"
SRC_URI[zenoh-link-1.10.2.sha256sum] = "aee895dc8043786b38eee8cfee4a308b2d5bd5c0f0e7f62dd6db2a39be386ca3"
SRC_URI[zenoh-link-commons-1.10.2.sha256sum] = "bd13efe721047fba14823730d20451fc48c634a7ed86eba76a72654ad70d4f50"
SRC_URI[zenoh-link-quic-1.10.2.sha256sum] = "4d0fb7c72e08744fb7189e849bb98413c035ad94d6eaea91724f28ff60996d8d"
SRC_URI[zenoh-link-quic_datagram-1.10.2.sha256sum] = "e57bbfc0c5d7db843ea4140c7ece4b7e37678fce59ce1d71592c7aa9c6f03fa7"
SRC_URI[zenoh-link-tcp-1.10.2.sha256sum] = "0dfa5b1427190bf2d4b54ee050ad41ea8560881ae39eb959ee9afabfcf2b7475"
SRC_URI[zenoh-link-tls-1.10.2.sha256sum] = "c68bd5c4869ca5ff15e5e87602aa02b576b6317bfad9e047cecddac9da834b04"
SRC_URI[zenoh-link-udp-1.10.2.sha256sum] = "ab4704836c02b5fe0725b8aaba3040beab328c224920413daacc2e7cd45d9372"
SRC_URI[zenoh-link-unixsock_stream-1.10.2.sha256sum] = "e19670e873d5a6865b6a2e957947367b5617bd37af69eae1c1044b0c890aa119"
SRC_URI[zenoh-link-ws-1.10.2.sha256sum] = "6897b712416f70e7116fdf85d057d1d424d489a18c2d16cbff7bff78d86ddf94"
SRC_URI[zenoh-macros-1.10.2.sha256sum] = "3547d0b6ad0d03e7fc07af173fee9d0d15377ecf28422ff8d2c3511265e0622a"
SRC_URI[zenoh-plugin-trait-1.10.2.sha256sum] = "349995da59f172bbc8c257fe16d91882f484036ed2c549a1d102fca5a1aa42e8"
SRC_URI[zenoh-protocol-1.10.2.sha256sum] = "7cf662208de87be401d57cbc778da68f2d2fede3530978192d477ad87551b1c5"
SRC_URI[zenoh-result-1.10.2.sha256sum] = "9daafe6c84485576783d1fd7c213fc31c534e591d0359a26fc0b9004798785d9"
SRC_URI[zenoh-runtime-1.10.2.sha256sum] = "cab508aa1ab8a20fdd0d6c39c18027aa0bc0495e8f1663c69e0857ca9b144e2f"
SRC_URI[zenoh-shm-1.10.2.sha256sum] = "8cf7b493f21ee214ea86547251651986ae02060d14fd935c32c0af1f15b02907"
SRC_URI[zenoh-stats-1.10.2.sha256sum] = "f855d4005d40caec01860d589bb381cade315a0872eaf355bca54eac47cfbd1d"
SRC_URI[zenoh-sync-1.10.2.sha256sum] = "407ef304b48c7df07a22905582d0762dcdb8cbb205daa77be3b2d926deaa4634"
SRC_URI[zenoh-task-1.10.2.sha256sum] = "327425c8309bc0fa3eb4316b4628eb1635a3ea1f06a92d7293e77eddc3ac2593"
SRC_URI[zenoh-transport-1.10.2.sha256sum] = "b652b7a1a79d23b601920b425747d60c4838f44d64151bf77a963f7508de739b"
SRC_URI[zenoh-util-1.10.2.sha256sum] = "8d0c41cd1f331e36b2f37c9094893ebc015037fc77f231c17c6cd774f1062204"
SRC_URI[zerocopy-0.8.61.sha256sum] = "879fb705ce98c32e41ebdb970fbe1204f8492423b314c6ab0354c3e7b5542866"
SRC_URI[zerocopy-derive-0.8.61.sha256sum] = "708882a28301d604fa039cc7727607a98d04c4b86dc76ec9cc683f805d709759"
SRC_URI[zerofrom-0.1.8.sha256sum] = "0ec05a11813ea801ff6d75110ad09cd0824ddba17dfe17128ea0d5f68e6c5272"
SRC_URI[zerofrom-derive-0.1.8.sha256sum] = "f75b4683f6c7f45248d4d64056a24298c6281e0993356d7d1b4a1a962ef10d4a"
SRC_URI[zeroize-1.9.1.sha256sum] = "e13084392c5e4bc371903e2935a5eaeed24905a7511356b883835e18a78f6879"
SRC_URI[zerotrie-0.2.5.sha256sum] = "4ea269c3bd32f0a32c321907a2ae912ba6f4649bb0fc764a15627e99a7095a3f"
SRC_URI[zerovec-0.11.8.sha256sum] = "bb0464e17806c1d976d5cba29399c7f08e516e279e2ba493f63123b5fca67dd8"
SRC_URI[zerovec-derive-0.11.6.sha256sum] = "34df6fc39dbd26ddc9c10e6a2984476e13acce22e64e4487636ef494369225da"
SRC_URI[zlib-rs-0.6.8.sha256sum] = "b268e58e7c693d7c271f93ffc4ba3b380412554231c85bf61ca7af91042a4112"
SRC_URI[zmij-1.0.23.sha256sum] = "29666d0abbfad1e3dc4dcf6144730dd3a3ab225bbbdac83319345b1b44ccfc1b"
