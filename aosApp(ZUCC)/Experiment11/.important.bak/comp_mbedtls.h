//================This is split line================
// KEYWORD: COMPONENT NAME IS  mbedtls

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_MBEDTLS 1 // type: bool

// #endif

// #if !AOS_CREATE_PROJECT

// description:Mbed TLS 2.16.0
// #define AOS_COMP_MBEDTLS 0 // type: bool

// #endif

// description:mbedtls user extra configuration
// #define MBEDTLS_CONFIG_USER_CONFIG 0 // type: bool

// description:mbedtls user extra configuration header file
// #define MBEDTLS_CONFIG_USER_FILE "" // type: string

// description:Cryptographic algorithms support
// #define MBEDTLS_CONFIG_CRYPTO 1 // type: bool

// #if MBEDTLS_CONFIG_CRYPTO

// description:MD5 hash algorithm
// #define MBEDTLS_CONFIG_CRYPTO_MD5 0 // type: bool

// description:SHA1 hash algorithm
// #define MBEDTLS_CONFIG_CRYPTO_SHA1 1 // type: bool

// description:SHA224 and SHA256 hash algorithm
// #define MBEDTLS_CONFIG_CRYPTO_SHA256 1 // type: bool

// description:SHA384 and SHA512 hash algorithm
// #define MBEDTLS_CONFIG_CRYPTO_SHA512 0 // type: bool

// description:RIPEMD160 hash algorithm
// #define MBEDTLS_CONFIG_CRYPTO_RIPEMD160 0 // type: bool

// description:ARIA block cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_ARIA 0 // type: bool

// description:DES/3DES block cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_DES 0 // type: bool

// description:AES(128/192/256) block cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_AES 1 // type: bool

// description:Use precomputed AES tables stored in ROM, depends on MBEDTLS_CONFIG_CRYPTO_AES
// #define MBEDTLS_CONFIG_CRYPTO_AES_ROM_TABLES 0 // type: bool

// description:Use less ROM/RAM for AES tables, depends on MBEDTLS_CONFIG_CRYPTO_AES
// #define MBEDTLS_CONFIG_CRYPTO_AES_FEWER_TABLES 0 // type: bool

// description:Cipher Block Chaining mode (CBC) for symmetric block ciphers
// #define MBEDTLS_CONFIG_CRYPTO_MODE_CBC 1 // type: bool

// description:Cipher Feedback mode (CFB) for symmetric block ciphers
// #define MBEDTLS_CONFIG_CRYPTO_MODE_CFB 0 // type: bool

// description:Counter Block Cipher mode (CTR) for symmetric block ciphers
// #define MBEDTLS_CONFIG_CRYPTO_MODE_CTR 0 // type: bool

// description:Output Feedback mode (OFB) for symmetric block ciphers
// #define MBEDTLS_CONFIG_CRYPTO_MODE_OFB 0 // type: bool

// description:Xor-encrypt-xor with ciphertext stealing mode (XTS) for AES, depends on MBEDTLS_CONFIG_CRYPTO_AES
// #define MBEDTLS_CONFIG_CRYPTO_MODE_XTS 0 // type: bool

// description:Galois/Counter Mode (GCM) for AES or Camellia, depends on MBEDTLS_CONFIG_CRYPTO_AES || MBEDTLS_CONFIG_CRYPTO_CAMELLIA
// #define MBEDTLS_CONFIG_CRYPTO_MODE_GCM 0 // type: bool

// description:Counter with CBC-MAC (CCM) mode for 128-bit block cipher, depends on MBEDTLS_CONFIG_CRYPTO_AES || MBEDTLS_CONFIG_CRYPTO_CAMELLIA
// #define MBEDTLS_CONFIG_CRYPTO_MODE_CCM 0 // type: bool

// description:ARC4 stream cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_ARC4 0 // type: bool

// description:Blowfish block cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_BLOWFISH 0 // type: bool

// description:Camellia block cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_CAMELLIA 0 // type: bool

// description:XTEA block cipher
// #define MBEDTLS_CONFIG_CRYPTO_XTEA 0 // type: bool

// description:ChaCha20 stream cipher (RFC7539)
// #define MBEDTLS_CONFIG_CRYPTO_CHACHA20 0 // type: bool

// description:Poly1305 MAC algorithm (RFC7539)
// #define MBEDTLS_CONFIG_CRYPTO_POLY1305 0 // type: bool

// description:ChaCha20-Poly1305 AEAD algorithm (RFC7539)
// #define MBEDTLS_CONFIG_CRYPTO_CHACHAPOLY 0 // type: bool

// #endif # MBEDTLS_CONFIG_CRYPTO

// description:X.509 certificate support
// #define MBEDTLS_CONFIG_X509 1 // type: bool

// description:TLS/DTLS protocol support, depends on !AOS_COMP_MAL
// #define MBEDTLS_CONFIG_TLS 1 // type: bool

// #if MBEDTLS_CONFIG_TLS

// description:TLS 1.2 (and DTLS 1.2 if DTLS is enabled) protocol support
// #define MBEDTLS_CONFIG_TLS1_2 1 // type: bool

// description:DTLS protocol support
// #define MBEDTLS_CONFIG_DTLS 1 // type: bool

// description:Enable debug functions in TLS/DTLS
// #define MBEDTLS_CONFIG_TLS_DEBUG 0 // type: bool

// description:TLS/DTLS maximum incoming/outgoing content length
// #define MBEDTLS_CONFIG_TLS_MAX_CONTENT_LEN 4096 // type: int

// #endif # MBEDTLS_CONFIG_TLS

// description:CAN NOT BE MODIFIED
// #define MBEDTLS_CONFIG_SELFTEST 0 // type: bool

// description:Error string support
// #define MBEDTLS_CONFIG_ERROR 0 // type: bool

