SRC_URI += "\
    crate://crates.io/adler2/2.0.1 \
    crate://crates.io/advisory-lock/0.3.0 \
    crate://crates.io/aes/0.8.4 \
    crate://crates.io/ahash/0.8.12 \
    crate://crates.io/aho-corasick/1.1.5 \
    crate://crates.io/allocator-api2/0.2.21 \
    crate://crates.io/android_system_properties/0.1.6 \
    crate://crates.io/anstream/1.0.0 \
    crate://crates.io/anstyle-parse/1.0.0 \
    crate://crates.io/anstyle-query/1.1.5 \
    crate://crates.io/anstyle-wincon/3.0.11 \
    crate://crates.io/anstyle/1.0.14 \
    crate://crates.io/anyhow/1.0.104 \
    crate://crates.io/arc-swap/1.9.2 \
    crate://crates.io/array-init/2.1.0 \
    crate://crates.io/asn1-rs-derive/0.6.0 \
    crate://crates.io/asn1-rs-impl/0.2.0 \
    crate://crates.io/asn1-rs/0.7.2 \
    crate://crates.io/async-trait/0.1.92 \
    crate://crates.io/autocfg/1.5.1 \
    crate://crates.io/base64/0.22.1 \
    crate://crates.io/base64ct/1.8.3 \
    crate://crates.io/bincode/1.3.3 \
    crate://crates.io/bit-vec/0.9.1 \
    crate://crates.io/bitflags/1.3.2 \
    crate://crates.io/bitflags/2.13.1 \
    crate://crates.io/block-buffer/0.10.4 \
    crate://crates.io/bs58/0.5.1 \
    crate://crates.io/buddy_system_allocator/0.10.0 \
    crate://crates.io/bumpalo/3.20.3 \
    crate://crates.io/byteorder/1.5.0 \
    crate://crates.io/bytes/1.12.1 \
    crate://crates.io/cbindgen/0.29.4 \
    crate://crates.io/cc/1.4.3 \
    crate://crates.io/cfg-if/1.0.4 \
    crate://crates.io/cfg_aliases/0.1.1 \
    crate://crates.io/cfg_aliases/0.2.2 \
    crate://crates.io/chacha20/0.10.1 \
    crate://crates.io/chrono/0.4.45 \
    crate://crates.io/cipher/0.4.4 \
    crate://crates.io/clap/4.6.6 \
    crate://crates.io/clap_builder/4.6.6 \
    crate://crates.io/clap_lex/1.1.0 \
    crate://crates.io/cobs/0.2.3 \
    crate://crates.io/colorchoice/1.0.5 \
    crate://crates.io/combine/4.6.7 \
    crate://crates.io/const-oid/0.9.6 \
    crate://crates.io/const_format/0.2.36 \
    crate://crates.io/const_format_proc_macros/0.2.34 \
    crate://crates.io/core-foundation-sys/0.8.7 \
    crate://crates.io/core-foundation/0.10.1 \
    crate://crates.io/cpufeatures/0.2.17 \
    crate://crates.io/cpufeatures/0.3.0 \
    crate://crates.io/crc32fast/1.5.0 \
    crate://crates.io/crossbeam-channel/0.5.16 \
    crate://crates.io/crossbeam-deque/0.8.7 \
    crate://crates.io/crossbeam-epoch/0.9.20 \
    crate://crates.io/crossbeam-queue/0.3.13 \
    crate://crates.io/crossbeam-utils/0.8.22 \
    crate://crates.io/crossbeam/0.8.4 \
    crate://crates.io/crypto-common/0.1.7 \
    crate://crates.io/ctor-proc-macro/0.0.6 \
    crate://crates.io/ctor/0.4.3 \
    crate://crates.io/darling/0.23.0 \
    crate://crates.io/darling_core/0.23.0 \
    crate://crates.io/darling_macro/0.23.0 \
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
    crate://crates.io/dtor-proc-macro/0.0.5 \
    crate://crates.io/dtor/0.0.6 \
    crate://crates.io/dyn-clone/1.0.20 \
    crate://crates.io/either/1.17.0 \
    crate://crates.io/equivalent/1.0.2 \
    crate://crates.io/errno-dragonfly/0.1.2 \
    crate://crates.io/errno/0.2.8 \
    crate://crates.io/errno/0.3.14 \
    crate://crates.io/evalexpr/11.3.1 \
    crate://crates.io/event-listener/5.4.2 \
    crate://crates.io/fastbloom/0.17.0 \
    crate://crates.io/fastrand/2.5.0 \
    crate://crates.io/filepath/0.1.3 \
    crate://crates.io/find-msvc-tools/0.1.11 \
    crate://crates.io/fixedbitset/0.5.7 \
    crate://crates.io/flate2/1.1.9 \
    crate://crates.io/flume/0.11.1 \
    crate://crates.io/flume/0.12.0 \
    crate://crates.io/foldhash/0.1.5 \
    crate://crates.io/foldhash/0.2.0 \
    crate://crates.io/form_urlencoded/1.2.2 \
    crate://crates.io/fs2/0.4.3 \
    crate://crates.io/fs_extra/1.3.0 \
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
    crate://crates.io/hermit-abi/0.5.2 \
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
    crate://crates.io/icu_provider/2.3.0 \
    crate://crates.io/ident_case/1.0.1 \
    crate://crates.io/idna/1.1.0 \
    crate://crates.io/idna_adapter/1.2.2 \
    crate://crates.io/indexmap/1.9.3 \
    crate://crates.io/indexmap/2.14.0 \
    crate://crates.io/inout/0.1.4 \
    crate://crates.io/io-kit-sys/0.4.1 \
    crate://crates.io/ipnetwork/0.20.0 \
    crate://crates.io/is_terminal_polyfill/1.70.2 \
    crate://crates.io/itertools/0.14.0 \
    crate://crates.io/itoa/1.0.18 \
    crate://crates.io/jiff-core/0.1.0 \
    crate://crates.io/jiff-static/0.2.35 \
    crate://crates.io/jiff-tzdb-platform/0.1.3 \
    crate://crates.io/jiff-tzdb/0.1.8 \
    crate://crates.io/jiff/0.2.35 \
    crate://crates.io/jni-macros/0.22.4 \
    crate://crates.io/jni-sys-macros/0.4.1 \
    crate://crates.io/jni-sys/0.4.1 \
    crate://crates.io/jni/0.22.4 \
    crate://crates.io/js-sys/0.3.104 \
    crate://crates.io/json5/0.4.1 \
    crate://crates.io/keccak/0.1.6 \
    crate://crates.io/keyed-set/1.1.0 \
    crate://crates.io/konst/0.2.20 \
    crate://crates.io/konst_macro_rules/0.2.19 \
    crate://crates.io/lazy_static/1.5.0 \
    crate://crates.io/leb128/0.2.7 \
    crate://crates.io/libc/0.2.189 \
    crate://crates.io/libloading/0.8.9 \
    crate://crates.io/libm/0.2.16 \
    crate://crates.io/libredox/0.1.20 \
    crate://crates.io/linux-raw-sys/0.12.1 \
    crate://crates.io/litemap/0.8.3 \
    crate://crates.io/lock_api/0.4.14 \
    crate://crates.io/lockfree/0.5.1 \
    crate://crates.io/log/0.4.33 \
    crate://crates.io/lru-slab/0.1.2 \
    crate://crates.io/lru/0.16.4 \
    crate://crates.io/lz4_flex/0.10.0 \
    crate://crates.io/mach2/0.4.3 \
    crate://crates.io/matchers/0.2.0 \
    crate://crates.io/memchr/2.8.3 \
    crate://crates.io/memoffset/0.9.1 \
    crate://crates.io/minimal-lexical/0.2.1 \
    crate://crates.io/miniz_oxide/0.8.9 \
    crate://crates.io/mio-serial/5.0.7 \
    crate://crates.io/mio/1.2.2 \
    crate://crates.io/nanorand/0.7.0 \
    crate://crates.io/nix/0.26.4 \
    crate://crates.io/nix/0.27.1 \
    crate://crates.io/nix/0.29.0 \
    crate://crates.io/nix/0.31.3 \
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
    crate://crates.io/once_cell_polyfill/1.70.2 \
    crate://crates.io/openssl-probe/0.2.1 \
    crate://crates.io/option-ext/0.2.0 \
    crate://crates.io/owned-alloc/0.2.0 \
    crate://crates.io/parking/2.2.1 \
    crate://crates.io/parking_lot/0.12.5 \
    crate://crates.io/parking_lot_core/0.9.12 \
    crate://crates.io/paste/1.0.15 \
    crate://crates.io/pem-rfc7468/0.7.0 \
    crate://crates.io/pem/3.0.6 \
    crate://crates.io/percent-encoding/2.3.2 \
    crate://crates.io/pest/2.9.0 \
    crate://crates.io/pest_derive/2.9.0 \
    crate://crates.io/pest_generator/2.9.0 \
    crate://crates.io/pest_meta/2.9.0 \
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
    crate://crates.io/portable-atomic-util/0.2.7 \
    crate://crates.io/portable-atomic/1.15.0 \
    crate://crates.io/potential_utf/0.1.6 \
    crate://crates.io/powerfmt/0.2.0 \
    crate://crates.io/ppv-lite86/0.2.21 \
    crate://crates.io/proc-macro-crate/3.5.0 \
    crate://crates.io/proc-macro2/1.0.107 \
    crate://crates.io/prometheus-client-derive-encode/0.5.0 \
    crate://crates.io/prometheus-client/0.24.1 \
    crate://crates.io/quinn-proto/0.11.16 \
    crate://crates.io/quinn-udp/0.5.15 \
    crate://crates.io/quinn/0.11.11 \
    crate://crates.io/quote/1.0.47 \
    crate://crates.io/r-efi/5.3.0 \
    crate://crates.io/r-efi/6.0.0 \
    crate://crates.io/rand/0.10.2 \
    crate://crates.io/rand/0.8.7 \
    crate://crates.io/rand/0.9.5 \
    crate://crates.io/rand_chacha/0.3.1 \
    crate://crates.io/rand_chacha/0.9.0 \
    crate://crates.io/rand_core/0.10.1 \
    crate://crates.io/rand_core/0.6.4 \
    crate://crates.io/rand_core/0.9.5 \
    crate://crates.io/rand_pcg/0.10.2 \
    crate://crates.io/rcgen/0.14.9 \
    crate://crates.io/redox_syscall/0.5.18 \
    crate://crates.io/redox_users/0.5.2 \
    crate://crates.io/ref-cast-impl/1.0.26 \
    crate://crates.io/ref-cast/1.0.26 \
    crate://crates.io/regex-automata/0.4.18 \
    crate://crates.io/regex-syntax/0.8.11 \
    crate://crates.io/regex/1.13.1 \
    crate://crates.io/ring/0.17.14 \
    crate://crates.io/ringbuffer-spsc/0.1.15 \
    crate://crates.io/rlimit/0.10.2 \
    crate://crates.io/ron/0.12.2 \
    crate://crates.io/rsa/0.9.10 \
    crate://crates.io/rustc-hash/2.1.3 \
    crate://crates.io/rustc_version/0.4.1 \
    crate://crates.io/rusticata-macros/4.1.0 \
    crate://crates.io/rustix/1.1.4 \
    crate://crates.io/rustls-native-certs/0.8.4 \
    crate://crates.io/rustls-pemfile/2.2.0 \
    crate://crates.io/rustls-pki-types/1.15.1 \
    crate://crates.io/rustls-platform-verifier-android/0.1.1 \
    crate://crates.io/rustls-platform-verifier/0.7.0 \
    crate://crates.io/rustls-webpki/0.103.14 \
    crate://crates.io/rustls/0.23.43 \
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
    crate://crates.io/serde_with/3.22.0 \
    crate://crates.io/serde_with_macros/3.22.0 \
    crate://crates.io/serde_yaml/0.9.34+deprecated \
    crate://crates.io/serialport/4.9.0 \
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
    crate://crates.io/siphasher/1.0.3 \
    crate://crates.io/slab/0.4.12 \
    crate://crates.io/smallvec/1.15.2 \
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
    crate://crates.io/syn/3.0.3 \
    crate://crates.io/synstructure/0.13.2 \
    crate://crates.io/talc/4.4.3 \
    crate://crates.io/tempfile/3.27.0 \
    crate://crates.io/thiserror-impl/1.0.69 \
    crate://crates.io/thiserror-impl/2.0.20 \
    crate://crates.io/thiserror/1.0.69 \
    crate://crates.io/thiserror/2.0.20 \
    crate://crates.io/thread-priority/1.2.0 \
    crate://crates.io/thread_local/1.1.10 \
    crate://crates.io/time-core/0.1.9 \
    crate://crates.io/time-macros/0.2.32 \
    crate://crates.io/time/0.3.55 \
    crate://crates.io/tinystr/0.8.4 \
    crate://crates.io/tinyvec/1.12.0 \
    crate://crates.io/tinyvec_macros/0.1.1 \
    crate://crates.io/tls-listener/0.11.2 \
    crate://crates.io/token-cell/2.1.1 \
    crate://crates.io/tokio-macros/2.7.2 \
    crate://crates.io/tokio-rustls/0.26.4 \
    crate://crates.io/tokio-serial/5.5.0 \
    crate://crates.io/tokio-tungstenite/0.24.0 \
    crate://crates.io/tokio-util/0.7.19 \
    crate://crates.io/tokio-vsock/0.5.0 \
    crate://crates.io/tokio/1.53.1 \
    crate://crates.io/toml/0.9.12+spec-1.1.0 \
    crate://crates.io/toml_datetime/0.7.5+spec-1.1.0 \
    crate://crates.io/toml_datetime/1.1.1+spec-1.1.0 \
    crate://crates.io/toml_edit/0.25.13+spec-1.1.0 \
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
    crate://crates.io/unescaper/0.1.10 \
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
    crate://crates.io/uuid/1.24.0 \
    crate://crates.io/validated_struct/2.2.0 \
    crate://crates.io/validated_struct_macros/2.2.0 \
    crate://crates.io/valuable/0.1.1 \
    crate://crates.io/vec_map/0.8.2 \
    crate://crates.io/version_check/0.9.5 \
    crate://crates.io/vsock/0.4.0 \
    crate://crates.io/walkdir/2.5.0 \
    crate://crates.io/wasi/0.11.1+wasi-snapshot-preview1 \
    crate://crates.io/wasip2/1.0.4+wasi-0.2.12 \
    crate://crates.io/wasm-bindgen-macro-support/0.2.127 \
    crate://crates.io/wasm-bindgen-macro/0.2.127 \
    crate://crates.io/wasm-bindgen-shared/0.2.127 \
    crate://crates.io/wasm-bindgen/0.2.127 \
    crate://crates.io/web-time/1.1.0 \
    crate://crates.io/webpki-root-certs/1.0.9 \
    crate://crates.io/webpki-roots/1.0.9 \
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
    crate://crates.io/yoke-derive/0.8.2 \
    crate://crates.io/yoke/0.8.3 \
    crate://crates.io/z-serial/0.3.1 \
    crate://crates.io/zenoh-buffers/1.10.0 \
    crate://crates.io/zenoh-codec/1.10.0 \
    crate://crates.io/zenoh-collections/1.10.0 \
    crate://crates.io/zenoh-config/1.10.0 \
    crate://crates.io/zenoh-core/1.10.0 \
    crate://crates.io/zenoh-crypto/1.10.0 \
    crate://crates.io/zenoh-ext/1.10.0 \
    crate://crates.io/zenoh-keyexpr/1.10.0 \
    crate://crates.io/zenoh-link-commons/1.10.0 \
    crate://crates.io/zenoh-link-quic/1.10.0 \
    crate://crates.io/zenoh-link-quic_datagram/1.10.0 \
    crate://crates.io/zenoh-link-serial/1.10.0 \
    crate://crates.io/zenoh-link-tcp/1.10.0 \
    crate://crates.io/zenoh-link-tls/1.10.0 \
    crate://crates.io/zenoh-link-udp/1.10.0 \
    crate://crates.io/zenoh-link-unixpipe/1.10.0 \
    crate://crates.io/zenoh-link-unixsock_stream/1.10.0 \
    crate://crates.io/zenoh-link-vsock/1.10.0 \
    crate://crates.io/zenoh-link-ws/1.10.0 \
    crate://crates.io/zenoh-link/1.10.0 \
    crate://crates.io/zenoh-macros/1.10.0 \
    crate://crates.io/zenoh-plugin-trait/1.10.0 \
    crate://crates.io/zenoh-protocol/1.10.0 \
    crate://crates.io/zenoh-result/1.10.0 \
    crate://crates.io/zenoh-runtime/1.10.0 \
    crate://crates.io/zenoh-shm/1.10.0 \
    crate://crates.io/zenoh-stats/1.10.0 \
    crate://crates.io/zenoh-sync/1.10.0 \
    crate://crates.io/zenoh-task/1.10.0 \
    crate://crates.io/zenoh-transport/1.10.0 \
    crate://crates.io/zenoh-util/1.10.0 \
    crate://crates.io/zenoh/1.10.0 \
    crate://crates.io/zerocopy-derive/0.8.56 \
    crate://crates.io/zerocopy/0.8.56 \
    crate://crates.io/zerofrom-derive/0.1.7 \
    crate://crates.io/zerofrom/0.1.8 \
    crate://crates.io/zeroize/1.9.0 \
    crate://crates.io/zerotrie/0.2.5 \
    crate://crates.io/zerovec-derive/0.11.4 \
    crate://crates.io/zerovec/0.11.7 \
    crate://crates.io/zmij/1.0.23 \
"

SRC_URI[adler2-2.0.1.sha256sum] = "320119579fcad9c21884f5c4861d16174d0e06250625266f50fe6898340abefa"
SRC_URI[advisory-lock-0.3.0.sha256sum] = "a6caee7d48f930f9ad3fc9546f8cbf843365da0c5b0ca4eee1d1ac3dd12d8f93"
SRC_URI[aes-0.8.4.sha256sum] = "b169f7a6d4742236a0a00c541b845991d0ac43e546831af1249753ab4c3aa3a0"
SRC_URI[ahash-0.8.12.sha256sum] = "5a15f179cd60c4584b8a8c596927aadc462e27f2ca70c04e0071964a73ba7a75"
SRC_URI[aho-corasick-1.1.5.sha256sum] = "c982642fa9e8606056828ee9a8505737230110bb1099153c79efe865c59d12ba"
SRC_URI[allocator-api2-0.2.21.sha256sum] = "683d7910e743518b0e34f1186f92494becacb047c7b6bf616c96772180fef923"
SRC_URI[android_system_properties-0.1.6.sha256sum] = "ae221649c9976a6f6c56ae1facf410f3ddb33cc661c4b7b61020a912d4237fbc"
SRC_URI[anstream-1.0.0.sha256sum] = "824a212faf96e9acacdbd09febd34438f8f711fb84e09a8916013cd7815ca28d"
SRC_URI[anstyle-1.0.14.sha256sum] = "940b3a0ca603d1eade50a4846a2afffd5ef57a9feac2c0e2ec2e14f9ead76000"
SRC_URI[anstyle-parse-1.0.0.sha256sum] = "52ce7f38b242319f7cabaa6813055467063ecdc9d355bbb4ce0c68908cd8130e"
SRC_URI[anstyle-query-1.1.5.sha256sum] = "40c48f72fd53cd289104fc64099abca73db4166ad86ea0b4341abe65af83dadc"
SRC_URI[anstyle-wincon-3.0.11.sha256sum] = "291e6a250ff86cd4a820112fb8898808a366d8f9f58ce16d1f538353ad55747d"
SRC_URI[anyhow-1.0.104.sha256sum] = "330a5ed07fa54e4702c9d6c4174f74427fc0ef6e214bbd677ae50a5099946470"
SRC_URI[arc-swap-1.9.2.sha256sum] = "c049c0be4daef0b145cb3555416b3b8ef5b7888a38aea1a3a155801fe7b0810b"
SRC_URI[array-init-2.1.0.sha256sum] = "3d62b7694a562cdf5a74227903507c56ab2cc8bdd1f781ed5cb4cf9c9f810bfc"
SRC_URI[asn1-rs-0.7.2.sha256sum] = "b7f43a50ac4fdca5df8e885c21b835997f0a1cdee65494a6847694a98652d9d8"
SRC_URI[asn1-rs-derive-0.6.0.sha256sum] = "3109e49b1e4909e9db6515a30c633684d68cdeaa252f215214cb4fa1a5bfee2c"
SRC_URI[asn1-rs-impl-0.2.0.sha256sum] = "7b18050c2cd6fe86c3a76584ef5e0baf286d038cda203eb6223df2cc413565f7"
SRC_URI[async-trait-0.1.92.sha256sum] = "82f6aeea286b8eb4dd3431a1be1b59d290ace00f5bfd8e2a159bc2a05e2c1667"
SRC_URI[autocfg-1.5.1.sha256sum] = "f2032f911046de80f0a198e0901378627c33f59ea0ac00e363d481118bd70a53"
SRC_URI[base64-0.22.1.sha256sum] = "72b3254f16251a8381aa12e40e3c4d2f0199f8c6508fbecb9d91f575e0fbb8c6"
SRC_URI[base64ct-1.8.3.sha256sum] = "2af50177e190e07a26ab74f8b1efbfe2ef87da2116221318cb1c2e82baf7de06"
SRC_URI[bincode-1.3.3.sha256sum] = "b1f45e9417d87227c7a56d22e471c6206462cba514c7590c09aff4cf6d1ddcad"
SRC_URI[bit-vec-0.9.1.sha256sum] = "b71798fca2c1fe1086445a7258a4bc81e6e49dcd24c8d0dd9a1e57395b603f51"
SRC_URI[bitflags-1.3.2.sha256sum] = "bef38d45163c2f1dde094a7dfd33ccf595c92905c8f8f4fdc18d06fb1037718a"
SRC_URI[bitflags-2.13.1.sha256sum] = "b588b76d00fde79687d7646a9b5bdf3cc0f655e0bbd080335a95d7e96f3587da"
SRC_URI[block-buffer-0.10.4.sha256sum] = "3078c7629b62d3f0439517fa394996acacc5cbc91c5a20d8c658e77abd503a71"
SRC_URI[bs58-0.5.1.sha256sum] = "bf88ba1141d185c399bee5288d850d63b8369520c1eafc32a0430b5b6c287bf4"
SRC_URI[buddy_system_allocator-0.10.0.sha256sum] = "a7913f22349ffcfc6ca0ca9a656ec26cfbba538ed49c31a273dff2c5d1ea83d9"
SRC_URI[bumpalo-3.20.3.sha256sum] = "72f5acc6cb2ba439de613abc23857ec3d78374d8ed5ac84e9d11336e87da8649"
SRC_URI[byteorder-1.5.0.sha256sum] = "1fd0f2584146f6f2ef48085050886acf353beff7305ebd1ae69500e27c67f64b"
SRC_URI[bytes-1.12.1.sha256sum] = "fc652a48c352aef3ea3aed32080501cf3ef6ed5da78602a020c991775b0aff04"
SRC_URI[cbindgen-0.29.4.sha256sum] = "2ecb53484c9c167ba674026b656d8a27d7657a58e6066aa902bfb1a4aa00ae20"
SRC_URI[cc-1.4.3.sha256sum] = "509591b7bcd67f4ef775afad7662703b4935daaa6ec0e5605cfb1090b32a2b6d"
SRC_URI[cfg-if-1.0.4.sha256sum] = "9330f8b2ff13f34540b44e946ef35111825727b38d33286ef986142615121801"
SRC_URI[cfg_aliases-0.1.1.sha256sum] = "fd16c4719339c4530435d38e511904438d07cce7950afa3718a84ac36c10e89e"
SRC_URI[cfg_aliases-0.2.2.sha256sum] = "f079e83a288787bcd14a6aea84cee5c87a67c5a3e660c30f557a3d24761b3527"
SRC_URI[chacha20-0.10.1.sha256sum] = "d524456ba66e72eb8b115ff89e01e497f8e6d11d78b70b1aa13c0fbd97540a81"
SRC_URI[chrono-0.4.45.sha256sum] = "1aa79e62e7697b8e29b513a68abacf485adcd1fe8284a4316c5ae868e6633327"
SRC_URI[cipher-0.4.4.sha256sum] = "773f3b9af64447d2ce9850330c473515014aa235e6a783b02db81ff39e4a3dad"
SRC_URI[clap-4.6.6.sha256sum] = "473c7e07f409a8d772161724aa8db6a765a2532a70f9667eeb7b49d3d02fbdca"
SRC_URI[clap_builder-4.6.6.sha256sum] = "7b48fea5a88e9ae728a2dcbedbfc0e730f7d60da42e1cb049a83c9fb8b789889"
SRC_URI[clap_lex-1.1.0.sha256sum] = "c8d4a3bb8b1e0c1050499d1815f5ab16d04f0959b233085fb31653fbfc9d98f9"
SRC_URI[cobs-0.2.3.sha256sum] = "67ba02a97a2bd10f4b59b25c7973101c79642302776489e030cd13cdab09ed15"
SRC_URI[colorchoice-1.0.5.sha256sum] = "1d07550c9036bf2ae0c684c4297d503f838287c83c53686d05370d0e139ae570"
SRC_URI[combine-4.6.7.sha256sum] = "ba5a308b75df32fe02788e748662718f03fde005016435c444eea572398219fd"
SRC_URI[const-oid-0.9.6.sha256sum] = "c2459377285ad874054d797f3ccebf984978aa39129f6eafde5cdc8315b612f8"
SRC_URI[const_format-0.2.36.sha256sum] = "4481a617ad9a412be3b97c5d403fef8ed023103368908b9c50af598ff467cc1e"
SRC_URI[const_format_proc_macros-0.2.34.sha256sum] = "1d57c2eccfb16dbac1f4e61e206105db5820c9d26c3c472bc17c774259ef7744"
SRC_URI[core-foundation-0.10.1.sha256sum] = "b2a6cd9ae233e7f62ba4e9353e81a88df7fc8a5987b8d445b4d90c879bd156f6"
SRC_URI[core-foundation-sys-0.8.7.sha256sum] = "773648b94d0e5d620f64f280777445740e61fe701025087ec8b57f45c791888b"
SRC_URI[cpufeatures-0.2.17.sha256sum] = "59ed5838eebb26a2bb2e58f6d5b5316989ae9d08bab10e0e6d103e656d1b0280"
SRC_URI[cpufeatures-0.3.0.sha256sum] = "8b2a41393f66f16b0823bb79094d54ac5fbd34ab292ddafb9a0456ac9f87d201"
SRC_URI[crc32fast-1.5.0.sha256sum] = "9481c1c90cbf2ac953f07c8d4a58aa3945c425b7185c9154d67a65e4230da511"
SRC_URI[crossbeam-0.8.4.sha256sum] = "1137cd7e7fc0fb5d3c5a8678be38ec56e819125d8d7907411fe24ccb943faca8"
SRC_URI[crossbeam-channel-0.5.16.sha256sum] = "d85363c37faeca707aef026efa9f3b34d077bce547e48f770770625c6013679e"
SRC_URI[crossbeam-deque-0.8.7.sha256sum] = "5181e0de7b61eb03a81e347d6dd8797bae9da5146707b51077e2d71a54ec0ceb"
SRC_URI[crossbeam-epoch-0.9.20.sha256sum] = "2d6914041f254d6e9176c01941b21115dcfb7089e55135a35411081bd106ef3f"
SRC_URI[crossbeam-queue-0.3.13.sha256sum] = "803d13fb3b09d88be9f4dbc29062c66b19bf7170867ceb746d2a8689bf6c7a26"
SRC_URI[crossbeam-utils-0.8.22.sha256sum] = "61803da095bee82a81bb1a452ecc25d3b2f1416d1897eb86430c6159ef717c17"
SRC_URI[crypto-common-0.1.7.sha256sum] = "78c8292055d1c1df0cce5d180393dc8cce0abec0a7102adb6c7b1eef6016d60a"
SRC_URI[ctor-0.4.3.sha256sum] = "ec09e802f5081de6157da9a75701d6c713d8dc3ba52571fd4bd25f412644e8a6"
SRC_URI[ctor-proc-macro-0.0.6.sha256sum] = "e2931af7e13dc045d8e9d26afccc6fa115d64e115c9c84b1166288b46f6782c2"
SRC_URI[darling-0.23.0.sha256sum] = "25ae13da2f202d56bd7f91c25fba009e7717a1e4a1cc98a76d844b65ae912e9d"
SRC_URI[darling_core-0.23.0.sha256sum] = "9865a50f7c335f53564bb694ef660825eb8610e0a53d3e11bf1b0d3df31e03b0"
SRC_URI[darling_macro-0.23.0.sha256sum] = "ac3984ec7bd6cfa798e62b4a642426a5be0e68f9401cfc2a01e3fa9ea2fcdb8d"
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
SRC_URI[dtor-0.0.6.sha256sum] = "97cbdf2ad6846025e8e25df05171abfb30e3ababa12ee0a0e44b9bbe570633a8"
SRC_URI[dtor-proc-macro-0.0.5.sha256sum] = "7454e41ff9012c00d53cf7f475c5e3afa3b91b7c90568495495e8d9bf47a1055"
SRC_URI[dyn-clone-1.0.20.sha256sum] = "d0881ea181b1df73ff77ffaaf9c7544ecc11e82fba9b5f27b262a3c73a332555"
SRC_URI[either-1.17.0.sha256sum] = "9e5e8f6c15a24b9a3ee5efec809ccd006d3b30e8b3bb63c39af737c7f87daa1d"
SRC_URI[equivalent-1.0.2.sha256sum] = "877a4ace8713b0bcf2a4e7eec82529c029f1d0619886d18145fea96c3ffe5c0f"
SRC_URI[errno-0.2.8.sha256sum] = "f639046355ee4f37944e44f60642c6f3a7efa3cf6b78c78a0d989a8ce6c396a1"
SRC_URI[errno-0.3.14.sha256sum] = "39cab71617ae0d63f51a36d69f866391735b51691dbda63cf6f96d042b63efeb"
SRC_URI[errno-dragonfly-0.1.2.sha256sum] = "aa68f1b12764fab894d2755d2518754e71b4fd80ecfb822714a1206c2aab39bf"
SRC_URI[evalexpr-11.3.1.sha256sum] = "b6aff27af350e7b53e82aac3e5ab6389abd8f280640ac034508dff0608c4c7e5"
SRC_URI[event-listener-5.4.2.sha256sum] = "5a23add41df1562121a9393cb065eab5146a1242410f23a644851e90cfd669d2"
SRC_URI[fastbloom-0.17.0.sha256sum] = "ef975e30683b2d965054bb0a836f8973857c4ebf6acf274fe46617cd285060d8"
SRC_URI[fastrand-2.5.0.sha256sum] = "da7c62ceae207dd37ea5b845da6a0696c799f85e97da1ab5b7910be3c1c80223"
SRC_URI[filepath-0.1.3.sha256sum] = "38ea8b8ba1c652fcc17279418e1d1eac2a05c6a941e13407b325719b2b1f617f"
SRC_URI[find-msvc-tools-0.1.11.sha256sum] = "d45db016d36b838f563236e9193d0ee6ce38f3f68b6c94e914b4929c96bbb890"
SRC_URI[fixedbitset-0.5.7.sha256sum] = "1d674e81391d1e1ab681a28d99df07927c6d4aa5b027d7da16ba32d1d21ecd99"
SRC_URI[flate2-1.1.9.sha256sum] = "843fba2746e448b37e26a819579957415c8cef339bf08564fe8b7ddbd959573c"
SRC_URI[flume-0.11.1.sha256sum] = "da0e4dd2a88388a1f4ccc7c9ce104604dab68d9f408dc34cd45823d5a9069095"
SRC_URI[flume-0.12.0.sha256sum] = "5e139bc46ca777eb5efaf62df0ab8cc5fd400866427e56c68b22e414e53bd3be"
SRC_URI[foldhash-0.1.5.sha256sum] = "d9c4f5dac5e15c24eb999c26181a6ca40b39fe946cbe4c263c7209467bc83af2"
SRC_URI[foldhash-0.2.0.sha256sum] = "77ce24cb58228fbb8aa041425bb1050850ac19177686ea6e0f41a70416f56fdb"
SRC_URI[form_urlencoded-1.2.2.sha256sum] = "cb4cb245038516f5f85277875cdaa4f7d2c9a0fa0468de06ed190163b1581fcf"
SRC_URI[fs2-0.4.3.sha256sum] = "9564fc758e15025b46aa6643b1b77d047d1a56a1aea6e01002ac0c7026876213"
SRC_URI[fs_extra-1.3.0.sha256sum] = "42703706b716c37f96a77aea830392ad231f44c9e9a67872fa5548707e11b11c"
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
SRC_URI[hermit-abi-0.5.2.sha256sum] = "fc0fef456e4baa96da950455cd02c081ca953b141298e41db3fc7e36b1da849c"
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
SRC_URI[icu_provider-2.3.0.sha256sum] = "92a7ed671a6aad807a8651a2e1782a6598fda9ce5185dd8158549e95a91c6428"
SRC_URI[ident_case-1.0.1.sha256sum] = "b9e0384b61958566e926dc50660321d12159025e767c18e043daf26b70104c39"
SRC_URI[idna-1.1.0.sha256sum] = "3b0875f23caa03898994f6ddc501886a45c7d3d62d04d2d90788d47be1b1e4de"
SRC_URI[idna_adapter-1.2.2.sha256sum] = "cb68373c0d6620ef8105e855e7745e18b0d00d3bdb07fb532e434244cdb9a714"
SRC_URI[indexmap-1.9.3.sha256sum] = "bd070e393353796e801d209ad339e89596eb4c8d430d18ede6a1cced8fafbd99"
SRC_URI[indexmap-2.14.0.sha256sum] = "d466e9454f08e4a911e14806c24e16fba1b4c121d1ea474396f396069cf949d9"
SRC_URI[inout-0.1.4.sha256sum] = "879f10e63c20629ecabbb64a8010319738c66a5cd0c29b02d63d272b03751d01"
SRC_URI[io-kit-sys-0.4.1.sha256sum] = "617ee6cf8e3f66f3b4ea67a4058564628cde41901316e19f559e14c7c72c5e7b"
SRC_URI[ipnetwork-0.20.0.sha256sum] = "bf466541e9d546596ee94f9f69590f89473455f88372423e0008fc1a7daf100e"
SRC_URI[is_terminal_polyfill-1.70.2.sha256sum] = "a6cb138bb79a146c1bd460005623e142ef0181e3d0219cb493e02f7d08a35695"
SRC_URI[itertools-0.14.0.sha256sum] = "2b192c782037fadd9cfa75548310488aabdbf3d2da73885b31bd0abd03351285"
SRC_URI[itoa-1.0.18.sha256sum] = "8f42a60cbdf9a97f5d2305f08a87dc4e09308d1276d28c869c684d7777685682"
SRC_URI[jiff-0.2.35.sha256sum] = "668b7183bd07af9a4885f5c35b0cc5c83c4607a913c16b7e17291832910d2dcc"
SRC_URI[jiff-core-0.1.0.sha256sum] = "7feca88439efe53da3754500c1851dedf3cb36c524dd5cf8225cc0794de95d09"
SRC_URI[jiff-static-0.2.35.sha256sum] = "3a69dcb3a21cfb32ce1cd056169337ca284af0766dd766e7878819b251a49204"
SRC_URI[jiff-tzdb-0.1.8.sha256sum] = "142bd39932ad231f10513df9ab62661fead8719872150b7ad02a2df79f4e141e"
SRC_URI[jiff-tzdb-platform-0.1.3.sha256sum] = "875a5a69ac2bab1a891711cf5eccbec1ce0341ea805560dcd90b7a2e925132e8"
SRC_URI[jni-0.22.4.sha256sum] = "5efd9a482cf3a427f00d6b35f14332adc7902ce91efb778580e180ff90fa3498"
SRC_URI[jni-macros-0.22.4.sha256sum] = "a00109accc170f0bdb141fed3e393c565b6f5e072365c3bd58f5b062591560a3"
SRC_URI[jni-sys-0.4.1.sha256sum] = "c6377a88cb3910bee9b0fa88d4f42e1d2da8e79915598f65fb0c7ee14c878af2"
SRC_URI[jni-sys-macros-0.4.1.sha256sum] = "38c0b942f458fe50cdac086d2f946512305e5631e720728f2a61aabcd47a6264"
SRC_URI[js-sys-0.3.104.sha256sum] = "0e0c1080212aad755ea003d18543e8768dd432c48819efd73a7bf1e39b7a5a3a"
SRC_URI[json5-0.4.1.sha256sum] = "96b0db21af676c1ce64250b5f40f3ce2cf27e4e47cb91ed91eb6fe9350b430c1"
SRC_URI[keccak-0.1.6.sha256sum] = "cb26cec98cce3a3d96cbb7bced3c4b16e3d13f27ec56dbd62cbc8f39cfb9d653"
SRC_URI[keyed-set-1.1.0.sha256sum] = "89d255a6b6ecd77bb93ce91de984d7039bff7503f500eb4851a1269732f22baf"
SRC_URI[konst-0.2.20.sha256sum] = "128133ed7824fcd73d6e7b17957c5eb7bacb885649bd8c69708b2331a10bcefb"
SRC_URI[konst_macro_rules-0.2.19.sha256sum] = "a4933f3f57a8e9d9da04db23fb153356ecaf00cbd14aee46279c33dc80925c37"
SRC_URI[lazy_static-1.5.0.sha256sum] = "bbd2bcb4c963f2ddae06a2efc7e9f3591312473c50c6685e1f298068316e66fe"
SRC_URI[leb128-0.2.7.sha256sum] = "c83bff1d572d6b9aeef67ddfc8448e4a3737909cb28e81f97c791b9018703e52"
SRC_URI[libc-0.2.189.sha256sum] = "3eaf3ede3fee6db1a4c2ee091bf8a8b4dccdc6d17f656fb07896ee72867612f2"
SRC_URI[libloading-0.8.9.sha256sum] = "d7c4b02199fee7c5d21a5ae7d8cfa79a6ef5bb2fc834d6e9058e89c825efdc55"
SRC_URI[libm-0.2.16.sha256sum] = "b6d2cec3eae94f9f509c767b45932f1ada8350c4bdb85af2fcab4a3c14807981"
SRC_URI[libredox-0.1.20.sha256sum] = "28d0a00925a9f930d679b6789b721e3a7f9ed110f41b86d2497caa780c3a070a"
SRC_URI[linux-raw-sys-0.12.1.sha256sum] = "32a66949e030da00e8c7d4434b251670a91556f4144941d37452769c25d58a53"
SRC_URI[litemap-0.8.3.sha256sum] = "47d9d19d1d6efa0109d2f65ff4c85cddd50bd572e5a00127ab10987290bcefae"
SRC_URI[lock_api-0.4.14.sha256sum] = "224399e74b87b5f3557511d98dff8b14089b3dadafcab6bb93eab67d3aace965"
SRC_URI[lockfree-0.5.1.sha256sum] = "74ee94b5ad113c7cb98c5a040f783d0952ee4fe100993881d1673c2cb002dd23"
SRC_URI[log-0.4.33.sha256sum] = "0ceec5bc11778974d1bcb055b18002eba7f4b3518b6a0081b3af5f21666da9ad"
SRC_URI[lru-0.16.4.sha256sum] = "7f66e8d5d03f609abc3a39e6f08e4164ebf1447a732906d39eb9b99b7919ef39"
SRC_URI[lru-slab-0.1.2.sha256sum] = "112b39cec0b298b6c1999fee3e31427f74f676e4cb9879ed1a121b43661a4154"
SRC_URI[lz4_flex-0.10.0.sha256sum] = "8b8c72594ac26bfd34f2d99dfced2edfaddfe8a476e3ff2ca0eb293d925c4f83"
SRC_URI[mach2-0.4.3.sha256sum] = "d640282b302c0bb0a2a8e0233ead9035e3bed871f0b7e81fe4a1ec829765db44"
SRC_URI[matchers-0.2.0.sha256sum] = "d1525a2a28c7f4fa0fc98bb91ae755d1e2d1505079e05539e35bc876b5d65ae9"
SRC_URI[memchr-2.8.3.sha256sum] = "cf8baf1c55e62ffcace7a9f06f4bd9cd3f0c4beb022d3b367256b91b87513d98"
SRC_URI[memoffset-0.9.1.sha256sum] = "488016bfae457b036d996092f6cb448677611ce4449e970ceaf42695203f218a"
SRC_URI[minimal-lexical-0.2.1.sha256sum] = "68354c5c6bd36d73ff3feceb05efa59b6acb7626617f4962be322a825e61f79a"
SRC_URI[miniz_oxide-0.8.9.sha256sum] = "1fa76a2c86f704bdb222d66965fb3d63269ce38518b83cb0575fca855ebb6316"
SRC_URI[mio-1.2.2.sha256sum] = "30d65c71f1ce40ab09135ce117d742b9f8a19ff91a41a8b57ed50bc2de59c427"
SRC_URI[mio-serial-5.0.7.sha256sum] = "6d4ba3f20276f21b7cad3f1b54c97489cf096a3894fd627cc6951cb3abdd4c60"
SRC_URI[nanorand-0.7.0.sha256sum] = "6a51313c5820b0b02bd422f4b44776fbf47961755c74ce64afc73bfad10226c3"
SRC_URI[nix-0.26.4.sha256sum] = "598beaf3cc6fdd9a5dfb1630c2800c7acd31df7aaf0f565796fba2b53ca1af1b"
SRC_URI[nix-0.27.1.sha256sum] = "2eb04e9c688eff1c89d72b407f168cf79bb9e867a9d3323ed6c01519eb9cc053"
SRC_URI[nix-0.29.0.sha256sum] = "71e2746dc3a24dd78b3cfcb7be93368c6de9963d30f43a6a73998a9cf4b17b46"
SRC_URI[nix-0.31.3.sha256sum] = "cf20d2fde8ff38632c426f1165ed7436270b44f199fc55284c38276f9db47c3d"
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
SRC_URI[once_cell_polyfill-1.70.2.sha256sum] = "384b8ab6d37215f3c5301a95a4accb5d64aa607f1fcb26a11b5303878451b4fe"
SRC_URI[openssl-probe-0.2.1.sha256sum] = "7c87def4c32ab89d880effc9e097653c8da5d6ef28e6b539d313baaacfbafcbe"
SRC_URI[option-ext-0.2.0.sha256sum] = "04744f49eae99ab78e0d5c0b603ab218f515ea8cfe5a456d7629ad883a3b6e7d"
SRC_URI[owned-alloc-0.2.0.sha256sum] = "30fceb411f9a12ff9222c5f824026be368ff15dc2f13468d850c7d3f502205d6"
SRC_URI[parking-2.2.1.sha256sum] = "f38d5652c16fde515bb1ecef450ab0f6a219d619a7274976324d5e377f7dceba"
SRC_URI[parking_lot-0.12.5.sha256sum] = "93857453250e3077bd71ff98b6a65ea6621a19bb0f559a85248955ac12c45a1a"
SRC_URI[parking_lot_core-0.9.12.sha256sum] = "2621685985a2ebf1c516881c026032ac7deafcda1a2c9b7850dc81e3dfcb64c1"
SRC_URI[paste-1.0.15.sha256sum] = "57c0d7b74b563b49d38dae00a0c37d4d6de9b432382b2892f0574ddcae73fd0a"
SRC_URI[pem-3.0.6.sha256sum] = "1d30c53c26bc5b31a98cd02d20f25a7c8567146caf63ed593a9d87b2775291be"
SRC_URI[pem-rfc7468-0.7.0.sha256sum] = "88b39c9bfcfc231068454382784bb460aae594343fb030d46e9f50a645418412"
SRC_URI[percent-encoding-2.3.2.sha256sum] = "9b4f627cb1b25917193a259e49bdad08f671f8d9708acfd5fe0a8c1455d87220"
SRC_URI[pest-2.9.0.sha256sum] = "5a07a60cc7a4d00c91f95c685609d1d2f79050e6804b70ebedd7650f0b839bcf"
SRC_URI[pest_derive-2.9.0.sha256sum] = "b3a83744a5c8455b8b3e0dc5031362780a347c878bdd11584d1a8984228cc88d"
SRC_URI[pest_generator-2.9.0.sha256sum] = "e0cd3451aa3de60d4b9a1e736885e4dea6b31617598026f12256ad566d63304a"
SRC_URI[pest_meta-2.9.0.sha256sum] = "e04d3a0849e241d7dfce834c83b1c5edc8622009e8dd51a12ba1927c32f05496"
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
SRC_URI[portable-atomic-1.15.0.sha256sum] = "05c8b63e8d9609db387f0324918f81d68fe27748f084ef092fb35954d0539a85"
SRC_URI[portable-atomic-util-0.2.7.sha256sum] = "c2a106d1259c23fac8e543272398ae0e3c0b8d33c88ed73d0cc71b0f1d902618"
SRC_URI[potential_utf-0.1.6.sha256sum] = "d83eb9bc6d8e5cf568e7a1101d60ee05e81ed50ea106026f3d18deeb046d7661"
SRC_URI[powerfmt-0.2.0.sha256sum] = "439ee305def115ba05938db6eb1644ff94165c5ab5e9420d1c1bcedbba909391"
SRC_URI[ppv-lite86-0.2.21.sha256sum] = "85eae3c4ed2f50dcfe72643da4befc30deadb458a9b590d720cde2f2b1e97da9"
SRC_URI[proc-macro-crate-3.5.0.sha256sum] = "e67ba7e9b2b56446f1d419b1d807906278ffa1a658a8a5d8a39dcb1f5a78614f"
SRC_URI[proc-macro2-1.0.107.sha256sum] = "985e7ec9bb745e6ce6535b544d84d6cd6f7ad8bd711c398938ae983b91a766d9"
SRC_URI[prometheus-client-0.24.1.sha256sum] = "cca3d75b4566b9a29fe1ed623587fb058e826eb329a0be4b7c4da1ebb2d7a6ca"
SRC_URI[prometheus-client-derive-encode-0.5.0.sha256sum] = "9adf1691c04c0a5ff46ff8f262b58beb07b0dbb61f96f9f54f6cbd82106ed87f"
SRC_URI[quinn-0.11.11.sha256sum] = "0c1a41e437b6bbd489372cd4971de128e85c855f56c57f283d20ff016cf7c0a8"
SRC_URI[quinn-proto-0.11.16.sha256sum] = "2f4bfc015262b9df63c8845072ce59068853ff5872180c2ce2f13038b970e560"
SRC_URI[quinn-udp-0.5.15.sha256sum] = "35a133f956daabe89a61a685c2649f13d82d5aa4bd5d12d1277e1072a21c0694"
SRC_URI[quote-1.0.47.sha256sum] = "1fbf4db142a473a8d80c26bbf18454ed458bf8d26c8219c331daecfdbd079001"
SRC_URI[r-efi-5.3.0.sha256sum] = "69cdb34c158ceb288df11e18b4bd39de994f6657d83847bdffdbd7f346754b0f"
SRC_URI[r-efi-6.0.0.sha256sum] = "f8dcc9c7d52a811697d2151c701e0d08956f92b0e24136cf4cf27b57a6a0d9bf"
SRC_URI[rand-0.10.2.sha256sum] = "c7f5fa3a058cd35567ef9bfa5e75732bee0f9e4c55fa90477bef2dfcdbc4be80"
SRC_URI[rand-0.8.7.sha256sum] = "22f6172bdec972074665ed81ed53b71da00bfc44b65a753cfde883ec4c702a1a"
SRC_URI[rand-0.9.5.sha256sum] = "b9ef1d0d795eb7d84685bca4f72f3649f064e6641543d3a8c415898726a57b41"
SRC_URI[rand_chacha-0.3.1.sha256sum] = "e6c10a63a0fa32252be49d21e7709d4d4baf8d231c2dbce1eaa8141b9b127d88"
SRC_URI[rand_chacha-0.9.0.sha256sum] = "d3022b5f1df60f26e1ffddd6c66e8aa15de382ae63b3a0c1bfc0e4d3e3f325cb"
SRC_URI[rand_core-0.10.1.sha256sum] = "63b8176103e19a2643978565ca18b50549f6101881c443590420e4dc998a3c69"
SRC_URI[rand_core-0.6.4.sha256sum] = "ec0be4795e2f6a28069bec0b5ff3e2ac9bafc99e6a9a7dc3547996c5c816922c"
SRC_URI[rand_core-0.9.5.sha256sum] = "76afc826de14238e6e8c374ddcc1fa19e374fd8dd986b0d2af0d02377261d83c"
SRC_URI[rand_pcg-0.10.2.sha256sum] = "caa0f4137e1c0a72f4c651489402276c8e8e1cf081f3b0ba156d2cbeef09e86a"
SRC_URI[rcgen-0.14.9.sha256sum] = "091e7a8e7d86e6feb87a27ce8e2cba29d49eff9507afeebefab7eeb2ca667fb4"
SRC_URI[redox_syscall-0.5.18.sha256sum] = "ed2bf2547551a7053d6fdfafda3f938979645c44812fbfcda098faae3f1a362d"
SRC_URI[redox_users-0.5.2.sha256sum] = "a4e608c6638b9c18977b00b475ac1f28d14e84b27d8d42f70e0bf1e3dec127ac"
SRC_URI[ref-cast-1.0.26.sha256sum] = "216e8f773d7923bcba9ceb86a86c93cabb3903a11872fc3f138c49630e50b96d"
SRC_URI[ref-cast-impl-1.0.26.sha256sum] = "2c9283685feec7d69af75fb0e858d5e7378f33fe4fc699383b2916ab9273e03c"
SRC_URI[regex-1.13.1.sha256sum] = "f020237b6c8eed93db2e2cb53c00c60a8e1bc73da7d073199a1180401450218d"
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
SRC_URI[rustix-1.1.4.sha256sum] = "b6fe4565b9518b83ef4f91bb47ce29620ca828bd32cb7e408f0062e9930ba190"
SRC_URI[rustls-0.23.43.sha256sum] = "0283386ce02abc0151e1761d08802dfe86c173b0b494af5cbc086574e453da06"
SRC_URI[rustls-native-certs-0.8.4.sha256sum] = "dab5152771c58876a2146916e53e35057e1a4dfa2b9df0f0305b07f611fdea4d"
SRC_URI[rustls-pemfile-2.2.0.sha256sum] = "dce314e5fee3f39953d46bb63bb8a46d40c2f8fb7cc5a3b6cab2bde9721d6e50"
SRC_URI[rustls-pki-types-1.15.1.sha256sum] = "2f4925028c7eb5d1fcdaf196971378ed9d2c1c4efc7dc5d011256f76c99c0a96"
SRC_URI[rustls-platform-verifier-0.7.0.sha256sum] = "26d1e2536ce4f35f4846aa13bff16bd0ff40157cdb14cc056c7b14ba41233ba0"
SRC_URI[rustls-platform-verifier-android-0.1.1.sha256sum] = "f87165f0995f63a9fbeea62b64d10b4d9d8e78ec6d7d51fb2125fda7bb36788f"
SRC_URI[rustls-webpki-0.103.14.sha256sum] = "0527518605e68109d875e248ea259b6758801cf165e4b2c2733ae3b51f12535a"
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
SRC_URI[serde_with-3.22.0.sha256sum] = "ee78f1fbe43ac4a0e47aadb3dbd357b69eb0d3793e948624cd03dd2750ab1c0a"
SRC_URI[serde_with_macros-3.22.0.sha256sum] = "8705578779c2b6bd90d84d66eb2e206b708b1a4d7b9f17641b293545bf1c7e46"
SRC_URI[serde_yaml-0.9.34+deprecated.sha256sum] = "6a8b1a1a2ebf674015cc02edccce75287f1a0130d394307b36743c2f5d504b47"
SRC_URI[serialport-4.9.0.sha256sum] = "a4d91116f97173694f1642263b2ff837f80d933aa837e2314969f6728f661df3"
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
SRC_URI[siphasher-1.0.3.sha256sum] = "8ee5873ec9cce0195efcb7a4e9507a04cd49aec9c83d0389df45b1ef7ba2e649"
SRC_URI[slab-0.4.12.sha256sum] = "0c790de23124f9ab44544d7ac05d60440adc586479ce501c1d6d7da3cd8c9cf5"
SRC_URI[smallvec-1.15.2.sha256sum] = "8ed6a63f02c8539c91a8685a86f4099661ba3da017932f6ebbea6de3f0fa7c90"
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
SRC_URI[syn-3.0.3.sha256sum] = "53e9bae58849f64dfa4f5d5ae372c8341f7305f82a3868709269343628b659a3"
SRC_URI[synstructure-0.13.2.sha256sum] = "728a70f3dbaf5bab7f0c4b1ac8d7ae5ea60a4b5549c8a5914361c99147a709d2"
SRC_URI[talc-4.4.3.sha256sum] = "a3ae828aa394de34c7de08f522d1b86bd1c182c668d27da69caadda00590f26d"
SRC_URI[tempfile-3.27.0.sha256sum] = "32497e9a4c7b38532efcdebeef879707aa9f794296a4f0244f6f69e9bc8574bd"
SRC_URI[thiserror-1.0.69.sha256sum] = "b6aaf5339b578ea85b50e080feb250a3e8ae8cfcdff9a461c9ec2904bc923f52"
SRC_URI[thiserror-2.0.20.sha256sum] = "ec86235f5fcc2a73650310756d2ac5b138a5780bbbdfae3eeccec992c435ba4f"
SRC_URI[thiserror-impl-1.0.69.sha256sum] = "4fee6c4efc90059e10f81e6d42c60a18f76588c3d74cb83a0b242a2b6c7504c1"
SRC_URI[thiserror-impl-2.0.20.sha256sum] = "bc04cd3e1236dd4a98afca4569f2deb3f120e5422a4023be2cb683f8486292af"
SRC_URI[thread-priority-1.2.0.sha256sum] = "cfe075d7053dae61ac5413a34ea7d4913b6e6207844fd726bdd858b37ff72bf5"
SRC_URI[thread_local-1.1.10.sha256sum] = "1ad99c4c6d32803332c548b1af0540b357b3f5fc0be8f6c6bfe8b2e6ae784070"
SRC_URI[time-0.3.55.sha256sum] = "cdb87b95ec50ddfa440816d227a17b2ccbdda963a316a727fda0fc4334f7d134"
SRC_URI[time-core-0.1.9.sha256sum] = "9e1c906769ad99c88eaa54e728060edef082f8e358ff32030cb7c7d315e81109"
SRC_URI[time-macros-0.2.32.sha256sum] = "7e689342a48d2ea927c87ea50cabf8594854bf940e9310208848d680d668ed85"
SRC_URI[tinystr-0.8.4.sha256sum] = "b1e27c91459209c2986af3dcf603a5a74a4368754ce37414f59acc971167f643"
SRC_URI[tinyvec-1.12.0.sha256sum] = "bb4ebadaa0af04fab11ae01eb5f9fdb5f9c5b875506e210e71c07873528baa7f"
SRC_URI[tinyvec_macros-0.1.1.sha256sum] = "1f3ccbac311fea05f86f61904b462b55fb3df8837a366dfc601a0161d0532f20"
SRC_URI[tls-listener-0.11.2.sha256sum] = "1461056cc1ef47003f7ee16e4cef3741068d4c7f6b627bfce49b7c00c120a530"
SRC_URI[token-cell-2.1.1.sha256sum] = "fb48920ae769b58126c8c93269805011c793201f95fde28b479b81a9a531bbde"
SRC_URI[tokio-1.53.1.sha256sum] = "202caea871b69668250d242070849eb495be178ed697a3e98aebce5bc81a0bed"
SRC_URI[tokio-macros-2.7.2.sha256sum] = "78773a2a397f451582ce068015985c33193cf6dea8b74d2a639fe457b2f07b0e"
SRC_URI[tokio-rustls-0.26.4.sha256sum] = "1729aa945f29d91ba541258c8df89027d5792d85a8841fb65e8bf0f4ede4ef61"
SRC_URI[tokio-serial-5.5.0.sha256sum] = "dd00f5f8b1e01c3e5afccd9e42ed80c2ad2df6d007877f29f8592c62e69cd116"
SRC_URI[tokio-tungstenite-0.24.0.sha256sum] = "edc5f74e248dc973e0dbb7b74c7e0d6fcc301c694ff50049504004ef4d0cdcd9"
SRC_URI[tokio-util-0.7.19.sha256sum] = "494815d09bf52b5548659851081238f0ca39ff638363907596da739561c62c52"
SRC_URI[tokio-vsock-0.5.0.sha256sum] = "2e336ac4b36df625d5429a735dd5847732fe5f62010e3ce0c50f3705d44730f8"
SRC_URI[toml-0.9.12+spec-1.1.0.sha256sum] = "cf92845e79fc2e2def6a5d828f0801e29a2f8acc037becc5ab08595c7d5e9863"
SRC_URI[toml_datetime-0.7.5+spec-1.1.0.sha256sum] = "92e1cfed4a3038bc5a127e35a2d360f145e1f4b971b551a2ba5fd7aedf7e1347"
SRC_URI[toml_datetime-1.1.1+spec-1.1.0.sha256sum] = "3165f65f62e28e0115a00b2ebdd37eb6f3b641855f9d636d3cd4103767159ad7"
SRC_URI[toml_edit-0.25.13+spec-1.1.0.sha256sum] = "6975367e4d2ef766d86af01ffad14b622fecc8d4357a998fbc4deb6e9bacaf9b"
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
SRC_URI[unescaper-0.1.10.sha256sum] = "7285e83a80ce76f5e7bce79fa41f68d78ba62d1003cf27bf748ab24413808cf4"
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
SRC_URI[uuid-1.24.0.sha256sum] = "bf3923a6f5c4c6382e0b653c4117f48d631ea17f38ed86e2a828e6f7412f5239"
SRC_URI[validated_struct-2.2.0.sha256sum] = "869a93e8a7286e339e1128630051d82babbcd75d585975af07b9f3327220e60e"
SRC_URI[validated_struct_macros-2.2.0.sha256sum] = "8c44ce98e7227a04eeb4cf9c784109a5c9710e54849ceb4f09f8597247897f1e"
SRC_URI[valuable-0.1.1.sha256sum] = "ba73ea9cf16a25df0c8caa16c51acb937d5712a8429db78a3ee29d5dcacd3a65"
SRC_URI[vec_map-0.8.2.sha256sum] = "f1bddf1187be692e79c5ffeab891132dfb0f236ed36a43c7ed39f1165ee20191"
SRC_URI[version_check-0.9.5.sha256sum] = "0b928f33d975fc6ad9f86c8f283853ad26bdd5b10b7f1542aa2fa15e2289105a"
SRC_URI[vsock-0.4.0.sha256sum] = "2dfb6e7a74830912f1f4a7655227c9ded1ea4e9136676311fedf54bedb412f35"
SRC_URI[walkdir-2.5.0.sha256sum] = "29790946404f91d9c5d06f9874efddea1dc06c5efe94541a7d6863108e3a5e4b"
SRC_URI[wasi-0.11.1+wasi-snapshot-preview1.sha256sum] = "ccf3ec651a847eb01de73ccad15eb7d99f80485de043efb2f370cd654f4ea44b"
SRC_URI[wasip2-1.0.4+wasi-0.2.12.sha256sum] = "b67efb37e106e55ce722a510d6b5f9c17f083e5fc79afc2badeb12cc313d9487"
SRC_URI[wasm-bindgen-0.2.127.sha256sum] = "1b70935747edd64d89de3efa29d73789b806c15798f8e7dca4d8ac356b50ce70"
SRC_URI[wasm-bindgen-macro-0.2.127.sha256sum] = "77775f8f3f7217702089053b94958f8f54061a3f663417df76e19cbdcca29bc1"
SRC_URI[wasm-bindgen-macro-support-0.2.127.sha256sum] = "e11d33f857dc2fb11b8bc75aee111aa9cbeb12cd9f25efd3d4c2a3dd4e235284"
SRC_URI[wasm-bindgen-shared-0.2.127.sha256sum] = "7ef64dbcc55df09c7e5a46182d181c2cfa3e925f3da937ea764728b4bbb9dcbf"
SRC_URI[web-time-1.1.0.sha256sum] = "5a6580f308b1fad9207618087a65c04e7a10bc77e02c8e84e9b00dd4b12fa0bb"
SRC_URI[webpki-root-certs-1.0.9.sha256sum] = "b96554aa2acc8ccdb7e1c9a58a7a68dd5d13bccc69cd124cb09406db612a1c9b"
SRC_URI[webpki-roots-1.0.9.sha256sum] = "7dcd9d09a39985f5344844e66b0c530a33843579125f23e21e9f0f220850f22a"
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
SRC_URI[yoke-derive-0.8.2.sha256sum] = "de844c262c8848816172cef550288e7dc6c7b7814b4ee56b3e1553f275f1858e"
SRC_URI[z-serial-0.3.1.sha256sum] = "1660dfc9f90480610f94c285a9a967b49cd2f57b3b1267d9bd7fd5d4f57c36c8"
SRC_URI[zenoh-1.10.0.sha256sum] = "6f7ad636296bfdb8a86bbbc9bae1b6a57f0e77b715769f99885ca2ca2368c73a"
SRC_URI[zenoh-buffers-1.10.0.sha256sum] = "a81e52197e18bc75587c566df732726aee6e0a1c8779d7a2ff609f461f6b1a07"
SRC_URI[zenoh-codec-1.10.0.sha256sum] = "31b792ce46854f252af31869030224c2da6bd9d72a1cd2812e29b457444a07b1"
SRC_URI[zenoh-collections-1.10.0.sha256sum] = "42b897fae0ddce178e3e58d3bb9ca131dd2a301dd869ebded37d9e1f3784aac0"
SRC_URI[zenoh-config-1.10.0.sha256sum] = "1b39224e3029571e0572f88590eb9078bcd60dedc6381ad1a5c8ad5fb7a474bf"
SRC_URI[zenoh-core-1.10.0.sha256sum] = "9335e8f6509fcbec68a073372c13a69ba90c3a284a86427257607d75586b6344"
SRC_URI[zenoh-crypto-1.10.0.sha256sum] = "1b496e8c984260c4d80ce58b42956081dc8656f0b875766e5ae0f8e39510fdee"
SRC_URI[zenoh-ext-1.10.0.sha256sum] = "c0fa8d798c8bc3aa0a4f769d0b67a1219bb2b9bfb3a173fce0b063071808b86a"
SRC_URI[zenoh-keyexpr-1.10.0.sha256sum] = "af891f8d9f52c3e8617712b65b08fa9ae02f1f1b57e2739ff194bb65df1255df"
SRC_URI[zenoh-link-1.10.0.sha256sum] = "04f796c9df0ef7736d140363507498d8c5d0acf621c158113f122aa992979d3d"
SRC_URI[zenoh-link-commons-1.10.0.sha256sum] = "4dd110109f4f89450491bd8942152020f632eb86d8fac10349a186185f654873"
SRC_URI[zenoh-link-quic-1.10.0.sha256sum] = "1038b5c97aeca14bbba31d6bed629bd2d354488850c27eddde07726e90ce9a48"
SRC_URI[zenoh-link-quic_datagram-1.10.0.sha256sum] = "97b2cddd28955877b7eceedfaf09c801aac31ab8f0cac32c936f31358f5af133"
SRC_URI[zenoh-link-serial-1.10.0.sha256sum] = "cdcef77379116fefdb3b538731df649642c3cdb9a4d950bda4f587b360c35abc"
SRC_URI[zenoh-link-tcp-1.10.0.sha256sum] = "4801cc6fb608b5069f3ea6b82484c5f727019764e90e14838fe6930a9dffd9a1"
SRC_URI[zenoh-link-tls-1.10.0.sha256sum] = "a123220c7aedf285cfeaaaf2f05d88787a164a92fa5c64c09156b861feb16134"
SRC_URI[zenoh-link-udp-1.10.0.sha256sum] = "6785a0b6f0b94131c002a8358aaef3eb99f5ab0e0cd444f28d1f1fac38bd4091"
SRC_URI[zenoh-link-unixpipe-1.10.0.sha256sum] = "e06444c6e150086537c756440ac1c3db5d52826cd40703a7c4ad7f28cde8a953"
SRC_URI[zenoh-link-unixsock_stream-1.10.0.sha256sum] = "e000c7d101a3d2e5e3350a19ead2f7914276583d9d3a5787fde005465a1271d7"
SRC_URI[zenoh-link-vsock-1.10.0.sha256sum] = "8c04cf35aeca1bc6f07f1596dc70c66e003fedf6edf9aa338706e73be3fba98f"
SRC_URI[zenoh-link-ws-1.10.0.sha256sum] = "be8a5dc8ab07d0ccb46b187f58b9ee5e38a1cacaaf780ad38398f6c2669dfb53"
SRC_URI[zenoh-macros-1.10.0.sha256sum] = "0c813ccde166cf0527402d46615257e0d152140e66f8ecd685721f9399251407"
SRC_URI[zenoh-plugin-trait-1.10.0.sha256sum] = "95cd9d698675a5b2f3e958a35df56f6d60f0388669158055b436c0cbe5357ad8"
SRC_URI[zenoh-protocol-1.10.0.sha256sum] = "ce5505e2569421d3cb6792d4b3d9a6589d04add3bf34c0a7c37c03c2573b79ad"
SRC_URI[zenoh-result-1.10.0.sha256sum] = "cf23203517d6dfe04393c42053093c7cffd9e385015e21c85dafaff9a342cccf"
SRC_URI[zenoh-runtime-1.10.0.sha256sum] = "ddf72c7310a090b0b22496649274661de8a17ca0d0674af8f72f184a3ed78664"
SRC_URI[zenoh-shm-1.10.0.sha256sum] = "d8f49ff9d36be3fdeada23103c5ba10d6e7159269bd8b07fb744448005fb5734"
SRC_URI[zenoh-stats-1.10.0.sha256sum] = "f610d551359e0d8864138d4c4c11ed8e3c9f6991717f4eef198ab323b4ff01f4"
SRC_URI[zenoh-sync-1.10.0.sha256sum] = "9792a8fa9b0f30ebabd3e6b278441178b6832462e959388aa18f92a93527935b"
SRC_URI[zenoh-task-1.10.0.sha256sum] = "fbb419757b0c6e824bebf34959302e6edf5a7caea4e725de88007a56f3ba4d4d"
SRC_URI[zenoh-transport-1.10.0.sha256sum] = "fc431ec1c066d7047c601ae4b4d4a359882c5464cd9c4ff3fe905ff6e10017af"
SRC_URI[zenoh-util-1.10.0.sha256sum] = "3f99b13044636f453bcb49ca520db4b1400c8e444fdf578e63a1aad0ed9004e0"
SRC_URI[zerocopy-0.8.56.sha256sum] = "556764e583adb45a9f8d413c2a147fa7e8d821e48e12b14fd560b607998b75eb"
SRC_URI[zerocopy-derive-0.8.56.sha256sum] = "f2ab42fc20575779bd240faa45f94a74256f755c0fa9e89f0ede20d91d0cdfc1"
SRC_URI[zerofrom-0.1.8.sha256sum] = "0ec05a11813ea801ff6d75110ad09cd0824ddba17dfe17128ea0d5f68e6c5272"
SRC_URI[zerofrom-derive-0.1.7.sha256sum] = "11532158c46691caf0f2593ea8358fed6bbf68a0315e80aae9bd41fbade684a1"
SRC_URI[zeroize-1.9.0.sha256sum] = "e13c156562582aa81c60cb29407084cdb54c4164760106ab78e6c5b0858cf64e"
SRC_URI[zerotrie-0.2.5.sha256sum] = "4ea269c3bd32f0a32c321907a2ae912ba6f4649bb0fc764a15627e99a7095a3f"
SRC_URI[zerovec-0.11.7.sha256sum] = "94b5c6b5976d66c1d703c4fd17d3f5e43c8cedaacf604961b171adc7130896d8"
SRC_URI[zerovec-derive-0.11.4.sha256sum] = "47402523226a02bfe5230160dc3ccc089aa6f6f19e7fcbb4e6f824bbb1b4aa62"
SRC_URI[zmij-1.0.23.sha256sum] = "29666d0abbfad1e3dc4dcf6144730dd3a3ab225bbbdac83319345b1b44ccfc1b"
