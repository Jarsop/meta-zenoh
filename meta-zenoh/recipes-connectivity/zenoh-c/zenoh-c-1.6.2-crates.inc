SRC_URI += "\
    crate://crates.io/addr2line/0.24.1 \
    crate://crates.io/adler2/2.0.0 \
    crate://crates.io/advisory-lock/0.3.0 \
    crate://crates.io/aes/0.8.4 \
    crate://crates.io/ahash/0.8.12 \
    crate://crates.io/aho-corasick/1.1.3 \
    crate://crates.io/allocator-api2/0.2.18 \
    crate://crates.io/android-tzdata/0.1.1 \
    crate://crates.io/android_system_properties/0.1.5 \
    crate://crates.io/anstream/0.6.15 \
    crate://crates.io/anstyle-parse/0.2.5 \
    crate://crates.io/anstyle-query/1.1.1 \
    crate://crates.io/anstyle-wincon/3.0.4 \
    crate://crates.io/anstyle/1.0.8 \
    crate://crates.io/anyhow/1.0.99 \
    crate://crates.io/arc-swap/1.7.1 \
    crate://crates.io/array-init/2.1.0 \
    crate://crates.io/asn1-rs-derive/0.6.0 \
    crate://crates.io/asn1-rs-impl/0.2.0 \
    crate://crates.io/asn1-rs/0.7.1 \
    crate://crates.io/async-trait/0.1.89 \
    crate://crates.io/autocfg/1.3.0 \
    crate://crates.io/backtrace/0.3.74 \
    crate://crates.io/base64/0.22.1 \
    crate://crates.io/base64ct/1.6.0 \
    crate://crates.io/bincode/1.3.3 \
    crate://crates.io/bitflags/1.3.2 \
    crate://crates.io/bitflags/2.6.0 \
    crate://crates.io/block-buffer/0.10.4 \
    crate://crates.io/buddy_system_allocator/0.10.0 \
    crate://crates.io/bumpalo/3.16.0 \
    crate://crates.io/byteorder/1.5.0 \
    crate://crates.io/bytes/1.10.1 \
    crate://crates.io/cbindgen/0.29.0 \
    crate://crates.io/cc/1.2.16 \
    crate://crates.io/cesu8/1.1.0 \
    crate://crates.io/cfg-if/1.0.1 \
    crate://crates.io/cfg_aliases/0.1.1 \
    crate://crates.io/cfg_aliases/0.2.1 \
    crate://crates.io/chrono/0.4.38 \
    crate://crates.io/cipher/0.4.4 \
    crate://crates.io/clap/4.5.47 \
    crate://crates.io/clap_builder/4.5.47 \
    crate://crates.io/clap_lex/0.7.5 \
    crate://crates.io/cobs/0.2.3 \
    crate://crates.io/colorchoice/1.0.2 \
    crate://crates.io/combine/4.6.7 \
    crate://crates.io/concurrent-queue/2.5.0 \
    crate://crates.io/const-oid/0.9.6 \
    crate://crates.io/const_format/0.2.34 \
    crate://crates.io/const_format_proc_macros/0.2.34 \
    crate://crates.io/core-foundation-sys/0.8.7 \
    crate://crates.io/core-foundation/0.9.4 \
    crate://crates.io/cpufeatures/0.2.14 \
    crate://crates.io/crossbeam-channel/0.5.15 \
    crate://crates.io/crossbeam-deque/0.8.5 \
    crate://crates.io/crossbeam-epoch/0.9.18 \
    crate://crates.io/crossbeam-queue/0.3.12 \
    crate://crates.io/crossbeam-utils/0.8.21 \
    crate://crates.io/crossbeam/0.8.4 \
    crate://crates.io/crypto-common/0.1.6 \
    crate://crates.io/ctor-proc-macro/0.0.6 \
    crate://crates.io/ctor/0.4.3 \
    crate://crates.io/darling/0.21.3 \
    crate://crates.io/darling_core/0.21.3 \
    crate://crates.io/darling_macro/0.21.3 \
    crate://crates.io/data-encoding/2.6.0 \
    crate://crates.io/der-parser/10.0.0 \
    crate://crates.io/der/0.7.9 \
    crate://crates.io/deranged/0.4.0 \
    crate://crates.io/digest/0.10.7 \
    crate://crates.io/dirs-sys/0.4.1 \
    crate://crates.io/dirs/5.0.1 \
    crate://crates.io/displaydoc/0.2.5 \
    crate://crates.io/dtor-proc-macro/0.0.5 \
    crate://crates.io/dtor/0.0.6 \
    crate://crates.io/dyn-clone/1.0.17 \
    crate://crates.io/either/1.15.0 \
    crate://crates.io/equivalent/1.0.1 \
    crate://crates.io/errno-dragonfly/0.1.2 \
    crate://crates.io/errno/0.2.8 \
    crate://crates.io/errno/0.3.9 \
    crate://crates.io/evalexpr/11.3.1 \
    crate://crates.io/event-listener/5.4.1 \
    crate://crates.io/fastrand/2.1.1 \
    crate://crates.io/filepath/0.1.2 \
    crate://crates.io/fixedbitset/0.5.7 \
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
    crate://crates.io/getrandom/0.2.15 \
    crate://crates.io/getrandom/0.3.3 \
    crate://crates.io/gimli/0.31.0 \
    crate://crates.io/git-version-macro/0.3.9 \
    crate://crates.io/git-version/0.3.9 \
    crate://crates.io/hashbrown/0.12.3 \
    crate://crates.io/hashbrown/0.14.5 \
    crate://crates.io/hashbrown/0.15.5 \
    crate://crates.io/hashbrown/0.16.0 \
    crate://crates.io/heck/0.5.0 \
    crate://crates.io/hermit-abi/0.3.9 \
    crate://crates.io/hermit-abi/0.5.2 \
    crate://crates.io/hex/0.4.3 \
    crate://crates.io/hmac/0.12.1 \
    crate://crates.io/home/0.5.9 \
    crate://crates.io/http/1.1.0 \
    crate://crates.io/httparse/1.9.4 \
    crate://crates.io/humantime/2.3.0 \
    crate://crates.io/iana-time-zone-haiku/0.1.2 \
    crate://crates.io/iana-time-zone/0.1.60 \
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
    crate://crates.io/indexmap/2.5.0 \
    crate://crates.io/inout/0.1.3 \
    crate://crates.io/instant/0.1.13 \
    crate://crates.io/io-kit-sys/0.4.1 \
    crate://crates.io/io-uring/0.7.10 \
    crate://crates.io/ipnetwork/0.20.0 \
    crate://crates.io/is_terminal_polyfill/1.70.1 \
    crate://crates.io/itertools/0.14.0 \
    crate://crates.io/itoa/1.0.11 \
    crate://crates.io/jni-sys/0.3.0 \
    crate://crates.io/jni/0.19.0 \
    crate://crates.io/js-sys/0.3.79 \
    crate://crates.io/json5/0.4.1 \
    crate://crates.io/keccak/0.1.5 \
    crate://crates.io/keyed-set/1.1.0 \
    crate://crates.io/lazy_static/1.5.0 \
    crate://crates.io/leb128/0.2.5 \
    crate://crates.io/libc/0.2.175 \
    crate://crates.io/libloading/0.8.8 \
    crate://crates.io/libm/0.2.8 \
    crate://crates.io/libredox/0.1.3 \
    crate://crates.io/linux-raw-sys/0.4.14 \
    crate://crates.io/litemap/0.7.4 \
    crate://crates.io/lock_api/0.4.12 \
    crate://crates.io/log/0.4.22 \
    crate://crates.io/lz4_flex/0.11.3 \
    crate://crates.io/mach2/0.4.2 \
    crate://crates.io/matchers/0.1.0 \
    crate://crates.io/memchr/2.7.4 \
    crate://crates.io/memoffset/0.7.1 \
    crate://crates.io/memoffset/0.9.1 \
    crate://crates.io/minimal-lexical/0.2.1 \
    crate://crates.io/miniz_oxide/0.8.0 \
    crate://crates.io/mio-serial/5.0.5 \
    crate://crates.io/mio/0.8.11 \
    crate://crates.io/mio/1.0.2 \
    crate://crates.io/nanorand/0.7.0 \
    crate://crates.io/nix/0.26.4 \
    crate://crates.io/nix/0.27.1 \
    crate://crates.io/nix/0.29.0 \
    crate://crates.io/no-std-net/0.6.0 \
    crate://crates.io/nom/7.1.3 \
    crate://crates.io/nonempty-collections/0.3.0 \
    crate://crates.io/nu-ansi-term/0.46.0 \
    crate://crates.io/num-bigint-dig/0.8.4 \
    crate://crates.io/num-bigint/0.4.6 \
    crate://crates.io/num-conv/0.1.0 \
    crate://crates.io/num-integer/0.1.46 \
    crate://crates.io/num-iter/0.1.45 \
    crate://crates.io/num-traits/0.2.19 \
    crate://crates.io/num_cpus/1.17.0 \
    crate://crates.io/object/0.36.4 \
    crate://crates.io/oid-registry/0.8.1 \
    crate://crates.io/once_cell/1.21.3 \
    crate://crates.io/openssl-probe/0.1.5 \
    crate://crates.io/option-ext/0.2.0 \
    crate://crates.io/overload/0.1.1 \
    crate://crates.io/parking/2.2.1 \
    crate://crates.io/parking_lot/0.11.2 \
    crate://crates.io/parking_lot_core/0.8.6 \
    crate://crates.io/paste/1.0.15 \
    crate://crates.io/pem-rfc7468/0.7.0 \
    crate://crates.io/percent-encoding/2.3.2 \
    crate://crates.io/pest/2.8.0 \
    crate://crates.io/pest_derive/2.8.0 \
    crate://crates.io/pest_generator/2.8.0 \
    crate://crates.io/pest_meta/2.8.0 \
    crate://crates.io/petgraph/0.8.2 \
    crate://crates.io/phf/0.11.3 \
    crate://crates.io/phf/0.13.1 \
    crate://crates.io/phf_generator/0.11.3 \
    crate://crates.io/phf_generator/0.13.1 \
    crate://crates.io/phf_macros/0.11.3 \
    crate://crates.io/phf_macros/0.13.1 \
    crate://crates.io/phf_shared/0.11.3 \
    crate://crates.io/phf_shared/0.13.1 \
    crate://crates.io/pin-project-lite/0.2.14 \
    crate://crates.io/pin-utils/0.1.0 \
    crate://crates.io/pkcs1/0.7.5 \
    crate://crates.io/pkcs8/0.10.2 \
    crate://crates.io/pnet_base/0.35.0 \
    crate://crates.io/pnet_datalink/0.35.0 \
    crate://crates.io/pnet_sys/0.35.0 \
    crate://crates.io/powerfmt/0.2.0 \
    crate://crates.io/ppv-lite86/0.2.20 \
    crate://crates.io/proc-macro-crate/3.2.0 \
    crate://crates.io/proc-macro2/1.0.101 \
    crate://crates.io/quinn-proto/0.11.8 \
    crate://crates.io/quinn-udp/0.5.5 \
    crate://crates.io/quinn/0.11.5 \
    crate://crates.io/quote/1.0.40 \
    crate://crates.io/r-efi/5.3.0 \
    crate://crates.io/rand/0.8.5 \
    crate://crates.io/rand/0.9.2 \
    crate://crates.io/rand_chacha/0.3.1 \
    crate://crates.io/rand_chacha/0.9.0 \
    crate://crates.io/rand_core/0.6.4 \
    crate://crates.io/rand_core/0.9.3 \
    crate://crates.io/redox_syscall/0.2.16 \
    crate://crates.io/redox_users/0.4.6 \
    crate://crates.io/ref-cast-impl/1.0.24 \
    crate://crates.io/ref-cast/1.0.24 \
    crate://crates.io/regex-automata/0.1.10 \
    crate://crates.io/regex-automata/0.4.10 \
    crate://crates.io/regex-syntax/0.6.29 \
    crate://crates.io/regex-syntax/0.8.6 \
    crate://crates.io/regex/1.11.2 \
    crate://crates.io/ring/0.17.13 \
    crate://crates.io/ringbuffer-spsc/0.1.15 \
    crate://crates.io/ron/0.11.0 \
    crate://crates.io/rsa/0.9.8 \
    crate://crates.io/rustc-demangle/0.1.24 \
    crate://crates.io/rustc-hash/2.0.0 \
    crate://crates.io/rustc_version/0.4.1 \
    crate://crates.io/rusticata-macros/4.1.0 \
    crate://crates.io/rustix/0.38.37 \
    crate://crates.io/rustls-native-certs/0.7.3 \
    crate://crates.io/rustls-pemfile/2.2.0 \
    crate://crates.io/rustls-pki-types/1.12.0 \
    crate://crates.io/rustls-platform-verifier-android/0.1.1 \
    crate://crates.io/rustls-platform-verifier/0.3.4 \
    crate://crates.io/rustls-webpki/0.102.8 \
    crate://crates.io/rustls-webpki/0.103.6 \
    crate://crates.io/rustls/0.23.31 \
    crate://crates.io/rustversion/1.0.17 \
    crate://crates.io/ryu/1.0.18 \
    crate://crates.io/same-file/1.0.6 \
    crate://crates.io/schannel/0.1.24 \
    crate://crates.io/schemars/0.8.21 \
    crate://crates.io/schemars/0.9.0 \
    crate://crates.io/schemars/1.0.4 \
    crate://crates.io/schemars_derive/0.8.21 \
    crate://crates.io/scopeguard/1.2.0 \
    crate://crates.io/secrecy/0.8.0 \
    crate://crates.io/security-framework-sys/2.15.0 \
    crate://crates.io/security-framework/2.11.1 \
    crate://crates.io/semver/1.0.23 \
    crate://crates.io/serde/1.0.225 \
    crate://crates.io/serde_core/1.0.225 \
    crate://crates.io/serde_derive/1.0.225 \
    crate://crates.io/serde_derive_internals/0.29.1 \
    crate://crates.io/serde_json/1.0.145 \
    crate://crates.io/serde_spanned/0.6.9 \
    crate://crates.io/serde_with/3.14.1 \
    crate://crates.io/serde_with_macros/3.14.1 \
    crate://crates.io/serde_yaml/0.9.34+deprecated \
    crate://crates.io/serialport/4.5.0 \
    crate://crates.io/sha1/0.10.6 \
    crate://crates.io/sha2-const-stable/0.1.0 \
    crate://crates.io/sha2/0.10.8 \
    crate://crates.io/sha3/0.10.8 \
    crate://crates.io/sharded-slab/0.1.7 \
    crate://crates.io/shellexpand/3.1.1 \
    crate://crates.io/shlex/1.3.0 \
    crate://crates.io/signature/2.2.0 \
    crate://crates.io/siphasher/1.0.1 \
    crate://crates.io/slab/0.4.9 \
    crate://crates.io/smallvec/1.13.2 \
    crate://crates.io/socket2/0.5.7 \
    crate://crates.io/socket2/0.6.0 \
    crate://crates.io/spin/0.10.0 \
    crate://crates.io/spin/0.9.8 \
    crate://crates.io/spki/0.7.3 \
    crate://crates.io/stabby-abi/36.2.2 \
    crate://crates.io/stabby-macros/36.2.2 \
    crate://crates.io/stabby/36.2.2 \
    crate://crates.io/stable_deref_trait/1.2.0 \
    crate://crates.io/static_assertions/1.1.0 \
    crate://crates.io/static_init/1.0.3 \
    crate://crates.io/static_init_macro/1.0.2 \
    crate://crates.io/strsim/0.11.1 \
    crate://crates.io/subtle/2.6.1 \
    crate://crates.io/syn/1.0.109 \
    crate://crates.io/syn/2.0.106 \
    crate://crates.io/synstructure/0.13.1 \
    crate://crates.io/talc/4.4.3 \
    crate://crates.io/tempfile/3.12.0 \
    crate://crates.io/thiserror-impl/1.0.69 \
    crate://crates.io/thiserror-impl/2.0.11 \
    crate://crates.io/thiserror/1.0.69 \
    crate://crates.io/thiserror/2.0.11 \
    crate://crates.io/thread-priority/1.1.0 \
    crate://crates.io/thread_local/1.1.8 \
    crate://crates.io/time-core/0.1.4 \
    crate://crates.io/time-macros/0.2.22 \
    crate://crates.io/time/0.3.41 \
    crate://crates.io/tinystr/0.7.6 \
    crate://crates.io/tinyvec/1.8.0 \
    crate://crates.io/tinyvec_macros/0.1.1 \
    crate://crates.io/tls-listener/0.11.0 \
    crate://crates.io/token-cell/2.0.0 \
    crate://crates.io/tokio-macros/2.5.0 \
    crate://crates.io/tokio-rustls/0.26.2 \
    crate://crates.io/tokio-serial/5.4.4 \
    crate://crates.io/tokio-tungstenite/0.24.0 \
    crate://crates.io/tokio-util/0.7.16 \
    crate://crates.io/tokio-vsock/0.5.0 \
    crate://crates.io/tokio/1.47.1 \
    crate://crates.io/toml/0.8.19 \
    crate://crates.io/toml_datetime/0.6.8 \
    crate://crates.io/toml_edit/0.22.20 \
    crate://crates.io/tracing-attributes/0.1.30 \
    crate://crates.io/tracing-core/0.1.34 \
    crate://crates.io/tracing-log/0.2.0 \
    crate://crates.io/tracing-serde/0.1.3 \
    crate://crates.io/tracing-subscriber/0.3.18 \
    crate://crates.io/tracing/0.1.41 \
    crate://crates.io/tungstenite/0.24.0 \
    crate://crates.io/twox-hash/1.6.3 \
    crate://crates.io/typenum/1.17.0 \
    crate://crates.io/ucd-trie/0.1.6 \
    crate://crates.io/uhlc/0.8.2 \
    crate://crates.io/unescaper/0.1.5 \
    crate://crates.io/unicode-ident/1.0.13 \
    crate://crates.io/unicode-xid/0.2.5 \
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
    crate://crates.io/uuid/1.18.1 \
    crate://crates.io/validated_struct/2.2.0 \
    crate://crates.io/validated_struct_macros/2.2.0 \
    crate://crates.io/valuable/0.1.0 \
    crate://crates.io/vec_map/0.8.2 \
    crate://crates.io/version_check/0.9.5 \
    crate://crates.io/vsock/0.4.0 \
    crate://crates.io/walkdir/2.5.0 \
    crate://crates.io/wasi/0.11.0+wasi-snapshot-preview1 \
    crate://crates.io/wasi/0.14.7+wasi-0.2.4 \
    crate://crates.io/wasip2/1.0.1+wasi-0.2.4 \
    crate://crates.io/wasm-bindgen-backend/0.2.102 \
    crate://crates.io/wasm-bindgen-macro-support/0.2.102 \
    crate://crates.io/wasm-bindgen-macro/0.2.102 \
    crate://crates.io/wasm-bindgen-shared/0.2.102 \
    crate://crates.io/wasm-bindgen/0.2.102 \
    crate://crates.io/webpki-roots/0.26.5 \
    crate://crates.io/win-sys/0.3.1 \
    crate://crates.io/winapi-i686-pc-windows-gnu/0.4.0 \
    crate://crates.io/winapi-util/0.1.9 \
    crate://crates.io/winapi-x86_64-pc-windows-gnu/0.4.0 \
    crate://crates.io/winapi/0.3.9 \
    crate://crates.io/windows-core/0.52.0 \
    crate://crates.io/windows-link/0.2.0 \
    crate://crates.io/windows-sys/0.48.0 \
    crate://crates.io/windows-sys/0.52.0 \
    crate://crates.io/windows-sys/0.59.0 \
    crate://crates.io/windows-sys/0.61.0 \
    crate://crates.io/windows-targets/0.48.5 \
    crate://crates.io/windows-targets/0.52.6 \
    crate://crates.io/windows/0.34.0 \
    crate://crates.io/windows_aarch64_gnullvm/0.48.5 \
    crate://crates.io/windows_aarch64_gnullvm/0.52.6 \
    crate://crates.io/windows_aarch64_msvc/0.34.0 \
    crate://crates.io/windows_aarch64_msvc/0.48.5 \
    crate://crates.io/windows_aarch64_msvc/0.52.6 \
    crate://crates.io/windows_i686_gnu/0.34.0 \
    crate://crates.io/windows_i686_gnu/0.48.5 \
    crate://crates.io/windows_i686_gnu/0.52.6 \
    crate://crates.io/windows_i686_gnullvm/0.52.6 \
    crate://crates.io/windows_i686_msvc/0.34.0 \
    crate://crates.io/windows_i686_msvc/0.48.5 \
    crate://crates.io/windows_i686_msvc/0.52.6 \
    crate://crates.io/windows_x86_64_gnu/0.34.0 \
    crate://crates.io/windows_x86_64_gnu/0.48.5 \
    crate://crates.io/windows_x86_64_gnu/0.52.6 \
    crate://crates.io/windows_x86_64_gnullvm/0.48.5 \
    crate://crates.io/windows_x86_64_gnullvm/0.52.6 \
    crate://crates.io/windows_x86_64_msvc/0.34.0 \
    crate://crates.io/windows_x86_64_msvc/0.48.5 \
    crate://crates.io/windows_x86_64_msvc/0.52.6 \
    crate://crates.io/winnow/0.6.18 \
    crate://crates.io/wit-bindgen/0.46.0 \
    crate://crates.io/write16/1.0.0 \
    crate://crates.io/writeable/0.5.5 \
    crate://crates.io/x509-parser/0.18.0 \
    crate://crates.io/yoke-derive/0.7.5 \
    crate://crates.io/yoke/0.7.5 \
    crate://crates.io/z-serial/0.3.1 \
    crate://crates.io/zenoh-buffers/1.6.2 \
    crate://crates.io/zenoh-codec/1.6.2 \
    crate://crates.io/zenoh-collections/1.6.2 \
    crate://crates.io/zenoh-config/1.6.2 \
    crate://crates.io/zenoh-core/1.6.2 \
    crate://crates.io/zenoh-crypto/1.6.2 \
    crate://crates.io/zenoh-ext/1.6.2 \
    crate://crates.io/zenoh-keyexpr/1.6.2 \
    crate://crates.io/zenoh-link-commons/1.6.2 \
    crate://crates.io/zenoh-link-quic/1.6.2 \
    crate://crates.io/zenoh-link-quic_datagram/1.6.2 \
    crate://crates.io/zenoh-link-serial/1.6.2 \
    crate://crates.io/zenoh-link-tcp/1.6.2 \
    crate://crates.io/zenoh-link-tls/1.6.2 \
    crate://crates.io/zenoh-link-udp/1.6.2 \
    crate://crates.io/zenoh-link-unixpipe/1.6.2 \
    crate://crates.io/zenoh-link-unixsock_stream/1.6.2 \
    crate://crates.io/zenoh-link-vsock/1.6.2 \
    crate://crates.io/zenoh-link-ws/1.6.2 \
    crate://crates.io/zenoh-link/1.6.2 \
    crate://crates.io/zenoh-macros/1.6.2 \
    crate://crates.io/zenoh-plugin-trait/1.6.2 \
    crate://crates.io/zenoh-protocol/1.6.2 \
    crate://crates.io/zenoh-result/1.6.2 \
    crate://crates.io/zenoh-runtime/1.6.2 \
    crate://crates.io/zenoh-shm/1.6.2 \
    crate://crates.io/zenoh-sync/1.6.2 \
    crate://crates.io/zenoh-task/1.6.2 \
    crate://crates.io/zenoh-transport/1.6.2 \
    crate://crates.io/zenoh-util/1.6.2 \
    crate://crates.io/zenoh/1.6.2 \
    crate://crates.io/zerocopy-derive/0.7.35 \
    crate://crates.io/zerocopy-derive/0.8.27 \
    crate://crates.io/zerocopy/0.7.35 \
    crate://crates.io/zerocopy/0.8.27 \
    crate://crates.io/zerofrom-derive/0.1.6 \
    crate://crates.io/zerofrom/0.1.5 \
    crate://crates.io/zeroize/1.8.1 \
    crate://crates.io/zerovec-derive/0.10.3 \
    crate://crates.io/zerovec/0.10.4 \
"

SRC_URI[addr2line-0.24.1.sha256sum] = "f5fb1d8e4442bd405fdfd1dacb42792696b0cf9cb15882e5d097b742a676d375"
SRC_URI[adler2-2.0.0.sha256sum] = "512761e0bb2578dd7380c6baaa0f4ce03e84f95e960231d1dec8bf4d7d6e2627"
SRC_URI[advisory-lock-0.3.0.sha256sum] = "a6caee7d48f930f9ad3fc9546f8cbf843365da0c5b0ca4eee1d1ac3dd12d8f93"
SRC_URI[aes-0.8.4.sha256sum] = "b169f7a6d4742236a0a00c541b845991d0ac43e546831af1249753ab4c3aa3a0"
SRC_URI[ahash-0.8.12.sha256sum] = "5a15f179cd60c4584b8a8c596927aadc462e27f2ca70c04e0071964a73ba7a75"
SRC_URI[aho-corasick-1.1.3.sha256sum] = "8e60d3430d3a69478ad0993f19238d2df97c507009a52b3c10addcd7f6bcb916"
SRC_URI[allocator-api2-0.2.18.sha256sum] = "5c6cb57a04249c6480766f7f7cef5467412af1490f8d1e243141daddada3264f"
SRC_URI[android-tzdata-0.1.1.sha256sum] = "e999941b234f3131b00bc13c22d06e8c5ff726d1b6318ac7eb276997bbb4fef0"
SRC_URI[android_system_properties-0.1.5.sha256sum] = "819e7219dbd41043ac279b19830f2efc897156490d7fd6ea916720117ee66311"
SRC_URI[anstream-0.6.15.sha256sum] = "64e15c1ab1f89faffbf04a634d5e1962e9074f2741eef6d97f3c4e322426d526"
SRC_URI[anstyle-1.0.8.sha256sum] = "1bec1de6f59aedf83baf9ff929c98f2ad654b97c9510f4e70cf6f661d49fd5b1"
SRC_URI[anstyle-parse-0.2.5.sha256sum] = "eb47de1e80c2b463c735db5b217a0ddc39d612e7ac9e2e96a5aed1f57616c1cb"
SRC_URI[anstyle-query-1.1.1.sha256sum] = "6d36fc52c7f6c869915e99412912f22093507da8d9e942ceaf66fe4b7c14422a"
SRC_URI[anstyle-wincon-3.0.4.sha256sum] = "5bf74e1b6e971609db8ca7a9ce79fd5768ab6ae46441c572e46cf596f59e57f8"
SRC_URI[anyhow-1.0.99.sha256sum] = "b0674a1ddeecb70197781e945de4b3b8ffb61fa939a5597bcf48503737663100"
SRC_URI[arc-swap-1.7.1.sha256sum] = "69f7f8c3906b62b754cd5326047894316021dcfe5a194c8ea52bdd94934a3457"
SRC_URI[array-init-2.1.0.sha256sum] = "3d62b7694a562cdf5a74227903507c56ab2cc8bdd1f781ed5cb4cf9c9f810bfc"
SRC_URI[asn1-rs-0.7.1.sha256sum] = "56624a96882bb8c26d61312ae18cb45868e5a9992ea73c58e45c3101e56a1e60"
SRC_URI[asn1-rs-derive-0.6.0.sha256sum] = "3109e49b1e4909e9db6515a30c633684d68cdeaa252f215214cb4fa1a5bfee2c"
SRC_URI[asn1-rs-impl-0.2.0.sha256sum] = "7b18050c2cd6fe86c3a76584ef5e0baf286d038cda203eb6223df2cc413565f7"
SRC_URI[async-trait-0.1.89.sha256sum] = "9035ad2d096bed7955a320ee7e2230574d28fd3c3a0f186cbea1ff3c7eed5dbb"
SRC_URI[autocfg-1.3.0.sha256sum] = "0c4b4d0bd25bd0b74681c0ad21497610ce1b7c91b1022cd21c80c6fbdd9476b0"
SRC_URI[backtrace-0.3.74.sha256sum] = "8d82cb332cdfaed17ae235a638438ac4d4839913cc2af585c3c6746e8f8bee1a"
SRC_URI[base64-0.22.1.sha256sum] = "72b3254f16251a8381aa12e40e3c4d2f0199f8c6508fbecb9d91f575e0fbb8c6"
SRC_URI[base64ct-1.6.0.sha256sum] = "8c3c1a368f70d6cf7302d78f8f7093da241fb8e8807c05cc9e51a125895a6d5b"
SRC_URI[bincode-1.3.3.sha256sum] = "b1f45e9417d87227c7a56d22e471c6206462cba514c7590c09aff4cf6d1ddcad"
SRC_URI[bitflags-1.3.2.sha256sum] = "bef38d45163c2f1dde094a7dfd33ccf595c92905c8f8f4fdc18d06fb1037718a"
SRC_URI[bitflags-2.6.0.sha256sum] = "b048fb63fd8b5923fc5aa7b340d8e156aec7ec02f0c78fa8a6ddc2613f6f71de"
SRC_URI[block-buffer-0.10.4.sha256sum] = "3078c7629b62d3f0439517fa394996acacc5cbc91c5a20d8c658e77abd503a71"
SRC_URI[buddy_system_allocator-0.10.0.sha256sum] = "a7913f22349ffcfc6ca0ca9a656ec26cfbba538ed49c31a273dff2c5d1ea83d9"
SRC_URI[bumpalo-3.16.0.sha256sum] = "79296716171880943b8470b5f8d03aa55eb2e645a4874bdbb28adb49162e012c"
SRC_URI[byteorder-1.5.0.sha256sum] = "1fd0f2584146f6f2ef48085050886acf353beff7305ebd1ae69500e27c67f64b"
SRC_URI[bytes-1.10.1.sha256sum] = "d71b6127be86fdcfddb610f7182ac57211d4b18a3e9c82eb2d17662f2227ad6a"
SRC_URI[cbindgen-0.29.0.sha256sum] = "975982cdb7ad6a142be15bdf84aea7ec6a9e5d4d797c004d43185b24cfe4e684"
SRC_URI[cc-1.2.16.sha256sum] = "be714c154be609ec7f5dad223a33bf1482fff90472de28f7362806e6d4832b8c"
SRC_URI[cesu8-1.1.0.sha256sum] = "6d43a04d8753f35258c91f8ec639f792891f748a1edbd759cf1dcea3382ad83c"
SRC_URI[cfg-if-1.0.1.sha256sum] = "9555578bc9e57714c812a1f84e4fc5b4d21fcb063490c624de019f7464c91268"
SRC_URI[cfg_aliases-0.1.1.sha256sum] = "fd16c4719339c4530435d38e511904438d07cce7950afa3718a84ac36c10e89e"
SRC_URI[cfg_aliases-0.2.1.sha256sum] = "613afe47fcd5fac7ccf1db93babcb082c5994d996f20b8b159f2ad1658eb5724"
SRC_URI[chrono-0.4.38.sha256sum] = "a21f936df1771bf62b77f047b726c4625ff2e8aa607c01ec06e5a05bd8463401"
SRC_URI[cipher-0.4.4.sha256sum] = "773f3b9af64447d2ce9850330c473515014aa235e6a783b02db81ff39e4a3dad"
SRC_URI[clap-4.5.47.sha256sum] = "7eac00902d9d136acd712710d71823fb8ac8004ca445a89e73a41d45aa712931"
SRC_URI[clap_builder-4.5.47.sha256sum] = "2ad9bbf750e73b5884fb8a211a9424a1906c1e156724260fdae972f31d70e1d6"
SRC_URI[clap_lex-0.7.5.sha256sum] = "b94f61472cee1439c0b966b47e3aca9ae07e45d070759512cd390ea2bebc6675"
SRC_URI[cobs-0.2.3.sha256sum] = "67ba02a97a2bd10f4b59b25c7973101c79642302776489e030cd13cdab09ed15"
SRC_URI[colorchoice-1.0.2.sha256sum] = "d3fd119d74b830634cea2a0f58bbd0d54540518a14397557951e79340abc28c0"
SRC_URI[combine-4.6.7.sha256sum] = "ba5a308b75df32fe02788e748662718f03fde005016435c444eea572398219fd"
SRC_URI[concurrent-queue-2.5.0.sha256sum] = "4ca0197aee26d1ae37445ee532fefce43251d24cc7c166799f4d46817f1d3973"
SRC_URI[const-oid-0.9.6.sha256sum] = "c2459377285ad874054d797f3ccebf984978aa39129f6eafde5cdc8315b612f8"
SRC_URI[const_format-0.2.34.sha256sum] = "126f97965c8ad46d6d9163268ff28432e8f6a1196a55578867832e3049df63dd"
SRC_URI[const_format_proc_macros-0.2.34.sha256sum] = "1d57c2eccfb16dbac1f4e61e206105db5820c9d26c3c472bc17c774259ef7744"
SRC_URI[core-foundation-0.9.4.sha256sum] = "91e195e091a93c46f7102ec7818a2aa394e1e1771c3ab4825963fa03e45afb8f"
SRC_URI[core-foundation-sys-0.8.7.sha256sum] = "773648b94d0e5d620f64f280777445740e61fe701025087ec8b57f45c791888b"
SRC_URI[cpufeatures-0.2.14.sha256sum] = "608697df725056feaccfa42cffdaeeec3fccc4ffc38358ecd19b243e716a78e0"
SRC_URI[crossbeam-0.8.4.sha256sum] = "1137cd7e7fc0fb5d3c5a8678be38ec56e819125d8d7907411fe24ccb943faca8"
SRC_URI[crossbeam-channel-0.5.15.sha256sum] = "82b8f8f868b36967f9606790d1903570de9ceaf870a7bf9fbbd3016d636a2cb2"
SRC_URI[crossbeam-deque-0.8.5.sha256sum] = "613f8cc01fe9cf1a3eb3d7f488fd2fa8388403e97039e2f73692932e291a770d"
SRC_URI[crossbeam-epoch-0.9.18.sha256sum] = "5b82ac4a3c2ca9c3460964f020e1402edd5753411d7737aa39c3714ad1b5420e"
SRC_URI[crossbeam-queue-0.3.12.sha256sum] = "0f58bbc28f91df819d0aa2a2c00cd19754769c2fad90579b3592b1c9ba7a3115"
SRC_URI[crossbeam-utils-0.8.21.sha256sum] = "d0a5c400df2834b80a4c3327b3aad3a4c4cd4de0629063962b03235697506a28"
SRC_URI[crypto-common-0.1.6.sha256sum] = "1bfb12502f3fc46cca1bb51ac28df9d618d813cdc3d2f25b9fe775a34af26bb3"
SRC_URI[ctor-0.4.3.sha256sum] = "ec09e802f5081de6157da9a75701d6c713d8dc3ba52571fd4bd25f412644e8a6"
SRC_URI[ctor-proc-macro-0.0.6.sha256sum] = "e2931af7e13dc045d8e9d26afccc6fa115d64e115c9c84b1166288b46f6782c2"
SRC_URI[darling-0.21.3.sha256sum] = "9cdf337090841a411e2a7f3deb9187445851f91b309c0c0a29e05f74a00a48c0"
SRC_URI[darling_core-0.21.3.sha256sum] = "1247195ecd7e3c85f83c8d2a366e4210d588e802133e1e355180a9870b517ea4"
SRC_URI[darling_macro-0.21.3.sha256sum] = "d38308df82d1080de0afee5d069fa14b0326a88c14f15c5ccda35b4a6c414c81"
SRC_URI[data-encoding-2.6.0.sha256sum] = "e8566979429cf69b49a5c740c60791108e86440e8be149bbea4fe54d2c32d6e2"
SRC_URI[der-0.7.9.sha256sum] = "f55bf8e7b65898637379c1b74eb1551107c8294ed26d855ceb9fd1a09cfc9bc0"
SRC_URI[der-parser-10.0.0.sha256sum] = "07da5016415d5a3c4dd39b11ed26f915f52fc4e0dc197d87908bc916e51bc1a6"
SRC_URI[deranged-0.4.0.sha256sum] = "9c9e6a11ca8224451684bc0d7d5a7adbf8f2fd6887261a1cfc3c0432f9d4068e"
SRC_URI[digest-0.10.7.sha256sum] = "9ed9a281f7bc9b7576e61468ba615a66a5c8cfdff42420a70aa82701a3b1e292"
SRC_URI[dirs-5.0.1.sha256sum] = "44c45a9d03d6676652bcb5e724c7e988de1acad23a711b5217ab9cbecbec2225"
SRC_URI[dirs-sys-0.4.1.sha256sum] = "520f05a5cbd335fae5a99ff7a6ab8627577660ee5cfd6a94a6a929b52ff0321c"
SRC_URI[displaydoc-0.2.5.sha256sum] = "97369cbbc041bc366949bc74d34658d6cda5621039731c6310521892a3a20ae0"
SRC_URI[dtor-0.0.6.sha256sum] = "97cbdf2ad6846025e8e25df05171abfb30e3ababa12ee0a0e44b9bbe570633a8"
SRC_URI[dtor-proc-macro-0.0.5.sha256sum] = "7454e41ff9012c00d53cf7f475c5e3afa3b91b7c90568495495e8d9bf47a1055"
SRC_URI[dyn-clone-1.0.17.sha256sum] = "0d6ef0072f8a535281e4876be788938b528e9a1d43900b82c2569af7da799125"
SRC_URI[either-1.15.0.sha256sum] = "48c757948c5ede0e46177b7add2e67155f70e33c07fea8284df6576da70b3719"
SRC_URI[equivalent-1.0.1.sha256sum] = "5443807d6dff69373d433ab9ef5378ad8df50ca6298caf15de6e52e24aaf54d5"
SRC_URI[errno-0.2.8.sha256sum] = "f639046355ee4f37944e44f60642c6f3a7efa3cf6b78c78a0d989a8ce6c396a1"
SRC_URI[errno-0.3.9.sha256sum] = "534c5cf6194dfab3db3242765c03bbe257cf92f22b38f6bc0c58d59108a820ba"
SRC_URI[errno-dragonfly-0.1.2.sha256sum] = "aa68f1b12764fab894d2755d2518754e71b4fd80ecfb822714a1206c2aab39bf"
SRC_URI[evalexpr-11.3.1.sha256sum] = "b6aff27af350e7b53e82aac3e5ab6389abd8f280640ac034508dff0608c4c7e5"
SRC_URI[event-listener-5.4.1.sha256sum] = "e13b66accf52311f30a0db42147dadea9850cb48cd070028831ae5f5d4b856ab"
SRC_URI[fastrand-2.1.1.sha256sum] = "e8c02a5121d4ea3eb16a80748c74f5549a5665e4c21333c6098f283870fbdea6"
SRC_URI[filepath-0.1.2.sha256sum] = "f7faa16fcec147281a1719947edb44af4f9124964bf7476bd5f5356a48e44dcc"
SRC_URI[fixedbitset-0.5.7.sha256sum] = "1d674e81391d1e1ab681a28d99df07927c6d4aa5b027d7da16ba32d1d21ecd99"
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
SRC_URI[getrandom-0.2.15.sha256sum] = "c4567c8db10ae91089c99af84c68c38da3ec2f087c3f82960bcdbf3656b6f4d7"
SRC_URI[getrandom-0.3.3.sha256sum] = "26145e563e54f2cadc477553f1ec5ee650b00862f0a58bcd12cbdc5f0ea2d2f4"
SRC_URI[gimli-0.31.0.sha256sum] = "32085ea23f3234fc7846555e85283ba4de91e21016dc0455a16286d87a292d64"
SRC_URI[git-version-0.3.9.sha256sum] = "1ad568aa3db0fcbc81f2f116137f263d7304f512a1209b35b85150d3ef88ad19"
SRC_URI[git-version-macro-0.3.9.sha256sum] = "53010ccb100b96a67bc32c0175f0ed1426b31b655d562898e57325f81c023ac0"
SRC_URI[hashbrown-0.12.3.sha256sum] = "8a9ee70c43aaf417c914396645a0fa852624801b24ebb7ae78fe8272889ac888"
SRC_URI[hashbrown-0.14.5.sha256sum] = "e5274423e17b7c9fc20b6e7e208532f9b19825d82dfd615708b70edd83df41f1"
SRC_URI[hashbrown-0.15.5.sha256sum] = "9229cfe53dfd69f0609a49f65461bd93001ea1ef889cd5529dd176593f5338a1"
SRC_URI[hashbrown-0.16.0.sha256sum] = "5419bdc4f6a9207fbeba6d11b604d481addf78ecd10c11ad51e76c2f6482748d"
SRC_URI[heck-0.5.0.sha256sum] = "2304e00983f87ffb38b55b444b5e3b60a884b5d30c0fca7d82fe33449bbe55ea"
SRC_URI[hermit-abi-0.3.9.sha256sum] = "d231dfb89cfffdbc30e7fc41579ed6066ad03abda9e567ccafae602b97ec5024"
SRC_URI[hermit-abi-0.5.2.sha256sum] = "fc0fef456e4baa96da950455cd02c081ca953b141298e41db3fc7e36b1da849c"
SRC_URI[hex-0.4.3.sha256sum] = "7f24254aa9a54b5c858eaee2f5bccdb46aaf0e486a595ed5fd8f86ba55232a70"
SRC_URI[hmac-0.12.1.sha256sum] = "6c49c37c09c17a53d937dfbb742eb3a961d65a994e6bcdcf37e7399d0cc8ab5e"
SRC_URI[home-0.5.9.sha256sum] = "e3d1354bf6b7235cb4a0576c2619fd4ed18183f689b12b006a0ee7329eeff9a5"
SRC_URI[http-1.1.0.sha256sum] = "21b9ddb458710bc376481b842f5da65cdf31522de232c1ca8146abce2a358258"
SRC_URI[httparse-1.9.4.sha256sum] = "0fcc0b4a115bf80b728eb8ea024ad5bd707b615bfed49e0665b6e0f86fd082d9"
SRC_URI[humantime-2.3.0.sha256sum] = "135b12329e5e3ce057a9f972339ea52bc954fe1e9358ef27f95e89716fbc5424"
SRC_URI[iana-time-zone-0.1.60.sha256sum] = "e7ffbb5a1b541ea2561f8c41c087286cc091e21e556a4f09a8f6cbf17b69b141"
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
SRC_URI[indexmap-2.5.0.sha256sum] = "68b900aa2f7301e21c36462b170ee99994de34dff39a4a6a528e80e7376d07e5"
SRC_URI[inout-0.1.3.sha256sum] = "a0c10553d664a4d0bcff9f4215d0aac67a639cc68ef660840afe309b807bc9f5"
SRC_URI[instant-0.1.13.sha256sum] = "e0242819d153cba4b4b05a5a8f2a7e9bbf97b6055b2a002b395c96b5ff3c0222"
SRC_URI[io-kit-sys-0.4.1.sha256sum] = "617ee6cf8e3f66f3b4ea67a4058564628cde41901316e19f559e14c7c72c5e7b"
SRC_URI[io-uring-0.7.10.sha256sum] = "046fa2d4d00aea763528b4950358d0ead425372445dc8ff86312b3c69ff7727b"
SRC_URI[ipnetwork-0.20.0.sha256sum] = "bf466541e9d546596ee94f9f69590f89473455f88372423e0008fc1a7daf100e"
SRC_URI[is_terminal_polyfill-1.70.1.sha256sum] = "7943c866cc5cd64cbc25b2e01621d07fa8eb2a1a23160ee81ce38704e97b8ecf"
SRC_URI[itertools-0.14.0.sha256sum] = "2b192c782037fadd9cfa75548310488aabdbf3d2da73885b31bd0abd03351285"
SRC_URI[itoa-1.0.11.sha256sum] = "49f1f14873335454500d59611f1cf4a4b0f786f9ac11f4312a78e4cf2566695b"
SRC_URI[jni-0.19.0.sha256sum] = "c6df18c2e3db7e453d3c6ac5b3e9d5182664d28788126d39b91f2d1e22b017ec"
SRC_URI[jni-sys-0.3.0.sha256sum] = "8eaf4bc02d17cbdd7ff4c7438cafcdf7fb9a4613313ad11b4f8fefe7d3fa0130"
SRC_URI[js-sys-0.3.79.sha256sum] = "6247da8b8658ad4e73a186e747fcc5fc2a29f979d6fe6269127fdb5fd08298d0"
SRC_URI[json5-0.4.1.sha256sum] = "96b0db21af676c1ce64250b5f40f3ce2cf27e4e47cb91ed91eb6fe9350b430c1"
SRC_URI[keccak-0.1.5.sha256sum] = "ecc2af9a1119c51f12a14607e783cb977bde58bc069ff0c3da1095e635d70654"
SRC_URI[keyed-set-1.1.0.sha256sum] = "89d255a6b6ecd77bb93ce91de984d7039bff7503f500eb4851a1269732f22baf"
SRC_URI[lazy_static-1.5.0.sha256sum] = "bbd2bcb4c963f2ddae06a2efc7e9f3591312473c50c6685e1f298068316e66fe"
SRC_URI[leb128-0.2.5.sha256sum] = "884e2677b40cc8c339eaefcb701c32ef1fd2493d71118dc0ca4b6a736c93bd67"
SRC_URI[libc-0.2.175.sha256sum] = "6a82ae493e598baaea5209805c49bbf2ea7de956d50d7da0da1164f9c6d28543"
SRC_URI[libloading-0.8.8.sha256sum] = "07033963ba89ebaf1584d767badaa2e8fcec21aedea6b8c0346d487d49c28667"
SRC_URI[libm-0.2.8.sha256sum] = "4ec2a862134d2a7d32d7983ddcdd1c4923530833c9f2ea1a44fc5fa473989058"
SRC_URI[libredox-0.1.3.sha256sum] = "c0ff37bd590ca25063e35af745c343cb7a0271906fb7b37e4813e8f79f00268d"
SRC_URI[linux-raw-sys-0.4.14.sha256sum] = "78b3ae25bc7c8c38cec158d1f2757ee79e9b3740fbc7ccf0e59e4b08d793fa89"
SRC_URI[litemap-0.7.4.sha256sum] = "4ee93343901ab17bd981295f2cf0026d4ad018c7c31ba84549a4ddbb47a45104"
SRC_URI[lock_api-0.4.12.sha256sum] = "07af8b9cdd281b7915f413fa73f29ebd5d55d0d3f0155584dade1ff18cea1b17"
SRC_URI[log-0.4.22.sha256sum] = "a7a70ba024b9dc04c27ea2f0c0548feb474ec5c54bba33a7f72f873a39d07b24"
SRC_URI[lz4_flex-0.11.3.sha256sum] = "75761162ae2b0e580d7e7c390558127e5f01b4194debd6221fd8c207fc80e3f5"
SRC_URI[mach2-0.4.2.sha256sum] = "19b955cdeb2a02b9117f121ce63aa52d08ade45de53e48fe6a38b39c10f6f709"
SRC_URI[matchers-0.1.0.sha256sum] = "8263075bb86c5a1b1427b5ae862e8889656f126e9f77c484496e8b47cf5c5558"
SRC_URI[memchr-2.7.4.sha256sum] = "78ca9ab1a0babb1e7d5695e3530886289c18cf2f87ec19a575a0abdce112e3a3"
SRC_URI[memoffset-0.7.1.sha256sum] = "5de893c32cde5f383baa4c04c5d6dbdd735cfd4a794b0debdb2bb1b421da5ff4"
SRC_URI[memoffset-0.9.1.sha256sum] = "488016bfae457b036d996092f6cb448677611ce4449e970ceaf42695203f218a"
SRC_URI[minimal-lexical-0.2.1.sha256sum] = "68354c5c6bd36d73ff3feceb05efa59b6acb7626617f4962be322a825e61f79a"
SRC_URI[miniz_oxide-0.8.0.sha256sum] = "e2d80299ef12ff69b16a84bb182e3b9df68b5a91574d3d4fa6e41b65deec4df1"
SRC_URI[mio-0.8.11.sha256sum] = "a4a650543ca06a924e8b371db273b2756685faae30f8487da1b56505a8f78b0c"
SRC_URI[mio-1.0.2.sha256sum] = "80e04d1dcff3aae0704555fe5fee3bcfaf3d1fdf8a7e521d5b9d2b42acb52cec"
SRC_URI[mio-serial-5.0.5.sha256sum] = "20a4c60ca5c9c0e114b3bd66ff4aa5f9b2b175442be51ca6c4365d687a97a2ac"
SRC_URI[nanorand-0.7.0.sha256sum] = "6a51313c5820b0b02bd422f4b44776fbf47961755c74ce64afc73bfad10226c3"
SRC_URI[nix-0.26.4.sha256sum] = "598beaf3cc6fdd9a5dfb1630c2800c7acd31df7aaf0f565796fba2b53ca1af1b"
SRC_URI[nix-0.27.1.sha256sum] = "2eb04e9c688eff1c89d72b407f168cf79bb9e867a9d3323ed6c01519eb9cc053"
SRC_URI[nix-0.29.0.sha256sum] = "71e2746dc3a24dd78b3cfcb7be93368c6de9963d30f43a6a73998a9cf4b17b46"
SRC_URI[no-std-net-0.6.0.sha256sum] = "43794a0ace135be66a25d3ae77d41b91615fb68ae937f904090203e81f755b65"
SRC_URI[nom-7.1.3.sha256sum] = "d273983c5a657a70a3e8f2a01329822f3b8c8172b73826411a55751e404a0a4a"
SRC_URI[nonempty-collections-0.3.0.sha256sum] = "b7f301452dbaf00f14ca0c8204e46cf0c9a96f53543ac72cefa9b4d91c19e0ac"
SRC_URI[nu-ansi-term-0.46.0.sha256sum] = "77a8165726e8236064dbb45459242600304b42a5ea24ee2948e18e023bf7ba84"
SRC_URI[num-bigint-0.4.6.sha256sum] = "a5e44f723f1133c9deac646763579fdb3ac745e418f2a7af9cd0c431da1f20b9"
SRC_URI[num-bigint-dig-0.8.4.sha256sum] = "dc84195820f291c7697304f3cbdadd1cb7199c0efc917ff5eafd71225c136151"
SRC_URI[num-conv-0.1.0.sha256sum] = "51d515d32fb182ee37cda2ccdcb92950d6a3c2893aa280e540671c2cd0f3b1d9"
SRC_URI[num-integer-0.1.46.sha256sum] = "7969661fd2958a5cb096e56c8e1ad0444ac2bbcd0061bd28660485a44879858f"
SRC_URI[num-iter-0.1.45.sha256sum] = "1429034a0490724d0075ebb2bc9e875d6503c3cf69e235a8941aa757d83ef5bf"
SRC_URI[num-traits-0.2.19.sha256sum] = "071dfc062690e90b734c0b2273ce72ad0ffa95f0c74596bc250dcfd960262841"
SRC_URI[num_cpus-1.17.0.sha256sum] = "91df4bbde75afed763b708b7eee1e8e7651e02d97f6d5dd763e89367e957b23b"
SRC_URI[object-0.36.4.sha256sum] = "084f1a5821ac4c651660a94a7153d27ac9d8a53736203f58b31945ded098070a"
SRC_URI[oid-registry-0.8.1.sha256sum] = "12f40cff3dde1b6087cc5d5f5d4d65712f34016a03ed60e9c08dcc392736b5b7"
SRC_URI[once_cell-1.21.3.sha256sum] = "42f5e15c9953c5e4ccceeb2e7382a716482c34515315f7b03532b8b4e8393d2d"
SRC_URI[openssl-probe-0.1.5.sha256sum] = "ff011a302c396a5197692431fc1948019154afc178baf7d8e37367442a4601cf"
SRC_URI[option-ext-0.2.0.sha256sum] = "04744f49eae99ab78e0d5c0b603ab218f515ea8cfe5a456d7629ad883a3b6e7d"
SRC_URI[overload-0.1.1.sha256sum] = "b15813163c1d831bf4a13c3610c05c0d03b39feb07f7e09fa234dac9b15aaf39"
SRC_URI[parking-2.2.1.sha256sum] = "f38d5652c16fde515bb1ecef450ab0f6a219d619a7274976324d5e377f7dceba"
SRC_URI[parking_lot-0.11.2.sha256sum] = "7d17b78036a60663b797adeaee46f5c9dfebb86948d1255007a1d6be0271ff99"
SRC_URI[parking_lot_core-0.8.6.sha256sum] = "60a2cfe6f0ad2bfc16aefa463b497d5c7a5ecd44a23efa72aa342d90177356dc"
SRC_URI[paste-1.0.15.sha256sum] = "57c0d7b74b563b49d38dae00a0c37d4d6de9b432382b2892f0574ddcae73fd0a"
SRC_URI[pem-rfc7468-0.7.0.sha256sum] = "88b39c9bfcfc231068454382784bb460aae594343fb030d46e9f50a645418412"
SRC_URI[percent-encoding-2.3.2.sha256sum] = "9b4f627cb1b25917193a259e49bdad08f671f8d9708acfd5fe0a8c1455d87220"
SRC_URI[pest-2.8.0.sha256sum] = "198db74531d58c70a361c42201efde7e2591e976d518caf7662a47dc5720e7b6"
SRC_URI[pest_derive-2.8.0.sha256sum] = "d725d9cfd79e87dccc9341a2ef39d1b6f6353d68c4b33c177febbe1a402c97c5"
SRC_URI[pest_generator-2.8.0.sha256sum] = "db7d01726be8ab66ab32f9df467ae8b1148906685bbe75c82d1e65d7f5b3f841"
SRC_URI[pest_meta-2.8.0.sha256sum] = "7f9f832470494906d1fca5329f8ab5791cc60beb230c74815dff541cbd2b5ca0"
SRC_URI[petgraph-0.8.2.sha256sum] = "54acf3a685220b533e437e264e4d932cfbdc4cc7ec0cd232ed73c08d03b8a7ca"
SRC_URI[phf-0.11.3.sha256sum] = "1fd6780a80ae0c52cc120a26a1a42c1ae51b247a253e4e06113d23d2c2edd078"
SRC_URI[phf-0.13.1.sha256sum] = "c1562dc717473dbaa4c1f85a36410e03c047b2e7df7f45ee938fbef64ae7fadf"
SRC_URI[phf_generator-0.11.3.sha256sum] = "3c80231409c20246a13fddb31776fb942c38553c51e871f8cbd687a4cfb5843d"
SRC_URI[phf_generator-0.13.1.sha256sum] = "135ace3a761e564ec88c03a77317a7c6b80bb7f7135ef2544dbe054243b89737"
SRC_URI[phf_macros-0.11.3.sha256sum] = "f84ac04429c13a7ff43785d75ad27569f2951ce0ffd30a3321230db2fc727216"
SRC_URI[phf_macros-0.13.1.sha256sum] = "812f032b54b1e759ccd5f8b6677695d5268c588701effba24601f6932f8269ef"
SRC_URI[phf_shared-0.11.3.sha256sum] = "67eabc2ef2a60eb7faa00097bd1ffdb5bd28e62bf39990626a582201b7a754e5"
SRC_URI[phf_shared-0.13.1.sha256sum] = "e57fef6bc5981e38c2ce2d63bfa546861309f875b8a75f092d1d54ae2d64f266"
SRC_URI[pin-project-lite-0.2.14.sha256sum] = "bda66fc9667c18cb2758a2ac84d1167245054bcf85d5d1aaa6923f45801bdd02"
SRC_URI[pin-utils-0.1.0.sha256sum] = "8b870d8c151b6f2fb93e84a13146138f05d02ed11c7e7c54f8826aaaf7c9f184"
SRC_URI[pkcs1-0.7.5.sha256sum] = "c8ffb9f10fa047879315e6625af03c164b16962a5368d724ed16323b68ace47f"
SRC_URI[pkcs8-0.10.2.sha256sum] = "f950b2377845cebe5cf8b5165cb3cc1a5e0fa5cfa3e1f7f55707d8fd82e0a7b7"
SRC_URI[pnet_base-0.35.0.sha256sum] = "ffc190d4067df16af3aba49b3b74c469e611cad6314676eaf1157f31aa0fb2f7"
SRC_URI[pnet_datalink-0.35.0.sha256sum] = "e79e70ec0be163102a332e1d2d5586d362ad76b01cec86f830241f2b6452a7b7"
SRC_URI[pnet_sys-0.35.0.sha256sum] = "7d4643d3d4db6b08741050c2f3afa9a892c4244c085a72fcda93c9c2c9a00f4b"
SRC_URI[powerfmt-0.2.0.sha256sum] = "439ee305def115ba05938db6eb1644ff94165c5ab5e9420d1c1bcedbba909391"
SRC_URI[ppv-lite86-0.2.20.sha256sum] = "77957b295656769bb8ad2b6a6b09d897d94f05c41b069aede1fcdaa675eaea04"
SRC_URI[proc-macro-crate-3.2.0.sha256sum] = "8ecf48c7ca261d60b74ab1a7b20da18bede46776b2e55535cb958eb595c5fa7b"
SRC_URI[proc-macro2-1.0.101.sha256sum] = "89ae43fd86e4158d6db51ad8e2b80f313af9cc74f5c0e03ccb87de09998732de"
SRC_URI[quinn-0.11.5.sha256sum] = "8c7c5fdde3cdae7203427dc4f0a68fe0ed09833edc525a03456b153b79828684"
SRC_URI[quinn-proto-0.11.8.sha256sum] = "fadfaed2cd7f389d0161bb73eeb07b7b78f8691047a6f3e73caaeae55310a4a6"
SRC_URI[quinn-udp-0.5.5.sha256sum] = "4fe68c2e9e1a1234e218683dbdf9f9dfcb094113c5ac2b938dfcb9bab4c4140b"
SRC_URI[quote-1.0.40.sha256sum] = "1885c039570dc00dcb4ff087a89e185fd56bae234ddc7f056a945bf36467248d"
SRC_URI[r-efi-5.3.0.sha256sum] = "69cdb34c158ceb288df11e18b4bd39de994f6657d83847bdffdbd7f346754b0f"
SRC_URI[rand-0.8.5.sha256sum] = "34af8d1a0e25924bc5b7c43c079c942339d8f0a8b57c39049bef581b46327404"
SRC_URI[rand-0.9.2.sha256sum] = "6db2770f06117d490610c7488547d543617b21bfa07796d7a12f6f1bd53850d1"
SRC_URI[rand_chacha-0.3.1.sha256sum] = "e6c10a63a0fa32252be49d21e7709d4d4baf8d231c2dbce1eaa8141b9b127d88"
SRC_URI[rand_chacha-0.9.0.sha256sum] = "d3022b5f1df60f26e1ffddd6c66e8aa15de382ae63b3a0c1bfc0e4d3e3f325cb"
SRC_URI[rand_core-0.6.4.sha256sum] = "ec0be4795e2f6a28069bec0b5ff3e2ac9bafc99e6a9a7dc3547996c5c816922c"
SRC_URI[rand_core-0.9.3.sha256sum] = "99d9a13982dcf210057a8a78572b2217b667c3beacbf3a0d8b454f6f82837d38"
SRC_URI[redox_syscall-0.2.16.sha256sum] = "fb5a58c1855b4b6819d59012155603f0b22ad30cad752600aadfcb695265519a"
SRC_URI[redox_users-0.4.6.sha256sum] = "ba009ff324d1fc1b900bd1fdb31564febe58a8ccc8a6fdbb93b543d33b13ca43"
SRC_URI[ref-cast-1.0.24.sha256sum] = "4a0ae411dbe946a674d89546582cea4ba2bb8defac896622d6496f14c23ba5cf"
SRC_URI[ref-cast-impl-1.0.24.sha256sum] = "1165225c21bff1f3bbce98f5a1f889949bc902d3575308cc7b0de30b4f6d27c7"
SRC_URI[regex-1.11.2.sha256sum] = "23d7fd106d8c02486a8d64e778353d1cffe08ce79ac2e82f540c86d0facf6912"
SRC_URI[regex-automata-0.1.10.sha256sum] = "6c230d73fb8d8c1b9c0b3135c5142a8acee3a0558fb8db5cf1cb65f8d7862132"
SRC_URI[regex-automata-0.4.10.sha256sum] = "6b9458fa0bfeeac22b5ca447c63aaf45f28439a709ccd244698632f9aa6394d6"
SRC_URI[regex-syntax-0.6.29.sha256sum] = "f162c6dd7b008981e4d40210aca20b4bd0f9b60ca9271061b07f78537722f2e1"
SRC_URI[regex-syntax-0.8.6.sha256sum] = "caf4aa5b0f434c91fe5c7f1ecb6a5ece2130b02ad2a590589dda5146df959001"
SRC_URI[ring-0.17.13.sha256sum] = "70ac5d832aa16abd7d1def883a8545280c20a60f523a370aa3a9617c2b8550ee"
SRC_URI[ringbuffer-spsc-0.1.15.sha256sum] = "8d3e7aa0a681b232e7cd7f856a53b10603df88ca74b79a8d8088845185492e35"
SRC_URI[ron-0.11.0.sha256sum] = "db09040cc89e461f1a265139777a2bde7f8d8c67c4936f700c63ce3e2904d468"
SRC_URI[rsa-0.9.8.sha256sum] = "78928ac1ed176a5ca1d17e578a1825f3d81ca54cf41053a592584b020cfd691b"
SRC_URI[rustc-demangle-0.1.24.sha256sum] = "719b953e2095829ee67db738b3bfa9fa368c94900df327b3f07fe6e794d2fe1f"
SRC_URI[rustc-hash-2.0.0.sha256sum] = "583034fd73374156e66797ed8e5b0d5690409c9226b22d87cb7f19821c05d152"
SRC_URI[rustc_version-0.4.1.sha256sum] = "cfcb3a22ef46e85b45de6ee7e79d063319ebb6594faafcf1c225ea92ab6e9b92"
SRC_URI[rusticata-macros-4.1.0.sha256sum] = "faf0c4a6ece9950b9abdb62b1cfcf2a68b3b67a10ba445b3bb85be2a293d0632"
SRC_URI[rustix-0.38.37.sha256sum] = "8acb788b847c24f28525660c4d7758620a7210875711f79e7f663cc152726811"
SRC_URI[rustls-0.23.31.sha256sum] = "c0ebcbd2f03de0fc1122ad9bb24b127a5a6cd51d72604a3f3c50ac459762b6cc"
SRC_URI[rustls-native-certs-0.7.3.sha256sum] = "e5bfb394eeed242e909609f56089eecfe5fda225042e8b171791b9c95f5931e5"
SRC_URI[rustls-pemfile-2.2.0.sha256sum] = "dce314e5fee3f39953d46bb63bb8a46d40c2f8fb7cc5a3b6cab2bde9721d6e50"
SRC_URI[rustls-pki-types-1.12.0.sha256sum] = "229a4a4c221013e7e1f1a043678c5cc39fe5171437c88fb47151a21e6f5b5c79"
SRC_URI[rustls-platform-verifier-0.3.4.sha256sum] = "afbb878bdfdf63a336a5e63561b1835e7a8c91524f51621db870169eac84b490"
SRC_URI[rustls-platform-verifier-android-0.1.1.sha256sum] = "f87165f0995f63a9fbeea62b64d10b4d9d8e78ec6d7d51fb2125fda7bb36788f"
SRC_URI[rustls-webpki-0.102.8.sha256sum] = "64ca1bc8749bd4cf37b5ce386cc146580777b4e8572c7b97baf22c83f444bee9"
SRC_URI[rustls-webpki-0.103.6.sha256sum] = "8572f3c2cb9934231157b45499fc41e1f58c589fdfb81a844ba873265e80f8eb"
SRC_URI[rustversion-1.0.17.sha256sum] = "955d28af4278de8121b7ebeb796b6a45735dc01436d898801014aced2773a3d6"
SRC_URI[ryu-1.0.18.sha256sum] = "f3cb5ba0dc43242ce17de99c180e96db90b235b8a9fdc9543c96d2209116bd9f"
SRC_URI[same-file-1.0.6.sha256sum] = "93fc1dc3aaa9bfed95e02e6eadabb4baf7e3078b0bd1b4d7b6b0b68378900502"
SRC_URI[schannel-0.1.24.sha256sum] = "e9aaafd5a2b6e3d657ff009d82fbd630b6bd54dd4eb06f21693925cdf80f9b8b"
SRC_URI[schemars-0.8.21.sha256sum] = "09c024468a378b7e36765cd36702b7a90cc3cba11654f6685c8f233408e89e92"
SRC_URI[schemars-0.9.0.sha256sum] = "4cd191f9397d57d581cddd31014772520aa448f65ef991055d7f61582c65165f"
SRC_URI[schemars-1.0.4.sha256sum] = "82d20c4491bc164fa2f6c5d44565947a52ad80b9505d8e36f8d54c27c739fcd0"
SRC_URI[schemars_derive-0.8.21.sha256sum] = "b1eee588578aff73f856ab961cd2f79e36bc45d7ded33a7562adba4667aecc0e"
SRC_URI[scopeguard-1.2.0.sha256sum] = "94143f37725109f92c262ed2cf5e59bce7498c01bcc1502d7b9afe439a4e9f49"
SRC_URI[secrecy-0.8.0.sha256sum] = "9bd1c54ea06cfd2f6b63219704de0b9b4f72dcc2b8fdef820be6cd799780e91e"
SRC_URI[security-framework-2.11.1.sha256sum] = "897b2245f0b511c87893af39b033e5ca9cce68824c4d7e7630b5a1d339658d02"
SRC_URI[security-framework-sys-2.15.0.sha256sum] = "cc1f0cbffaac4852523ce30d8bd3c5cdc873501d96ff467ca09b6767bb8cd5c0"
SRC_URI[semver-1.0.23.sha256sum] = "61697e0a1c7e512e84a621326239844a24d8207b4669b41bc18b32ea5cbf988b"
SRC_URI[serde-1.0.225.sha256sum] = "fd6c24dee235d0da097043389623fb913daddf92c76e9f5a1db88607a0bcbd1d"
SRC_URI[serde_core-1.0.225.sha256sum] = "659356f9a0cb1e529b24c01e43ad2bdf520ec4ceaf83047b83ddcc2251f96383"
SRC_URI[serde_derive-1.0.225.sha256sum] = "0ea936adf78b1f766949a4977b91d2f5595825bd6ec079aa9543ad2685fc4516"
SRC_URI[serde_derive_internals-0.29.1.sha256sum] = "18d26a20a969b9e3fdf2fc2d9f21eda6c40e2de84c9408bb5d3b05d499aae711"
SRC_URI[serde_json-1.0.145.sha256sum] = "402a6f66d8c709116cf22f558eab210f5a50187f702eb4d7e5ef38d9a7f1c79c"
SRC_URI[serde_spanned-0.6.9.sha256sum] = "bf41e0cfaf7226dca15e8197172c295a782857fcb97fad1808a166870dee75a3"
SRC_URI[serde_with-3.14.1.sha256sum] = "c522100790450cf78eeac1507263d0a350d4d5b30df0c8e1fe051a10c22b376e"
SRC_URI[serde_with_macros-3.14.1.sha256sum] = "327ada00f7d64abaac1e55a6911e90cf665aa051b9a561c7006c157f4633135e"
SRC_URI[serde_yaml-0.9.34+deprecated.sha256sum] = "6a8b1a1a2ebf674015cc02edccce75287f1a0130d394307b36743c2f5d504b47"
SRC_URI[serialport-4.5.0.sha256sum] = "241ebb629ed9bf598b2b392ba42aa429f9ef2a0099001246a36ac4c084ee183f"
SRC_URI[sha1-0.10.6.sha256sum] = "e3bf829a2d51ab4a5ddf1352d8470c140cadc8301b2ae1789db023f01cedd6ba"
SRC_URI[sha2-0.10.8.sha256sum] = "793db75ad2bcafc3ffa7c68b215fee268f537982cd901d132f89c6343f3a3dc8"
SRC_URI[sha2-const-stable-0.1.0.sha256sum] = "5f179d4e11094a893b82fff208f74d448a7512f99f5a0acbd5c679b705f83ed9"
SRC_URI[sha3-0.10.8.sha256sum] = "75872d278a8f37ef87fa0ddbda7802605cb18344497949862c0d4dcb291eba60"
SRC_URI[sharded-slab-0.1.7.sha256sum] = "f40ca3c46823713e0d4209592e8d6e826aa57e928f09752619fc696c499637f6"
SRC_URI[shellexpand-3.1.1.sha256sum] = "8b1fdf65dd6331831494dd616b30351c38e96e45921a27745cf98490458b90bb"
SRC_URI[shlex-1.3.0.sha256sum] = "0fda2ff0d084019ba4d7c6f371c95d8fd75ce3524c3cb8fb653a3023f6323e64"
SRC_URI[signature-2.2.0.sha256sum] = "77549399552de45a898a580c1b41d445bf730df867cc44e6c0233bbc4b8329de"
SRC_URI[siphasher-1.0.1.sha256sum] = "56199f7ddabf13fe5074ce809e7d3f42b42ae711800501b5b16ea82ad029c39d"
SRC_URI[slab-0.4.9.sha256sum] = "8f92a496fb766b417c996b9c5e57daf2f7ad3b0bebe1ccfca4856390e3d3bb67"
SRC_URI[smallvec-1.13.2.sha256sum] = "3c5e1a9a646d36c3599cd173a41282daf47c44583ad367b8e6837255952e5c67"
SRC_URI[socket2-0.5.7.sha256sum] = "ce305eb0b4296696835b71df73eb912e0f1ffd2556a501fcede6e0c50349191c"
SRC_URI[socket2-0.6.0.sha256sum] = "233504af464074f9d066d7b5416c5f9b894a5862a6506e306f7b816cdd6f1807"
SRC_URI[spin-0.10.0.sha256sum] = "d5fe4ccb98d9c292d56fec89a5e07da7fc4cf0dc11e156b41793132775d3e591"
SRC_URI[spin-0.9.8.sha256sum] = "6980e8d7511241f8acf4aebddbb1ff938df5eebe98691418c4468d0b72a96a67"
SRC_URI[spki-0.7.3.sha256sum] = "d91ed6c858b01f942cd56b37a94b3e0a1798290327d1236e4d9cf4eaca44d29d"
SRC_URI[stabby-36.2.2.sha256sum] = "89b7e94eaf470c2e76b5f15fb2fb49714471a36cc512df5ee231e62e82ec79f8"
SRC_URI[stabby-abi-36.2.2.sha256sum] = "0dc7a63b8276b54e51bfffe3d85da56e7906b2dcfcb29018a8ab666c06734c1a"
SRC_URI[stabby-macros-36.2.2.sha256sum] = "eecb7ec5611ec93ec79d120fbe55f31bea234dc1bed1001d4a071bb688651615"
SRC_URI[stable_deref_trait-1.2.0.sha256sum] = "a8f112729512f8e442d81f95a8a7ddf2b7c6b8a1a6f509a95864142b30cab2d3"
SRC_URI[static_assertions-1.1.0.sha256sum] = "a2eb9349b6444b326872e140eb1cf5e7c522154d69e7a0ffb0fb81c06b37543f"
SRC_URI[static_init-1.0.3.sha256sum] = "8a2a1c578e98c1c16fc3b8ec1328f7659a500737d7a0c6d625e73e830ff9c1f6"
SRC_URI[static_init_macro-1.0.2.sha256sum] = "70a2595fc3aa78f2d0e45dd425b22282dd863273761cc77780914b2cf3003acf"
SRC_URI[strsim-0.11.1.sha256sum] = "7da8b5736845d9f2fcb837ea5d9e2628564b3b043a70948a3f0b778838c5fb4f"
SRC_URI[subtle-2.6.1.sha256sum] = "13c2bddecc57b384dee18652358fb23172facb8a2c51ccc10d74c157bdea3292"
SRC_URI[syn-1.0.109.sha256sum] = "72b64191b275b66ffe2469e8af2c1cfe3bafa67b529ead792a6d0160888b4237"
SRC_URI[syn-2.0.106.sha256sum] = "ede7c438028d4436d71104916910f5bb611972c5cfd7f89b8300a8186e6fada6"
SRC_URI[synstructure-0.13.1.sha256sum] = "c8af7666ab7b6390ab78131fb5b0fce11d6b7a6951602017c35fa82800708971"
SRC_URI[talc-4.4.3.sha256sum] = "a3ae828aa394de34c7de08f522d1b86bd1c182c668d27da69caadda00590f26d"
SRC_URI[tempfile-3.12.0.sha256sum] = "04cbcdd0c794ebb0d4cf35e88edd2f7d2c4c3e9a5a6dab322839b321c6a87a64"
SRC_URI[thiserror-1.0.69.sha256sum] = "b6aaf5339b578ea85b50e080feb250a3e8ae8cfcdff9a461c9ec2904bc923f52"
SRC_URI[thiserror-2.0.11.sha256sum] = "d452f284b73e6d76dd36758a0c8684b1d5be31f92b89d07fd5822175732206fc"
SRC_URI[thiserror-impl-1.0.69.sha256sum] = "4fee6c4efc90059e10f81e6d42c60a18f76588c3d74cb83a0b242a2b6c7504c1"
SRC_URI[thiserror-impl-2.0.11.sha256sum] = "26afc1baea8a989337eeb52b6e72a039780ce45c3edfcc9c5b9d112feeb173c2"
SRC_URI[thread-priority-1.1.0.sha256sum] = "0d3b04d33c9633b8662b167b847c7ab521f83d1ae20f2321b65b5b925e532e36"
SRC_URI[thread_local-1.1.8.sha256sum] = "8b9ef9bad013ada3808854ceac7b46812a6465ba368859a37e2100283d2d719c"
SRC_URI[time-0.3.41.sha256sum] = "8a7619e19bc266e0f9c5e6686659d394bc57973859340060a69221e57dbc0c40"
SRC_URI[time-core-0.1.4.sha256sum] = "c9e9a38711f559d9e3ce1cdb06dd7c5b8ea546bc90052da6d06bb76da74bb07c"
SRC_URI[time-macros-0.2.22.sha256sum] = "3526739392ec93fd8b359c8e98514cb3e8e021beb4e5f597b00a0221f8ed8a49"
SRC_URI[tinystr-0.7.6.sha256sum] = "9117f5d4db391c1cf6927e7bea3db74b9a1c1add8f7eda9ffd5364f40f57b82f"
SRC_URI[tinyvec-1.8.0.sha256sum] = "445e881f4f6d382d5f27c034e25eb92edd7c784ceab92a0937db7f2e9471b938"
SRC_URI[tinyvec_macros-0.1.1.sha256sum] = "1f3ccbac311fea05f86f61904b462b55fb3df8837a366dfc601a0161d0532f20"
SRC_URI[tls-listener-0.11.0.sha256sum] = "ab41256c16d6fc2b3021545f20bf77a73200b18bd54040ac656dddfca6205bfa"
SRC_URI[token-cell-2.0.0.sha256sum] = "e9c7b0772e96c7fa6646b16c116753b3d1db503400209237230aa992c9e3a269"
SRC_URI[tokio-1.47.1.sha256sum] = "89e49afdadebb872d3145a5638b59eb0691ea23e46ca484037cfab3b76b95038"
SRC_URI[tokio-macros-2.5.0.sha256sum] = "6e06d43f1345a3bcd39f6a56dbb7dcab2ba47e68e8ac134855e7e2bdbaf8cab8"
SRC_URI[tokio-rustls-0.26.2.sha256sum] = "8e727b36a1a0e8b74c376ac2211e40c2c8af09fb4013c60d910495810f008e9b"
SRC_URI[tokio-serial-5.4.4.sha256sum] = "aa6e2e4cf0520a99c5f87d5abb24172b5bd220de57c3181baaaa5440540c64aa"
SRC_URI[tokio-tungstenite-0.24.0.sha256sum] = "edc5f74e248dc973e0dbb7b74c7e0d6fcc301c694ff50049504004ef4d0cdcd9"
SRC_URI[tokio-util-0.7.16.sha256sum] = "14307c986784f72ef81c89db7d9e28d6ac26d16213b109ea501696195e6e3ce5"
SRC_URI[tokio-vsock-0.5.0.sha256sum] = "2e336ac4b36df625d5429a735dd5847732fe5f62010e3ce0c50f3705d44730f8"
SRC_URI[toml-0.8.19.sha256sum] = "a1ed1f98e3fdc28d6d910e6737ae6ab1a93bf1985935a1193e68f93eeb68d24e"
SRC_URI[toml_datetime-0.6.8.sha256sum] = "0dd7358ecb8fc2f8d014bf86f6f638ce72ba252a2c3a2572f2a795f1d23efb41"
SRC_URI[toml_edit-0.22.20.sha256sum] = "583c44c02ad26b0c3f3066fe629275e50627026c51ac2e595cca4c230ce1ce1d"
SRC_URI[tracing-0.1.41.sha256sum] = "784e0ac535deb450455cbfa28a6f0df145ea1bb7ae51b821cf5e7927fdcfbdd0"
SRC_URI[tracing-attributes-0.1.30.sha256sum] = "81383ab64e72a7a8b8e13130c49e3dab29def6d0c7d76a03087b3cf71c5c6903"
SRC_URI[tracing-core-0.1.34.sha256sum] = "b9d12581f227e93f094d3af2ae690a574abb8a2b9b7a96e7cfe9647b2b617678"
SRC_URI[tracing-log-0.2.0.sha256sum] = "ee855f1f400bd0e5c02d150ae5de3840039a3f54b025156404e34c23c03f47c3"
SRC_URI[tracing-serde-0.1.3.sha256sum] = "bc6b213177105856957181934e4920de57730fc69bf42c37ee5bb664d406d9e1"
SRC_URI[tracing-subscriber-0.3.18.sha256sum] = "ad0f048c97dbd9faa9b7df56362b8ebcaa52adb06b498c050d2f4e32f90a7a8b"
SRC_URI[tungstenite-0.24.0.sha256sum] = "18e5b8366ee7a95b16d32197d0b2604b43a0be89dc5fac9f8e96ccafbaedda8a"
SRC_URI[twox-hash-1.6.3.sha256sum] = "97fee6b57c6a41524a810daee9286c02d7752c4253064d0b05472833a438f675"
SRC_URI[typenum-1.17.0.sha256sum] = "42ff0bf0c66b8238c6f3b578df37d0b7848e55df8577b3f74f92a69acceeb825"
SRC_URI[ucd-trie-0.1.6.sha256sum] = "ed646292ffc8188ef8ea4d1e0e0150fb15a5c2e12ad9b8fc191ae7a8a7f3c4b9"
SRC_URI[uhlc-0.8.2.sha256sum] = "b62a645e3e4e6c85b7abe49b086aa3204119431f42b6123b0070419fb6e9d24e"
SRC_URI[unescaper-0.1.5.sha256sum] = "c878a167baa8afd137494101a688ef8c67125089ff2249284bd2b5f9bfedb815"
SRC_URI[unicode-ident-1.0.13.sha256sum] = "e91b56cd4cadaeb79bbf1a5645f6b4f8dc5bde8834ad5894a8db35fda9efa1fe"
SRC_URI[unicode-xid-0.2.5.sha256sum] = "229730647fbc343e3a80e463c1db7f78f3855d3f3739bee0dda773c9a037c90a"
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
SRC_URI[uuid-1.18.1.sha256sum] = "2f87b8aa10b915a06587d0dec516c282ff295b475d94abf425d62b57710070a2"
SRC_URI[validated_struct-2.2.0.sha256sum] = "869a93e8a7286e339e1128630051d82babbcd75d585975af07b9f3327220e60e"
SRC_URI[validated_struct_macros-2.2.0.sha256sum] = "8c44ce98e7227a04eeb4cf9c784109a5c9710e54849ceb4f09f8597247897f1e"
SRC_URI[valuable-0.1.0.sha256sum] = "830b7e5d4d90034032940e4ace0d9a9a057e7a45cd94e6c007832e39edb82f6d"
SRC_URI[vec_map-0.8.2.sha256sum] = "f1bddf1187be692e79c5ffeab891132dfb0f236ed36a43c7ed39f1165ee20191"
SRC_URI[version_check-0.9.5.sha256sum] = "0b928f33d975fc6ad9f86c8f283853ad26bdd5b10b7f1542aa2fa15e2289105a"
SRC_URI[vsock-0.4.0.sha256sum] = "2dfb6e7a74830912f1f4a7655227c9ded1ea4e9136676311fedf54bedb412f35"
SRC_URI[walkdir-2.5.0.sha256sum] = "29790946404f91d9c5d06f9874efddea1dc06c5efe94541a7d6863108e3a5e4b"
SRC_URI[wasi-0.11.0+wasi-snapshot-preview1.sha256sum] = "9c8d87e72b64a3b4db28d11ce29237c246188f4f51057d65a7eab63b7987e423"
SRC_URI[wasi-0.14.7+wasi-0.2.4.sha256sum] = "883478de20367e224c0090af9cf5f9fa85bed63a95c1abf3afc5c083ebc06e8c"
SRC_URI[wasip2-1.0.1+wasi-0.2.4.sha256sum] = "0562428422c63773dad2c345a1882263bbf4d65cf3f42e90921f787ef5ad58e7"
SRC_URI[wasm-bindgen-0.2.102.sha256sum] = "4ad224d2776649cfb4f4471124f8176e54c1cca67a88108e30a0cd98b90e7ad3"
SRC_URI[wasm-bindgen-backend-0.2.102.sha256sum] = "3a1364104bdcd3c03f22b16a3b1c9620891469f5e9f09bc38b2db121e593e732"
SRC_URI[wasm-bindgen-macro-0.2.102.sha256sum] = "0d7ab4ca3e367bb1ed84ddbd83cc6e41e115f8337ed047239578210214e36c76"
SRC_URI[wasm-bindgen-macro-support-0.2.102.sha256sum] = "4a518014843a19e2dbbd0ed5dfb6b99b23fb886b14e6192a00803a3e14c552b0"
SRC_URI[wasm-bindgen-shared-0.2.102.sha256sum] = "255eb0aa4cc2eea3662a00c2bbd66e93911b7361d5e0fcd62385acfd7e15dcee"
SRC_URI[webpki-roots-0.26.5.sha256sum] = "0bd24728e5af82c6c4ec1b66ac4844bdf8156257fccda846ec58b42cd0cdbe6a"
SRC_URI[win-sys-0.3.1.sha256sum] = "5b7b128a98c1cfa201b09eb49ba285887deb3cbe7466a98850eb1adabb452be5"
SRC_URI[winapi-0.3.9.sha256sum] = "5c839a674fcd7a98952e593242ea400abe93992746761e38641405d28b00f419"
SRC_URI[winapi-i686-pc-windows-gnu-0.4.0.sha256sum] = "ac3b87c63620426dd9b991e5ce0329eff545bccbbb34f3be09ff6fb6ab51b7b6"
SRC_URI[winapi-util-0.1.9.sha256sum] = "cf221c93e13a30d793f7645a0e7762c55d169dbb0a49671918a2319d289b10bb"
SRC_URI[winapi-x86_64-pc-windows-gnu-0.4.0.sha256sum] = "712e227841d057c1ee1cd2fb22fa7e5a5461ae8e48fa2ca79ec42cfc1931183f"
SRC_URI[windows-0.34.0.sha256sum] = "45296b64204227616fdbf2614cefa4c236b98ee64dfaaaa435207ed99fe7829f"
SRC_URI[windows-core-0.52.0.sha256sum] = "33ab640c8d7e35bf8ba19b884ba838ceb4fba93a4e8c65a9059d08afcfc683d9"
SRC_URI[windows-link-0.2.0.sha256sum] = "45e46c0661abb7180e7b9c281db115305d49ca1709ab8242adf09666d2173c65"
SRC_URI[windows-sys-0.48.0.sha256sum] = "677d2418bec65e3338edb076e806bc1ec15693c5d0104683f2efe857f61056a9"
SRC_URI[windows-sys-0.52.0.sha256sum] = "282be5f36a8ce781fad8c8ae18fa3f9beff57ec1b52cb3de0789201425d9a33d"
SRC_URI[windows-sys-0.59.0.sha256sum] = "1e38bc4d79ed67fd075bcc251a1c39b32a1776bbe92e5bef1f0bf1f8c531853b"
SRC_URI[windows-sys-0.61.0.sha256sum] = "e201184e40b2ede64bc2ea34968b28e33622acdbbf37104f0e4a33f7abe657aa"
SRC_URI[windows-targets-0.48.5.sha256sum] = "9a2fa6e2155d7247be68c096456083145c183cbbbc2764150dda45a87197940c"
SRC_URI[windows-targets-0.52.6.sha256sum] = "9b724f72796e036ab90c1021d4780d4d3d648aca59e491e6b98e725b84e99973"
SRC_URI[windows_aarch64_gnullvm-0.48.5.sha256sum] = "2b38e32f0abccf9987a4e3079dfb67dcd799fb61361e53e2882c3cbaf0d905d8"
SRC_URI[windows_aarch64_gnullvm-0.52.6.sha256sum] = "32a4622180e7a0ec044bb555404c800bc9fd9ec262ec147edd5989ccd0c02cd3"
SRC_URI[windows_aarch64_msvc-0.34.0.sha256sum] = "17cffbe740121affb56fad0fc0e421804adf0ae00891205213b5cecd30db881d"
SRC_URI[windows_aarch64_msvc-0.48.5.sha256sum] = "dc35310971f3b2dbbf3f0690a219f40e2d9afcf64f9ab7cc1be722937c26b4bc"
SRC_URI[windows_aarch64_msvc-0.52.6.sha256sum] = "09ec2a7bb152e2252b53fa7803150007879548bc709c039df7627cabbd05d469"
SRC_URI[windows_i686_gnu-0.34.0.sha256sum] = "2564fde759adb79129d9b4f54be42b32c89970c18ebf93124ca8870a498688ed"
SRC_URI[windows_i686_gnu-0.48.5.sha256sum] = "a75915e7def60c94dcef72200b9a8e58e5091744960da64ec734a6c6e9b3743e"
SRC_URI[windows_i686_gnu-0.52.6.sha256sum] = "8e9b5ad5ab802e97eb8e295ac6720e509ee4c243f69d781394014ebfe8bbfa0b"
SRC_URI[windows_i686_gnullvm-0.52.6.sha256sum] = "0eee52d38c090b3caa76c563b86c3a4bd71ef1a819287c19d586d7334ae8ed66"
SRC_URI[windows_i686_msvc-0.34.0.sha256sum] = "9cd9d32ba70453522332c14d38814bceeb747d80b3958676007acadd7e166956"
SRC_URI[windows_i686_msvc-0.48.5.sha256sum] = "8f55c233f70c4b27f66c523580f78f1004e8b5a8b659e05a4eb49d4166cca406"
SRC_URI[windows_i686_msvc-0.52.6.sha256sum] = "240948bc05c5e7c6dabba28bf89d89ffce3e303022809e73deaefe4f6ec56c66"
SRC_URI[windows_x86_64_gnu-0.34.0.sha256sum] = "cfce6deae227ee8d356d19effc141a509cc503dfd1f850622ec4b0f84428e1f4"
SRC_URI[windows_x86_64_gnu-0.48.5.sha256sum] = "53d40abd2583d23e4718fddf1ebec84dbff8381c07cae67ff7768bbf19c6718e"
SRC_URI[windows_x86_64_gnu-0.52.6.sha256sum] = "147a5c80aabfbf0c7d901cb5895d1de30ef2907eb21fbbab29ca94c5b08b1a78"
SRC_URI[windows_x86_64_gnullvm-0.48.5.sha256sum] = "0b7b52767868a23d5bab768e390dc5f5c55825b6d30b86c844ff2dc7414044cc"
SRC_URI[windows_x86_64_gnullvm-0.52.6.sha256sum] = "24d5b23dc417412679681396f2b49f3de8c1473deb516bd34410872eff51ed0d"
SRC_URI[windows_x86_64_msvc-0.34.0.sha256sum] = "d19538ccc21819d01deaf88d6a17eae6596a12e9aafdbb97916fb49896d89de9"
SRC_URI[windows_x86_64_msvc-0.48.5.sha256sum] = "ed94fce61571a4006852b7389a063ab983c02eb1bb37b47f8272ce92d06d9538"
SRC_URI[windows_x86_64_msvc-0.52.6.sha256sum] = "589f6da84c646204747d1270a2a5661ea66ed1cced2631d546fdfb155959f9ec"
SRC_URI[winnow-0.6.18.sha256sum] = "68a9bda4691f099d435ad181000724da8e5899daa10713c2d432552b9ccd3a6f"
SRC_URI[wit-bindgen-0.46.0.sha256sum] = "f17a85883d4e6d00e8a97c586de764dabcc06133f7f1d55dce5cdc070ad7fe59"
SRC_URI[write16-1.0.0.sha256sum] = "d1890f4022759daae28ed4fe62859b1236caebfc61ede2f63ed4e695f3f6d936"
SRC_URI[writeable-0.5.5.sha256sum] = "1e9df38ee2d2c3c5948ea468a8406ff0db0b29ae1ffde1bcf20ef305bcc95c51"
SRC_URI[x509-parser-0.18.0.sha256sum] = "eb3e137310115a65136898d2079f003ce33331a6c4b0d51f1531d1be082b6425"
SRC_URI[yoke-0.7.5.sha256sum] = "120e6aef9aa629e3d4f52dc8cc43a015c7724194c97dfaf45180d2daf2b77f40"
SRC_URI[yoke-derive-0.7.5.sha256sum] = "2380878cad4ac9aac1e2435f3eb4020e8374b5f13c296cb75b4620ff8e229154"
SRC_URI[z-serial-0.3.1.sha256sum] = "1660dfc9f90480610f94c285a9a967b49cd2f57b3b1267d9bd7fd5d4f57c36c8"
SRC_URI[zenoh-1.6.2.sha256sum] = "c5df040795169d4b6e4fc8a5f9dce81b5210d1d606399634ec380deda30c347f"
SRC_URI[zenoh-buffers-1.6.2.sha256sum] = "510921897b03793f399b7eaec176355a12293afa1e791c3f844ef12fa08aecc4"
SRC_URI[zenoh-codec-1.6.2.sha256sum] = "585a77eff7a781726aeeafab52ad175be0dcfc92376a756c23a51f6701a73ba0"
SRC_URI[zenoh-collections-1.6.2.sha256sum] = "fa17a7ecf321aba18eabf99a37390b7a6524e826b6f8cb38f9361479ece28887"
SRC_URI[zenoh-config-1.6.2.sha256sum] = "c02801ef8fd8d0b10437055dac10fd961fdc3a6356439dd52ee627e7f31b9295"
SRC_URI[zenoh-core-1.6.2.sha256sum] = "325645d09d0f74f48051b51c2ab73e270c16d9d7d408c41eb47ed8f067451cd9"
SRC_URI[zenoh-crypto-1.6.2.sha256sum] = "5244d615594f1c2149cba6177f15e76cc825e2839230e26693f2b723367b6c2f"
SRC_URI[zenoh-ext-1.6.2.sha256sum] = "6c896b65964bf27279f7432bd0c9290cab9ef779e39e7f387b8561f89e46c528"
SRC_URI[zenoh-keyexpr-1.6.2.sha256sum] = "c9495c0ca85331f87442b465760a7fb7334370354742a4201b719cc2533afee7"
SRC_URI[zenoh-link-1.6.2.sha256sum] = "001a7f07522b06ae6364ae787ab83eddf4e43f56f7f138fe3e54ea123ee3523b"
SRC_URI[zenoh-link-commons-1.6.2.sha256sum] = "5be05b499b789afb2024de4253e12ccaa3e296f66a0db6147deb9acec491f622"
SRC_URI[zenoh-link-quic-1.6.2.sha256sum] = "4168034bb7005d313ba834d105ede7c7f9fac48684f80a140fccb8302e9ca4aa"
SRC_URI[zenoh-link-quic_datagram-1.6.2.sha256sum] = "b954594b5283afcbfc65a5090829b7a09701a29c99ad528fc09cdcef607a4e51"
SRC_URI[zenoh-link-serial-1.6.2.sha256sum] = "6f4468f05ef72dc98fd185bd4250fa12e7c9e9725626480f480175f818b7fade"
SRC_URI[zenoh-link-tcp-1.6.2.sha256sum] = "3b968d3506682350760fb69c07b3c9aea07f351ac39993c7d948bdc5a19d5645"
SRC_URI[zenoh-link-tls-1.6.2.sha256sum] = "a810a4ba44011cc4c75713eadcf1a03fb2e22f0907d62f9b12c04d42ba1d596f"
SRC_URI[zenoh-link-udp-1.6.2.sha256sum] = "a4178b940cc613b4d0db3f06ceb71377199cacb22087f589bc60d1b4df6a2365"
SRC_URI[zenoh-link-unixpipe-1.6.2.sha256sum] = "50d23df79900e40bbd04302d7353e268b267670adb86d0d49bb7689494894103"
SRC_URI[zenoh-link-unixsock_stream-1.6.2.sha256sum] = "486de15a9f4ecc6d5839ec0153450bafee202355ea20810e81c65d70045d210b"
SRC_URI[zenoh-link-vsock-1.6.2.sha256sum] = "66449d8a6cd6ee757a58d16db7a160df988806cd9c81dc11ccaf61c010fd4dbf"
SRC_URI[zenoh-link-ws-1.6.2.sha256sum] = "1cb73dab1b8b8406ac288586727590e6830cc35a25f3c31ffb3d88518446f7e9"
SRC_URI[zenoh-macros-1.6.2.sha256sum] = "2bbff17ef687e10ed4f6a956fb78fc97205a4a6242c657638e8e5da726840aca"
SRC_URI[zenoh-plugin-trait-1.6.2.sha256sum] = "968571b0b585c5be1f19c553b368994424a869af46a4785bf5a3248194a97172"
SRC_URI[zenoh-protocol-1.6.2.sha256sum] = "879a66ef51831f54f5f824bf9005bf73129bc2485053311ffb7a245f907f721c"
SRC_URI[zenoh-result-1.6.2.sha256sum] = "e0f564d3324e443d0d48a4656d89bab1d0b263660fb7e17ba149c464e62f94bd"
SRC_URI[zenoh-runtime-1.6.2.sha256sum] = "e3a5cef13fd469aeb146518532751dbecd2b0f99ac56b6df667f954f11348dcf"
SRC_URI[zenoh-shm-1.6.2.sha256sum] = "0e5c7f0735cb529a2996de3c692b906493aad2673eadf0d50e985ccc29d4afb0"
SRC_URI[zenoh-sync-1.6.2.sha256sum] = "04a23123511fb7ce5990a778dcdcf41b5129ad8c5ef8d1e7ff719a538c3270e3"
SRC_URI[zenoh-task-1.6.2.sha256sum] = "8ad997618409140b23a2ef0957f7995afec2667ff3951f580de8a506c7814e41"
SRC_URI[zenoh-transport-1.6.2.sha256sum] = "2abd4521cd556093161156fc0799a506743304e1510fc7ed83adff99ca601f34"
SRC_URI[zenoh-util-1.6.2.sha256sum] = "42a736159ed0935c9ef258c151067ccce40f95f08d7f9360993e858e268b0a9d"
SRC_URI[zerocopy-0.7.35.sha256sum] = "1b9b4fd18abc82b8136838da5d50bae7bdea537c574d8dc1a34ed098d6c166f0"
SRC_URI[zerocopy-0.8.27.sha256sum] = "0894878a5fa3edfd6da3f88c4805f4c8558e2b996227a3d864f47fe11e38282c"
SRC_URI[zerocopy-derive-0.7.35.sha256sum] = "fa4f8080344d4671fb4e831a13ad1e68092748387dfc4f55e356242fae12ce3e"
SRC_URI[zerocopy-derive-0.8.27.sha256sum] = "88d2b8d9c68ad2b9e4340d7832716a4d21a22a1154777ad56ea55c51a9cf3831"
SRC_URI[zerofrom-0.1.5.sha256sum] = "cff3ee08c995dee1859d998dea82f7374f2826091dd9cd47def953cae446cd2e"
SRC_URI[zerofrom-derive-0.1.6.sha256sum] = "d71e5d6e06ab090c67b5e44993ec16b72dcbaabc526db883a360057678b48502"
SRC_URI[zeroize-1.8.1.sha256sum] = "ced3678a2879b30306d323f4542626697a464a97c0a07c9aebf7ebca65cd4dde"
SRC_URI[zerovec-0.10.4.sha256sum] = "aa2b893d79df23bfb12d5461018d408ea19dfafe76c2c7ef6d4eba614f8ff079"
SRC_URI[zerovec-derive-0.10.3.sha256sum] = "6eafa6dfb17584ea3e2bd6e76e0cc15ad7af12b09abdd1ca55961bed9b1063c6"
