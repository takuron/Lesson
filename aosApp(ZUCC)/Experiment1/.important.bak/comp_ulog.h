//================This is split line================
// KEYWORD: COMPONENT NAME IS  ulog

// #if AOS_CREATE_PROJECT

// description:CAN NOT BE MODIFIED
// #define AOS_COMP_ULOG 1 // type: bool

// #endif

// #if !AOS_CREATE_PROJECT

// description:uLog Support
// #define AOS_COMP_ULOG 0 // type: bool

// #endif

// description:Level Stop Filter of Default Direction(UART for RTOS)
// #define ULOG_CONFIG_STOP_FILTER_DEFAULT 6 // type: int

// description:Max Length of Log Text
// #define ULOG_CONFIG_LOG_SIZE 256 // type: int

// description:Support syslog Time Format when Log
// #define ULOG_CONFIG_SYSLOG_TIME_FORMAT 0 // type: bool

// description:Enable Rich Details for Log
// #define ULOG_CONFIG_SYNC_LOG_DETAILS 0 // type: bool

// #if ULOG_CONFIG_SYNC_LOG_DETAILS

// description:Enable Color Font for More Details
// #define ULOG_CONFIG_SYNC_DETAIL_COLOR 0 // type: bool

// description:Enable Log Absolute Path under Detail Mode
// #define ULOG_CONFIG_SYNC_ABS_PATH 0 // type: bool

// #endif

// description:Switch on Pop Out Log to Cloud
// #define ULOG_CONFIG_POP_CLOUD 0 // type: bool

// #if ULOG_CONFIG_POP_CLOUD

// description:Level Stop Filter to Cloud
// #define ULOG_CONFIG_STOP_FILTER_CLOUD 0 // type: int

// #endif

// description:Switch on Pop Out Log Into File System
// #define ULOG_CONFIG_POP_FS 0 // type: bool

// #if ULOG_CONFIG_POP_FS

// description:Level Stop Filter of FS
// #define ULOG_CONFIG_STOP_FILTERFS ULOG_CONFIG_FS_SPIFFS // type: int

// description:SPIFFS
// #define ULOG_CONFIG_FS_SPIFFS 0 // type: bool

// description:SD Card
// #define ULOG_CONFIG_FS_FATFS_SD 0 // type: bool

// description:FATFS Flash
// #define ULOG_CONFIG_FS_FATFS_FLASH 0 // type: bool

// description:Max uLog Files on File System
// #define ULOG_CONFIG_LOCAL_FILE_CNT 5 // type: int

// description:Max uLog File Size
// #define ULOG_CONFIG_LOCAL_FILE_SIZE 4096 // type: int

// description:Reserved Log Temporary When FS is not Ready
// #define ULOG_CONFIG_RESERVED_FS 0 // type: bool

// #if ULOG_CONFIG_RESERVED_FS

// description:Count of Reserved Log When FS is not Ready
// #define ULOG_CONFIG_RESERVED_FS_SIZE 64 // type: int

// #endif

// description:Upload Log File via http
// #define ULOG_CONFIG_UPLOAD 0 // type: bool

// #endif

// description:Switch on Pop Out Log via Syslog UDP
// #define ULOG_CONFIG_POP_UDP 0 // type: bool

// #if ULOG_CONFIG_POP_UDP

// description:Level Stop Filter of UDP
// #define ULOG_CONFIG_STOP_FILTER_UDP 4 // type: int

// #endif

// description:Using Async Mode to Log on Default Direct
// #define ULOG_CONFIG_DEFAULT_DIR_ASYNC 0 // type: bool

// description:CAN NOT BE MODIFIED
// #define ULOG_CONFIG_ASYNC 0 // type: bool

// #if ULOG_CONFIG_ASYNC

// description:Stack Depth of Log Task Under Async Mode
// #define ULOG_CONFIG_LOG_ROUTINE_TASK_STACK_DEPTH 3072 // type: int

// description:Default Size of Buffer Queue Under Async Mode
// #define ULOG_CONFIG_ASYNC_BUF_SIZE 5120 // type: int

// #endif

