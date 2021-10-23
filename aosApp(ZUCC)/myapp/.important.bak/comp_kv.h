//================This is split line================
// KEYWORD: COMPONENT NAME IS  kv

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_KV 1 // type: bool

// #endif

// #if !AOS_CREATE_PROJECT

// description:Key-value Storage
// #define AOS_COMP_KV 0 // type: bool

// #endif

// description:The garbage collection task priority
// #define KV_CONFIG_TASK_PRIORITY 32 // type: int

// description:The garbage collection task stack size (bytes)
// #define KV_CONFIG_TASK_STACK_SIZE 1024 // type: int

// description:The maximum length of key buffer (bytes)
// #define KV_CONFIG_MAX_KEY_LEN 128 // type: int

// description:The maximum length of value buffer (bytes)
// #define KV_CONFIG_MAX_VAL_LEN 512 // type: int

// description:Key-value Storage Security Support
// #define KV_CONFIG_SECURE_SUPPORT 0 // type: bool

// #if KV_CONFIG_SECURE_SUPPORT = 1

// description:Key-value Storage Security Level
// #define KV_CONFIG_SECURE_LEVEL 1 // type: int

// description:Key-value Storage security Implementation
// #define KV_CONFIG_SECURE_CRYPT_IMPL 1 // type: bool

// #endif

