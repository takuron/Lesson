/* KEYWORD: PART1 USER DEFINED CONFIGURATION */
/* Put user defined macro here */

#define RHINO_CONFIG_TICKS_PER_SECOND 200


/* KEYWORD: PART2 COMPONENTS CONFIGURATION */
/* Put configuration defined in Config.in files of components here.
 It's better to modify the configuration by menuconfig, and the 
 compiler will copy it here automatically.*/
//================This is split line================
// KEYWORD: COMPONENT NAME IS  ls_hal

// description:Link Security Hardware Interface
// #define AOS_COMP_LS_HAL 0 

// #if AOS_COMP_LS_HAL

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  vfs

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_VFS 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Virtual File System
// #define AOS_COMP_VFS 0 

// #endif

// description:The maximum number of VFS device nodes
#define VFS_CONFIG_DEVICE_NODES 25

// description:The default offset of VFS file descriptor
#define VFS_CONFIG_FD_OFFSET 512

// description:The maximum length of device path (bytes)
#define VFS_CONFIG_PATH_MAX 256

// description:The maximum number of VFS files
#define VFS_CONFIG_MAX_FILE_NUM 50

// description:Current Directory Recording Support
// #define VFS_CONFIG_CURRENT_DIRECTORY_ENABLE 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  kernel_init

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_KERNEL_INIT 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Initialize Function
// #define AOS_COMP_KERNEL_INIT 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  activation

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_ACTIVATION 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  alicrypto

// description:Crypto Support
// #define AOS_COMP_ALICRYPTO 0 

// #if AOS_COMP_ALICRYPTO

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  rhino

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_RHINO 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Kernel Core (rhino)
// #define AOS_COMP_RHINO 1 

// #endif

// #if 0

// description:RHINO_CONFIG_SEM
// #define RHINO_CONFIG_SEM 1 

// description:RHINO_CONFIG_QUEUE
// #define RHINO_CONFIG_QUEUE 1 

// description:RHINO_CONFIG_BUF_QUEUE
// #define RHINO_CONFIG_BUF_QUEUE 1 

// description:RHINO_CONFIG_WORKQUEUE
// #define RHINO_CONFIG_WORKQUEUE 0 

// #if RHINO_CONFIG_WORKQUEUE = 1

// description:RHINO_CONFIG_WORKQUEUE_STACK_SIZE
// #define RHINO_CONFIG_WORKQUEUE_STACK_SIZE 512 

// description:RHINO_CONFIG_WORKQUEUE_TASK_PRIO
// #define RHINO_CONFIG_WORKQUEUE_TASK_PRIO 20 

// #endif

// description:RHINO_CONFIG_TIMER
// #define RHINO_CONFIG_TIMER 1 

// #if RHINO_CONFIG_TIMER = 1

// description:RHINO_CONFIG_TIMER_TASK_STACK_SIZE
// #define RHINO_CONFIG_TIMER_TASK_STACK_SIZE 200 

// description:RHINO_CONFIG_TIMER_TASK_PRI
// #define RHINO_CONFIG_TIMER_TASK_PRI 5 

// #endif

// description:RHINO_CONFIG_MM_TLF
// #define RHINO_CONFIG_MM_TLF 1 

// #if RHINO_CONFIG_MM_TLF = 1

// description:RHINO_CONFIG_MM_DEBUG
// #define RHINO_CONFIG_MM_DEBUG 0 

// #endif

// description:RHINO_CONFIG_SCHED_RR
// #define RHINO_CONFIG_SCHED_RR 1 

// #if RHINO_CONFIG_SCHED_RR = 1

// description:RHINO_CONFIG_TIME_SLICE_DEFAULT
// #define RHINO_CONFIG_TIME_SLICE_DEFAULT 50 

// #endif

// description:RHINO_CONFIG_TICKS_PER_SECOND
// #define RHINO_CONFIG_TICKS_PER_SECOND 100 

// description:RHINO_CONFIG_PRI_MAX
// #define RHINO_CONFIG_PRI_MAX 62 

// description:RHINO_CONFIG_TASK_STACK_OVF_CHECK
// #define RHINO_CONFIG_TASK_STACK_OVF_CHECK 1 

// description:RHINO_CONFIG_IDLE_TASK_STACK_SIZE
// #define RHINO_CONFIG_IDLE_TASK_STACK_SIZE 100 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  Experiment5

// description:HelloWorld
#define AOS_APP_EXPERIMENT5 1

// #if AOS_APP_EXPERIMENT5

// description:Firmware Version
#define SYSINFO_APP_VERSION "app-1.0.0-20200214.140831"

// #endif

// description:CAN NOT BE MODIFIED
#define AOS_CREATE_PROJECT 1

// description:CAN NOT BE MODIFIED
#define AOS_BUILD_BOARD "esp32devkitc"

// description:CAN NOT BE MODIFIED
#define AOS_BUILD_APP "Experiment5"

// description:CAN NOT BE MODIFIED
// #define AOS_SDK_PATH "" 

// description:CAN NOT BE MODIFIED
// #define USER_APP_PATH "" 

// #if ((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) || ((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER))

// #endif

// #if (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && USE_ITLS) || (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER) && USE_ITLS))

// #endif

// #if (((EN_BLE_HOST&&!bt_mesh_standalone_deploy)))

// #endif

// #if (((EN_BLE_HOST&&!bt_mesh_standalone_deploy)))

// #endif

// #if ((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) || ((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER))

// #endif

// #if ((ULOG_CONFIG_POP_FS) || (ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD))

// #endif

// #if ((ULOG_CONFIG_FS_FATFS_FLASH || ULOG_CONFIG_FS_FATFS_SD))

// #endif

// #if (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && USE_ITLS) || (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER) && USE_ITLS))

// #endif

// #if (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && USE_ITLS) || (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER) && USE_ITLS))

// #endif

// #if (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && USE_ITLS) || (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER) && USE_ITLS))

// #endif

// #if (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && SUPPORT_TLS || COAP_DTLS_SUPPORT) || (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER) && SUPPORT_TLS || COAP_DTLS_SUPPORT))

// #endif

// #if (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER))

// #endif

// #if ((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) || ((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER))

// #endif

// #if ((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD))

// #endif

// #if ((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD))

// #endif

// #if ((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) || ((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER))

// #endif

// #if (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && USE_ITLS) || (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER) && USE_ITLS))

// #endif

// #if (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && USE_ITLS) || (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER) && USE_ITLS))

// #endif

// #if (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && USE_ITLS) || (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER) && USE_ITLS))

// #endif

// #if (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && USE_ITLS) || (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER) && USE_ITLS))

// #endif

// #if (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && USE_ITLS) || (((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD) && ENABLE_DYNAMIC_REGISTER) && USE_ITLS))

// #endif

// #if ((ULOG_CONFIG_FS_SPIFFS))

// #endif

// #if ((ULOG_CONFIG_UPLOAD || ULOG_CONFIG_POP_CLOUD))

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libkm_tee

// description:Root of trust, TEE-KM
// #define AOS_COMP_LIBKM_TEE 0 

// #if AOS_COMP_LIBKM_TEE

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_wrappers

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_SDK_WRAPPERS 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:Linkkit HAL for AliOS Things
// #define AOS_COMP_SDK_WRAPPERS 0 

// #endif

// description:support TLS
// #define SUPPORT_TLS 1 

// #if SUPPORT_TLS

// description:CAN NOT BE MODIFIED
// #define HAL_TLS_DNS_ENHANCE 1 

// #endif

// description:use MBEDTLS, depends on SUPPORT_TLS
// #define USE_MBEDTLS 1 

// description:use iTLS, depends on !USE_MBEDTLS
// #define USE_ITLS 0 

// description:support DTLS
// #define COAP_DTLS_SUPPORT 0 

// description:support save tls ticket, depends on  SUPPORT_TLS
// #define TLS_SAVE_TICKET 0 

// description:CAN NOT BE MODIFIED
// #define HAL_KV 1 

// description:CAN NOT BE MODIFIED
// #define FORCE_SSL_VERIFY 1 

// description:CAN NOT BE MODIFIED
// #define BUILD_AOS 1 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  itls

// description:Lightweight TLS Support by ID2
// #define AOS_COMP_ITLS 0 

// #if AOS_COMP_ITLS

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_infra

// description:PLATFORM_HAS_STDINT
// #define PLATFORM_HAS_STDINT 1 

// description:PLATFORM_HAS_DYNMEM
// #define PLATFORM_HAS_DYNMEM 1 

// description:CAN NOT BE MODIFIED
// #define INFRA_STRING 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_NET 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_LIST 0 

// description:FEATURE_INFRA_NETWORK_PAYLOAD
// #define INFRA_LOG_NETWORK_PAYLOAD 1 

// description:FEATURE_INFRA_LOG, depends on INFRA_LOG
// #define INFRA_LOG 1 

// description:CAN NOT BE MODIFIED
// #define INFRA_LOG_ALL_MUTED 0 

// description:MUTE LEVEL of FLOW  (6)
// #define INFRA_LOG_MUTE_FLW 1 

// description:MUTE LEVEL of DEBUG (5)
// #define INFRA_LOG_MUTE_DBG 1 

// description:MUTE LEVEL of INFO  (4)
// #define INFRA_LOG_MUTE_INF 0 

// description:MUTE LEVEL of WARN  (3)
// #define INFRA_LOG_MUTE_WRN 0 

// description:MUTE LEVEL of ERROR (2)
// #define INFRA_LOG_MUTE_ERR 0 

// description:MUTE LEVEL of CRIT  (1)
// #define INFRA_LOG_MUTE_CRT 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_MEM_STATS 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_TIMER 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_JSON_PARSER 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_CJSON 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_MD5 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_SHA1 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_SHA256 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_REPORT 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_HTTPC 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_MEM_STATS 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_COMPAT 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_PREAUTH 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_AES_BUILDIN 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_AES_ROM_TABLES 0 

// description:CAN NOT BE MODIFIED
// #define INFRA_AES 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  chip_code

// description:Chip_code
// #define AOS_COMP_CHIP_CODE 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_dynreg

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define DYNAMIC_REGISTER 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:FEATURE_DYNAMIC_REGISTER
// #define DYNAMIC_REGISTER 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libkm

// description:Root of trust, Soft-KM
// #define AOS_COMP_LIBKM 0 

// #if AOS_COMP_LIBKM

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  osal_aos

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_OSAL_AOS 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:AOS API Support
// #define AOS_COMP_OSAL_AOS 1 

// #endif

// description:RHINO
#define OSAL_RHINO 1

// description:FREERTOS, depends on kernel_core = freertos
// #define OSAL_FREERTOS 0 

// description:CAN NOT BE MODIFIED
#define OSAL_CONFIG "rhino"

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libkm_se

// description:Root of trust, SE-KM
// #define AOS_COMP_LIBKM_SE 0 

// #if AOS_COMP_LIBKM_SE

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_sign

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_SDK_SIGN 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_SDK_SIGN 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  mbedtls

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_MBEDTLS 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Mbed TLS 2.16.0
// #define AOS_COMP_MBEDTLS 0 

// #endif

// description:mbedtls user extra configuration
// #define MBEDTLS_CONFIG_USER_CONFIG 0 

// description:mbedtls user extra configuration header file
// #define MBEDTLS_CONFIG_USER_FILE "" 

// description:Cryptographic algorithms support
#define MBEDTLS_CONFIG_CRYPTO 1

// #if MBEDTLS_CONFIG_CRYPTO

// description:MD5 hash algorithm
// #define MBEDTLS_CONFIG_CRYPTO_MD5 0 

// description:SHA1 hash algorithm
#define MBEDTLS_CONFIG_CRYPTO_SHA1 1

// description:SHA224 and SHA256 hash algorithm
#define MBEDTLS_CONFIG_CRYPTO_SHA256 1

// description:SHA384 and SHA512 hash algorithm
// #define MBEDTLS_CONFIG_CRYPTO_SHA512 0 

// description:RIPEMD160 hash algorithm
// #define MBEDTLS_CONFIG_CRYPTO_RIPEMD160 0 

// description:ARIA block cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_ARIA 0 

// description:DES/3DES block cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_DES 0 

// description:AES(128/192/256) block cipher algorithm
#define MBEDTLS_CONFIG_CRYPTO_AES 1

// description:Use precomputed AES tables stored in ROM, depends on MBEDTLS_CONFIG_CRYPTO_AES
// #define MBEDTLS_CONFIG_CRYPTO_AES_ROM_TABLES 0 

// description:Use less ROM/RAM for AES tables, depends on MBEDTLS_CONFIG_CRYPTO_AES
// #define MBEDTLS_CONFIG_CRYPTO_AES_FEWER_TABLES 0 

// description:Cipher Block Chaining mode (CBC) for symmetric block ciphers
#define MBEDTLS_CONFIG_CRYPTO_MODE_CBC 1

// description:Cipher Feedback mode (CFB) for symmetric block ciphers
// #define MBEDTLS_CONFIG_CRYPTO_MODE_CFB 0 

// description:Counter Block Cipher mode (CTR) for symmetric block ciphers
// #define MBEDTLS_CONFIG_CRYPTO_MODE_CTR 0 

// description:Output Feedback mode (OFB) for symmetric block ciphers
// #define MBEDTLS_CONFIG_CRYPTO_MODE_OFB 0 

// description:Xor-encrypt-xor with ciphertext stealing mode (XTS) for AES, depends on MBEDTLS_CONFIG_CRYPTO_AES
// #define MBEDTLS_CONFIG_CRYPTO_MODE_XTS 0 

// description:Galois/Counter Mode (GCM) for AES or Camellia, depends on MBEDTLS_CONFIG_CRYPTO_AES || MBEDTLS_CONFIG_CRYPTO_CAMELLIA
// #define MBEDTLS_CONFIG_CRYPTO_MODE_GCM 0 

// description:Counter with CBC-MAC (CCM) mode for 128-bit block cipher, depends on MBEDTLS_CONFIG_CRYPTO_AES || MBEDTLS_CONFIG_CRYPTO_CAMELLIA
// #define MBEDTLS_CONFIG_CRYPTO_MODE_CCM 0 

// description:ARC4 stream cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_ARC4 0 

// description:Blowfish block cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_BLOWFISH 0 

// description:Camellia block cipher algorithm
// #define MBEDTLS_CONFIG_CRYPTO_CAMELLIA 0 

// description:XTEA block cipher
// #define MBEDTLS_CONFIG_CRYPTO_XTEA 0 

// description:ChaCha20 stream cipher (RFC7539)
// #define MBEDTLS_CONFIG_CRYPTO_CHACHA20 0 

// description:Poly1305 MAC algorithm (RFC7539)
// #define MBEDTLS_CONFIG_CRYPTO_POLY1305 0 

// description:ChaCha20-Poly1305 AEAD algorithm (RFC7539)
// #define MBEDTLS_CONFIG_CRYPTO_CHACHAPOLY 0 

// #endif # MBEDTLS_CONFIG_CRYPTO

// description:X.509 certificate support
#define MBEDTLS_CONFIG_X509 1

// description:TLS/DTLS protocol support, depends on !AOS_COMP_MAL
#define MBEDTLS_CONFIG_TLS 1

// #if MBEDTLS_CONFIG_TLS

// description:TLS 1.2 (and DTLS 1.2 if DTLS is enabled) protocol support
#define MBEDTLS_CONFIG_TLS1_2 1

// description:DTLS protocol support
#define MBEDTLS_CONFIG_DTLS 1

// description:Enable debug functions in TLS/DTLS
// #define MBEDTLS_CONFIG_TLS_DEBUG 0 

// description:TLS/DTLS maximum incoming/outgoing content length
#define MBEDTLS_CONFIG_TLS_MAX_CONTENT_LEN 4096

// #endif # MBEDTLS_CONFIG_TLS

// description:CAN NOT BE MODIFIED
// #define MBEDTLS_CONFIG_SELFTEST 0 

// description:Error string support
// #define MBEDTLS_CONFIG_ERROR 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  board_esp32devkitc

// description:ESP32DevKitc
#define AOS_BOARD_ESP32DEVKITC 1

// #if AOS_BOARD_ESP32DEVKITC

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_UART 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_GPIO 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_I2C 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_FLASH 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_ADC 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_DAC 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_PWM 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_RTC 1

// description:CAN NOT BE MODIFIED
#define BSP_SUPPORT_WDG 1

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_certs

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_SDK_CERT 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_SDK_CERT 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  irot

// description:Root of Trust - MCU, SE and TEE
// #define AOS_COMP_IROT 0 

// #if AOS_COMP_IROT

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  mcu_esp32

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_MCU_ESP32 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_MCU_ESP32 0 

// #endif

// #if AOS_MCU_ESP32

// description:CAN NOT BE MODIFIED
// #define OSAL_CONFIG "" 

// description:mesh config
// #define MESH_CONFIG 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  yloop

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_YLOOP 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:http
// #define AOS_COMP_YLOOP 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  uagent

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_UAGENT 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:uagent
// #define AOS_COMP_UAGENT 0 

// #endif

// description:Payload Length uAgent Support
// #define UAGENT_INFO_PAYLOAD_SIZE 1200 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  fatfs

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_FATFS 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:fatfs
// #define AOS_COMP_FATFS 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  netmgr

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_NETMGR 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:netmgr
// #define AOS_COMP_NETMGR 0 

// #endif

// #if pvtest

// description:Enable prevalidate test
// #define PREVALIDATE_TEST 1 

// #endif

// #if AOS_COMP_NETMGR

// description:Enable Netmgr with Cellular
// #define AOS_NET_WITH_CELLULAR 0 

// description:Enable Netmgr with Wi-Fi
#define AOS_NET_WITH_WIFI 1

// description:Enable Netmgr with Ethernet
// #define AOS_NET_WITH_ETH 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  cjson

// description:cJSON library
// #define AOS_COMP_CJSON 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  bt_common

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_BT_COMMON 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_BT_COMMON 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  kv

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_KV 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:Key-value Storage
// #define AOS_COMP_KV 0 

// #endif

// description:The garbage collection task priority
#define KV_CONFIG_TASK_PRIORITY 32

// description:The garbage collection task stack size (bytes)
#define KV_CONFIG_TASK_STACK_SIZE 1024

// description:The maximum length of key buffer (bytes)
#define KV_CONFIG_MAX_KEY_LEN 128

// description:The maximum length of value buffer (bytes)
#define KV_CONFIG_MAX_VAL_LEN 512

// description:Key-value Storage Security Support
// #define KV_CONFIG_SECURE_SUPPORT 0 

// #if KV_CONFIG_SECURE_SUPPORT = 1

// description:Key-value Storage Security Level
// #define KV_CONFIG_SECURE_LEVEL 1 

// description:Key-value Storage security Implementation
// #define KV_CONFIG_SECURE_CRYPT_IMPL 1 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  lwip

// #if CONFIG_AOS_LWIP

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_LWIP 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:lwip
// #define AOS_COMP_LWIP 0 

// #endif

// #if AOS_COMP_LWIP

// description:AF_PACKET Support
// #define AF_PACKET_ENABLED 0 

// #if 0

// description:SNMP Support
// #define SNMP_ENABLED 0 

// description:HTTPD Support
// #define HTTPD_ENABLED 0 

// #endif

// description:IPERF Support
// #define IPERF_ENABLED 0 

// #if 0

// description:SNTP Support
// #define SNTP_ENABLED 0 

// description:MDNS Support
// #define MDNS_ENABLED 0 

// description:NETBIOSNS Support
// #define NETBIOSNS 0 

// #endif

// description:TFTP Support
// #define TFTP_ENABLED 0 

// #if TFTP_ENABLED

// description:TFTP_FS Support, depends on AOS_COMP_VFS
// #define TFTP_FS_ENABLED 0 

// #endif

// description:TELNETD Support
// #define TELNETD_ENABLED 0 

// description:DHCPD Support
// #define DHCPD_ENABLED 0 

// description:PING Support
// #define PING_ENABLED 0 

// description:SENDFILE Support
// #define SENDFILE_ENABLED 0 

// description:DNS Command Support
// #define DNSCLI_ENABLED 0 

// description:ARP Command Support
// #define ARPCLI_ENABLED 0 

// description:LSFD Command Support
// #define LSFDCLI_ENABLED 0 

// #endif

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  lib_rbtree

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_LIB_RBTREE 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:rbtree code
// #define AOS_COMP_LIB_RBTREE 1 

// #endif

// #if AOS_COMP_LIB_RBTREE

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  ulog

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_COMP_ULOG 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:uLog Support
// #define AOS_COMP_ULOG 0 

// #endif

// description:Level Stop Filter of Default Direction(UART for RTOS)
#define ULOG_CONFIG_STOP_FILTER_DEFAULT 6

// description:Max Length of Log Text
#define ULOG_CONFIG_LOG_SIZE 256

// description:Support syslog Time Format when Log
// #define ULOG_CONFIG_SYSLOG_TIME_FORMAT 0 

// description:Enable Rich Details for Log
// #define ULOG_CONFIG_SYNC_LOG_DETAILS 0 

// #if ULOG_CONFIG_SYNC_LOG_DETAILS

// description:Enable Color Font for More Details
// #define ULOG_CONFIG_SYNC_DETAIL_COLOR 0 

// description:Enable Log Absolute Path under Detail Mode
// #define ULOG_CONFIG_SYNC_ABS_PATH 0 

// #endif

// description:Switch on Pop Out Log to Cloud
// #define ULOG_CONFIG_POP_CLOUD 0 

// #if ULOG_CONFIG_POP_CLOUD

// description:Level Stop Filter to Cloud
// #define ULOG_CONFIG_STOP_FILTER_CLOUD 0 

// #endif

// description:Switch on Pop Out Log Into File System
// #define ULOG_CONFIG_POP_FS 0 

// #if ULOG_CONFIG_POP_FS

// description:Level Stop Filter of FS
// #define ULOG_CONFIG_STOP_FILTERFS ULOG_CONFIG_FS_SPIFFS 

// description:SPIFFS
// #define ULOG_CONFIG_FS_SPIFFS 0 

// description:SD Card
// #define ULOG_CONFIG_FS_FATFS_SD 0 

// description:FATFS Flash
// #define ULOG_CONFIG_FS_FATFS_FLASH 0 

// description:Max uLog Files on File System
// #define ULOG_CONFIG_LOCAL_FILE_CNT 5 

// description:Max uLog File Size
// #define ULOG_CONFIG_LOCAL_FILE_SIZE 4096 

// description:Reserved Log Temporary When FS is not Ready
// #define ULOG_CONFIG_RESERVED_FS 0 

// #if ULOG_CONFIG_RESERVED_FS

// description:Count of Reserved Log When FS is not Ready
// #define ULOG_CONFIG_RESERVED_FS_SIZE 64 

// #endif

// description:Upload Log File via http
// #define ULOG_CONFIG_UPLOAD 0 

// #endif

// description:Switch on Pop Out Log via Syslog UDP
// #define ULOG_CONFIG_POP_UDP 0 

// #if ULOG_CONFIG_POP_UDP

// description:Level Stop Filter of UDP
// #define ULOG_CONFIG_STOP_FILTER_UDP 4 

// #endif

// description:Using Async Mode to Log on Default Direct
// #define ULOG_CONFIG_DEFAULT_DIR_ASYNC 0 

// description:CAN NOT BE MODIFIED
// #define ULOG_CONFIG_ASYNC 0 

// #if ULOG_CONFIG_ASYNC

// description:Stack Depth of Log Task Under Async Mode
// #define ULOG_CONFIG_LOG_ROUTINE_TASK_STACK_DEPTH 3072 

// description:Default Size of Buffer Queue Under Async Mode
// #define ULOG_CONFIG_ASYNC_BUF_SIZE 5120 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  libiot_mqtt

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_SDK_MQTT 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:FEATURE_MQTT_COMM_ENABLED
// #define AOS_COMP_SDK_MQTT 0 

// #endif

// description:FEATURE_MQTT_DEFAULT_IMPL
// #define MQTT_DEFAULT_IMPL 1 

// description:CAN NOT BE MODIFIED
// #define MQTT_PRE_AUTH 0 

// description:FEATURE_MQTT_DIRECT
// #define MQTT_DIRECT 1 

// description:CAN NOT BE MODIFIED
// #define MQTT_AUTO_SUBSCRIBE 1 

// description:FEATURE_ASYNC_PROTOCOL_STACK
// #define ASYNC_PROTOCOL_STACK 0 

// description:FEATURE_ENABLE_DYNAMIC_REGISTER
// #define ENABLE_DYNAMIC_REGISTER 0 

// description:FEATURE_MQTT_DYNAMIC_REGISTER, depends on DYNAMIC_REGISTER
// #define MQTT_DYNAMIC_REGISTER 0 

// description:CAN NOT BE MODIFIED
// #define MQTT_COMM_ENABLED 1 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  network

// description:CAN NOT BE MODIFIED
#define AOS_COMP_NETWORK 1

// #if AOS_COMP_NETWORK

// description:CAN NOT BE MODIFIED
#define CONFIG_AOS_TCPIP 1

// description:CAN NOT BE MODIFIED
// #define CONFIG_VENDOR_TCPIP 0 

// description:CAN NOT BE MODIFIED
// #define CONFIG_LINUX_TCPIP 0 

// description:CAN NOT BE MODIFIED
// #define CONFIG_NO_TCPIP 0 

// description:ENABLE AOS TCP/IP
#define CONFIG_AOS_LWIP 1

// description:ENABLE VENDOR TCP/IP
// #define CONFIG_VENDOR_LWIP 0 

// description:ENABLE LINUX TCP/IP
// #define CONFIG_LINUX_IPSTACK 0 

// description:DISABLE TCP/IP
// #define CONFIG_NO_LWIP 0 

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  bt_host

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_BT_HOST 1 

// #endif

// #if !AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_BT_HOST 0 

// #endif

// description:Enable BLE SMP
// #define CONFIG_BT_SMP 0 

//================This is split line================
// KEYWORD: COMPONENT NAME IS  arch_xtensa_lx6

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
#define AOS_ARCH_XTENSA_LX6 1

// #endif

// #if !AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_ARCH_XTENSA_LX6 0 

// #endif

// #if AOS_ARCH_XTENSA_LX6

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  id2

// description:Link Security ID2
// #define AOS_COMP_ID2 0 

// #if AOS_COMP_ID2

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  ls_osa

// description:Link Secuirty OS Interface
// #define AOS_COMP_LS_OSA 0 

// #if AOS_COMP_LS_OSA

// #endif

//================This is split line================
// KEYWORD: COMPONENT NAME IS  spiffs

// description:spiffs
// #define AOS_COMP_SPIFFS 0 

// #if AOS_COMP_SPIFFS

// #endif

