AOS_SDK_MAKEFILES           		+= /home/takuron/aosApp/Experiment10/aos.mk /home/takuron/aosApp/Experiment10/board/esp32devkitc/aos.mk /home/takuron/aiot/core/osal/aos/aos.mk /home/takuron/aiot/platform/mcu/esp32/aos.mk /home/takuron/aiot/core/init/aos.mk /home/takuron/aiot/components/network/aos.mk /home/takuron/aiot/core/rhino/aos.mk /home/takuron/aiot/components/network/lwip/aos.mk /home/takuron/aiot/components/network/netmgr/aos.mk /home/takuron/aiot/components/security/mbedtls/aos.mk /home/takuron/aiot/platform/arch/xtensa/lx6/aos.mk /home/takuron/aiot/components/dm/ulog/aos.mk /home/takuron/aiot/core/rbtree/aos.mk /home/takuron/aiot/core/kv/aos.mk /home/takuron/aiot/components/utility/yloop/aos.mk /home/takuron/aiot/core/vfs/aos.mk
TOOLCHAIN_NAME            		:= GCC
AOS_SDK_LDFLAGS             		+= -Wl,--gc-sections -Wl,-Os -Wl,--cref -nostdlib -nostdlib -Lplatform/mcu/esp32/ -lc -lgcc -lstdc++ -lgcov -lm -L platform/mcu/esp32/bsp/ld
AOS_SDK_LDS_FILES                     += platform/mcu/esp32/bsp/ld/esp32.ld.S platform/mcu/esp32/bsp/ld/esp32.common.ld platform/mcu/esp32/bsp/ld/esp32.rom.ld platform/mcu/esp32/bsp/ld/esp32.peripherals.ld platform/mcu/esp32/bsp/ld/esp32.rom.spiram_incompatible_fns.ld
AOS_SDK_LDS_INCLUDES                  += 
AOS_SDK_2NDBOOT_SUPPORT                 += 
AOS_SDK_IMG1_XIP1_LD_FILE                 += 
AOS_SDK_IMG2_XIP2_LD_FILE                 += 
AOS_SDK_CFLAGS			+= -DMCU_FAMILY=\"mcu_esp32\" -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\" -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32
AOS_SDK_ASMFLAGS			+= 
AOS_SDK_LINK_SCRIPT         		+= 
AOS_SDK_LINK_SCRIPT_CMD    	 	+= 
AOS_SDK_PREBUILT_LIBRARIES 	 	+= /home/takuron/aiot/platform/mcu/esp32/lib/libesp32.a /home/takuron/aiot/platform/mcu/esp32/lib/libspi_flash.a /home/takuron/aiot/platform/mcu/esp32/lib/libsoc.a /home/takuron/aiot/platform/mcu/esp32/lib/libbootloader_support.a /home/takuron/aiot/platform/mcu/esp32/lib/libhal.a /home/takuron/aiot/platform/mcu/esp32/lib/libnewlib.a /home/takuron/aiot/platform/mcu/esp32/lib/libvfs.a /home/takuron/aiot/platform/mcu/esp32/lib/liblog.a /home/takuron/aiot/platform/mcu/esp32/lib/libdriver.a /home/takuron/aiot/platform/mcu/esp32/lib/libcontainer.a /home/takuron/aiot/platform/mcu/esp32/lib/librtc.a /home/takuron/aiot/platform/mcu/esp32/lib/libcoexist.a /home/takuron/aiot/platform/mcu/esp32/lib/libcore.a /home/takuron/aiot/platform/mcu/esp32/lib/libnet80211.a /home/takuron/aiot/platform/mcu/esp32/lib/libpp.a /home/takuron/aiot/platform/mcu/esp32/lib/libwpa.a /home/takuron/aiot/platform/mcu/esp32/lib/libwpa2.a /home/takuron/aiot/platform/mcu/esp32/lib/libwps.a /home/takuron/aiot/platform/mcu/esp32/lib/libphy.a /home/takuron/aiot/platform/mcu/esp32/lib/libnvs_flash.a /home/takuron/aiot/platform/mcu/esp32/lib/libcxx.a /home/takuron/aiot/platform/mcu/esp32/lib/libstdcc++-cache-workaround.a /home/takuron/aiot/platform/mcu/esp32/lib/libwpa_supplicant.a /home/takuron/aiot/platform/mcu/esp32/lib/libapp_update.a /home/takuron/aiot/platform/mcu/esp32/lib/libmesh.a
AOS_SDK_CERTIFICATES       	 	+= 
AOS_SDK_PRE_APP_BUILDS      		+= 
AOS_SDK_LINK_FILES          		+=                                
AOS_SDK_INCLUDES           	 	+=                                                           -I/home/takuron/aosApp/Experiment10/board/esp32devkitc/. -I/home/takuron/aiot/platform/mcu/esp32/bsp/include -I/home/takuron/aiot/platform/mcu/esp32/bsp/include/esp32/include -I/home/takuron/aiot/platform/mcu/esp32/bsp/include/soc/esp32/include -I/home/takuron/aiot/platform/mcu/esp32/bsp/include/soc/include -I/home/takuron/aiot/platform/mcu/esp32/bsp/include/driver/include -I/home/takuron/aiot/platform/mcu/esp32/bsp/include/log/include -I/home/takuron/aiot/platform/mcu/esp32/bsp/include/nvs_flash/include -I/home/takuron/aiot/platform/mcu/esp32/bsp/include/spi_flash/include -I/home/takuron/aiot/platform/mcu/esp32/bsp/include/container/include -I/home/takuron/aiot/platform/mcu/esp32/bsp/include/app_update/include -I/home/takuron/aiot/platform/mcu/esp32/bsp/fatfs/include -I/home/takuron/aiot/platform/mcu/esp32/bsp/fatfs/ff/include -I/home/takuron/aiot/platform/mcu/esp32/espos/include -I/home/takuron/aiot/core/init/include -I/home/takuron/aiot/core/rhino/include -I/home/takuron/aiot/core/rhino/./ -I/home/takuron/aiot/components/network/lwip/include -I/home/takuron/aiot/components/network/lwip/port/include -I/home/takuron/aiot/components/network/netmgr/../../../include/network/netmgr -I/home/takuron/aiot/components/network/netmgr/../../../include/network -I/home/takuron/aiot/components/network/netmgr/../../../include -I/home/takuron/aiot/components/security/mbedtls/aos/include/ -I/home/takuron/aiot/components/security/mbedtls/include -I/home/takuron/aiot/platform/arch/xtensa/lx6/include -I/home/takuron/aiot/platform/arch/xtensa/lx6/include/frxt -I/home/takuron/aiot/platform/arch/xtensa/lx6/../../mcu/esp32/espidf/components/esp32/include -I/home/takuron/aiot/components/dm/ulog/../../../include/dm/ulog -I/home/takuron/aiot/core/rbtree/include -I/home/takuron/aiot/core/kv/include -I/home/takuron/aiot/core/vfs/. -I/home/takuron/aiot/core/vfs/include -I/home/takuron/aiot/include -I/home/takuron/aiot/include/hal -I/home/takuron/aiot/include/bus -I/home/takuron/aiot/include/cli -I/home/takuron/aiot/include/hal/soc -I/home/takuron/aiot/include/dm -I/home/takuron/aiot/include/service -I/home/takuron/aiot/include/wireless -I/home/takuron/aiot/include/utility -I/home/takuron/aiot/include/peripherals -I/home/takuron/aiot/include/network -I/home/takuron/aiot/include/wireless/bluetooth -I/home/takuron/aiot/include/wireless/bluetooth/breeze -I/home/takuron/aiot/components/wireless/bluetooth/ble/host/include -I/home/takuron/aiot/components/wireless/bluetooth/ble/host/profile -I/home/takuron/aiot/include/wireless/bluetooth/blemesh -I/home/takuron/aiot/include/network/coap -I/home/takuron/aiot/include/network/hal -I/home/takuron/aiot/include/network/http -I/home/takuron/aiot/include/network/lwm2m -I/home/takuron/aiot/include/network/umesh -I/home/takuron/aiot/include/network/athost -I/home/takuron/aiot/include/network/sal -I/home/takuron/aiot/include/network/netmgr -I/home/takuron/aiot/include/network/rtp -I/home/takuron/aiot/include/utility/yloop
AOS_SDK_DEFINES             		+=             -DBUILD_BIN -DAOS_NO_WIFI -DLOG_LOCAL_LEVEL=4 -DCLI_CONFIG_SUPPORT_BOARD_CMD=1 -DOSAL_RHINO -DAOS_HAL -DAOS_FATFS -DAOS_COMP_RHINO -DMBEDTLS_CONFIG_FILE=\"mbedtls_config.h\" -DAOS_COMP_KV -DAOS_LOOP -DAOS_COMP_VFS
COMPONENTS                		:= Experiment10 board_esp32devkitc osal_aos mcu_esp32 kernel_init network rhino lwip netmgr mbedtls arch_xtensa_lx6 ulog lib_rbtree kv yloop vfs
PLATFORM_DIRECTORY        		:= esp32devkitc
APP_FULL                  		:= Experiment10
PLATFORM                  		:= esp32devkitc
HOST_MCU_FAMILY                  	:= mcu_esp32
SUPPORT_MBINS                          := no
APP                       		:= Experiment10
HOST_OPENOCD              		:= esp32
JTAG              		        := jlink_swd
HOST_ARCH                 		:= xtensa
NO_BUILD_BOOTLOADER           	:= 
NO_BOOTLOADER_REQUIRED         	:= 
Experiment10_LOCATION         := /home/takuron/aosApp/Experiment10/
board_esp32devkitc_LOCATION         := /home/takuron/aosApp/Experiment10/board/esp32devkitc/
osal_aos_LOCATION         := /home/takuron/aiot/core/osal/aos/
mcu_esp32_LOCATION         := /home/takuron/aiot/platform/mcu/esp32/
kernel_init_LOCATION         := /home/takuron/aiot/core/init/
network_LOCATION         := /home/takuron/aiot/components/network/
rhino_LOCATION         := /home/takuron/aiot/core/rhino/
lwip_LOCATION         := /home/takuron/aiot/components/network/lwip/
netmgr_LOCATION         := /home/takuron/aiot/components/network/netmgr/
mbedtls_LOCATION         := /home/takuron/aiot/components/security/mbedtls/
arch_xtensa_lx6_LOCATION         := /home/takuron/aiot/platform/arch/xtensa/lx6/
ulog_LOCATION         := /home/takuron/aiot/components/dm/ulog/
lib_rbtree_LOCATION         := /home/takuron/aiot/core/rbtree/
kv_LOCATION         := /home/takuron/aiot/core/kv/
yloop_LOCATION         := /home/takuron/aiot/components/utility/yloop/
vfs_LOCATION         := /home/takuron/aiot/core/vfs/
Experiment10_SOURCES          += helloworld.c
board_esp32devkitc_SOURCES          += board.c
osal_aos_SOURCES          += common.c kv.c rhino.c vfs.c
mcu_esp32_SOURCES          += aos/heap_wrapper.c aos/hook_impl.c aos/soc_impl.c bsp/entry.c bsp/fatfs/diskio.c bsp/fatfs/diskio_rawflash.c bsp/fatfs/fatfs.c bsp/fatfs/ff/ff.c bsp/fatfs/ff/ffunicode.c bsp/heap_oram.c bsp/setboot_cli.c bsp/tcpip_adapter_lwip.c bsp/wlanif.c espos/platform/rhino/espos_aos_vcall.c espos/platform/rhino/espos_eventgroup.c espos/platform/rhino/espos_misc.c espos/platform/rhino/espos_mutex.c espos/platform/rhino/espos_queue.c espos/platform/rhino/espos_scheduler.c espos/platform/rhino/espos_semaphore.c espos/platform/rhino/espos_spinlock.c espos/platform/rhino/espos_task.c espos/platform/rhino/espos_time.c espos/platform/rhino/espos_timer.c hal/adc.c hal/dac.c hal/flash.c hal/gpio.c hal/i2c.c hal/misc.c hal/pwm.c hal/rtc.c hal/uart.c hal/wdg.c hal/wifi_port.c
kernel_init_SOURCES          += aos_init.c
network_SOURCES          += 
rhino_SOURCES          += k_buf_queue.c k_cfs.c k_dyn_mem_proc.c k_err.c k_event.c k_idle.c k_mm.c k_mm_blk.c k_mm_debug.c k_mutex.c k_obj.c k_pend.c k_queue.c k_ringbuf.c k_sched.c k_sem.c k_spin_lock.c k_stats.c k_sys.c k_task.c k_task_sem.c k_tick.c k_time.c k_timer.c k_workqueue.c
lwip_SOURCES          += api/api_lib.c api/api_msg.c api/err.c api/netbuf.c api/netdb.c api/netifapi.c api/sockets.c api/tcpip.c core/def.c core/dns.c core/inet_chksum.c core/init.c core/ip.c core/ipv4/autoip.c core/ipv4/dhcp.c core/ipv4/etharp.c core/ipv4/icmp.c core/ipv4/igmp.c core/ipv4/ip4.c core/ipv4/ip4_addr.c core/ipv4/ip4_frag.c core/ipv6/dhcp6.c core/ipv6/ethip6.c core/ipv6/icmp6.c core/ipv6/inet6.c core/ipv6/ip6.c core/ipv6/ip6_addr.c core/ipv6/ip6_frag.c core/ipv6/mld6.c core/ipv6/nd6.c core/mem.c core/memp.c core/netif.c core/pbuf.c core/pkt_print.c core/raw.c core/stats.c core/sys.c core/tcp.c core/tcp_in.c core/tcp_out.c core/timeouts.c core/udp.c netif/ethernet.c port/sys_arch.c
netmgr_SOURCES          += hal/wifi.c src/netmgr.c src/netmgr_wifi.c
mbedtls_SOURCES          += aos/library/net_sockets.c aos/library/platform.c aos/library/threading_alt.c library/aes.c library/aesni.c library/asn1parse.c library/asn1write.c library/base64.c library/bignum.c library/certs.c library/cipher.c library/cipher_wrap.c library/cmac.c library/ctr_drbg.c library/dhm.c library/ecdh.c library/ecdsa.c library/ecjpake.c library/ecp.c library/ecp_curves.c library/entropy.c library/entropy_poll.c library/havege.c library/hkdf.c library/hmac_drbg.c library/md.c library/md2.c library/md4.c library/md_wrap.c library/memory_buffer_alloc.c library/nist_kw.c library/oid.c library/padlock.c library/pem.c library/pk.c library/pk_wrap.c library/pkcs11.c library/pkcs12.c library/pkcs5.c library/pkparse.c library/pkwrite.c library/platform.c library/platform_util.c library/rsa.c library/rsa_internal.c library/sha1.c library/sha256.c library/ssl_cache.c library/ssl_ciphersuites.c library/ssl_cli.c library/ssl_cookie.c library/ssl_srv.c library/ssl_ticket.c library/ssl_tls.c library/threading.c library/timing.c library/version.c library/version_features.c library/x509.c library/x509_create.c library/x509_crl.c library/x509_crt.c library/x509_csr.c library/x509write_crt.c library/x509write_csr.c
arch_xtensa_lx6_SOURCES          += backtrace.c panic.c port.c portasm.S xtensa_context.S xtensa_init.c xtensa_intr.c xtensa_intr_asm.S xtensa_panic.S xtensa_vectors.S
ulog_SOURCES          += ulog.c ulog_init.c ulog_utility.c
lib_rbtree_SOURCES          += rbtree.c
kv_SOURCES          += kv.c kv_adapt.c kv_cli.c
yloop_SOURCES          += hal/loop_hal_alios.c src/device.c src/local_event.c src/select.c src/workqueue.c src/yloop.c
vfs_SOURCES          += vfs.c vfs_adapt.c vfs_file.c vfs_inode.c
Experiment10_CHECK_HEADERS    += 
board_esp32devkitc_CHECK_HEADERS    += 
osal_aos_CHECK_HEADERS    += 
mcu_esp32_CHECK_HEADERS    += 
kernel_init_CHECK_HEADERS    += 
network_CHECK_HEADERS    += 
rhino_CHECK_HEADERS    += 
lwip_CHECK_HEADERS    += 
netmgr_CHECK_HEADERS    += 
mbedtls_CHECK_HEADERS    += 
arch_xtensa_lx6_CHECK_HEADERS    += 
ulog_CHECK_HEADERS    += 
lib_rbtree_CHECK_HEADERS    += 
kv_CHECK_HEADERS    += 
yloop_CHECK_HEADERS    += 
vfs_CHECK_HEADERS    += 
Experiment10_INCLUDES         := -I/home/takuron/aosApp/Experiment10/./ -I/home/takuron/aosApp/Experiment10/./
board_esp32devkitc_INCLUDES         := 
osal_aos_INCLUDES         := 
mcu_esp32_INCLUDES         := 
kernel_init_INCLUDES         := 
network_INCLUDES         := 
rhino_INCLUDES         := 
lwip_INCLUDES         := 
netmgr_INCLUDES         := -I/home/takuron/aiot/components/network/netmgr/src/include -I/home/takuron/aiot/components/network/netmgr/src -I/home/takuron/aiot/components/network/netmgr/src/include -I/home/takuron/aiot/components/network/netmgr/src
mbedtls_INCLUDES         := 
arch_xtensa_lx6_INCLUDES         := -I/home/takuron/aiot/platform/arch/xtensa/lx6/../../mcu/esp32/espidf/components/freertos/include -I/home/takuron/aiot/platform/arch/xtensa/lx6/../../mcu/esp32/espidf/components/soc/esp32/include -I/home/takuron/aiot/platform/arch/xtensa/lx6/../../mcu/esp32/espidf/components/log/include -I/home/takuron/aiot/platform/arch/xtensa/lx6/../../mcu/esp32/espidf/components/driver/include
ulog_INCLUDES         := -I/home/takuron/aiot/components/dm/ulog/include -I/home/takuron/aiot/components/dm/ulog/include
lib_rbtree_INCLUDES         := 
kv_INCLUDES         := 
yloop_INCLUDES         := -I/home/takuron/aiot/components/utility/yloop/include -I/home/takuron/aiot/components/utility/yloop/hal -I/home/takuron/aiot/components/utility/yloop/include -I/home/takuron/aiot/components/utility/yloop/hal
vfs_INCLUDES         := 
Experiment10_DEFINES          := 
board_esp32devkitc_DEFINES          := 
osal_aos_DEFINES          := 
mcu_esp32_DEFINES          := 
kernel_init_DEFINES          := 
network_DEFINES          := 
rhino_DEFINES          := 
lwip_DEFINES          := 
netmgr_DEFINES          := 
mbedtls_DEFINES          := 
arch_xtensa_lx6_DEFINES          := 
ulog_DEFINES          := 
lib_rbtree_DEFINES          := 
kv_DEFINES          := 
yloop_DEFINES          := 
vfs_DEFINES          := 
Experiment10_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
board_esp32devkitc_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
osal_aos_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  -Wall -Werror -Wall -Werror
mcu_esp32_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  -std=gnu99 -DENABLE_WIFI -I platform/mcu/esp32/bsp
kernel_init_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
network_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
rhino_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  -Wall -Werror -Wall -Werror
lwip_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
netmgr_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
mbedtls_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
arch_xtensa_lx6_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
ulog_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  -Wall -Werror -DMOD_VER=\"1.0.2\" -Wall -Werror -DMOD_VER=\"1.0.2\"
lib_rbtree_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  -Wall -Werror -Wall -Werror
kv_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  -Wall -Werror -Wall -Werror
yloop_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  -Wall -Werror -Wall -Werror
vfs_CFLAGS           := -DMCU_FAMILY=\"mcu_esp32\"  -DSYSINFO_PRODUCT_MODEL=\"ALI_AOS_ESP32\" -DSYSINFO_DEVICE_NAME=\"ESP32\"  -DCONFIG_AOS_FATFS_SUPPORT_RAW_FLASH   -DOTA_DUBANK -ffunction-sections -fdata-sections -fstrict-volatile-bitfields -mlongcalls -DESPOS_FOR_ESP32              -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  -Wall -Werror -Wall -Werror
Experiment10_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
board_esp32devkitc_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
osal_aos_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
mcu_esp32_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
kernel_init_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
network_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
rhino_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
lwip_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
netmgr_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
mbedtls_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
arch_xtensa_lx6_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
ulog_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
lib_rbtree_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
kv_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
yloop_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
vfs_CXXFLAGS         :=                 -ggdb -Os   -DPLATFORM=\"esp32devkitc\"  -include /home/takuron/aosApp/Experiment10/aos_config.h  
Experiment10_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
board_esp32devkitc_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
osal_aos_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
mcu_esp32_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
kernel_init_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
network_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
rhino_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
lwip_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
netmgr_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
mbedtls_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
arch_xtensa_lx6_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
ulog_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
lib_rbtree_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
kv_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
yloop_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
vfs_ASMFLAGS         := -include /home/takuron/aosApp/Experiment10/aos_config.h
Experiment10_MAKEFILE         := /home/takuron/aosApp/Experiment10/aos.mk
board_esp32devkitc_MAKEFILE         := /home/takuron/aosApp/Experiment10/board/esp32devkitc/aos.mk
osal_aos_MAKEFILE         := /home/takuron/aiot/core/osal/aos/aos.mk
mcu_esp32_MAKEFILE         := /home/takuron/aiot/platform/mcu/esp32/aos.mk
kernel_init_MAKEFILE         := /home/takuron/aiot/core/init/aos.mk
network_MAKEFILE         := /home/takuron/aiot/components/network/aos.mk
rhino_MAKEFILE         := /home/takuron/aiot/core/rhino/aos.mk
lwip_MAKEFILE         := /home/takuron/aiot/components/network/lwip/aos.mk
netmgr_MAKEFILE         := /home/takuron/aiot/components/network/netmgr/aos.mk
mbedtls_MAKEFILE         := /home/takuron/aiot/components/security/mbedtls/aos.mk
arch_xtensa_lx6_MAKEFILE         := /home/takuron/aiot/platform/arch/xtensa/lx6/aos.mk
ulog_MAKEFILE         := /home/takuron/aiot/components/dm/ulog/aos.mk
lib_rbtree_MAKEFILE         := /home/takuron/aiot/core/rbtree/aos.mk
kv_MAKEFILE         := /home/takuron/aiot/core/kv/aos.mk
yloop_MAKEFILE         := /home/takuron/aiot/components/utility/yloop/aos.mk
vfs_MAKEFILE         := /home/takuron/aiot/core/vfs/aos.mk
Experiment10_PRE_BUILD_TARGETS:= 
board_esp32devkitc_PRE_BUILD_TARGETS:= 
osal_aos_PRE_BUILD_TARGETS:= 
mcu_esp32_PRE_BUILD_TARGETS:= 
kernel_init_PRE_BUILD_TARGETS:= 
network_PRE_BUILD_TARGETS:= 
rhino_PRE_BUILD_TARGETS:= 
lwip_PRE_BUILD_TARGETS:= 
netmgr_PRE_BUILD_TARGETS:= 
mbedtls_PRE_BUILD_TARGETS:= 
arch_xtensa_lx6_PRE_BUILD_TARGETS:= 
ulog_PRE_BUILD_TARGETS:= 
lib_rbtree_PRE_BUILD_TARGETS:= 
kv_PRE_BUILD_TARGETS:= 
yloop_PRE_BUILD_TARGETS:= 
vfs_PRE_BUILD_TARGETS:= 
Experiment10_PREBUILT_LIBRARY := 
board_esp32devkitc_PREBUILT_LIBRARY := 
osal_aos_PREBUILT_LIBRARY := 
mcu_esp32_PREBUILT_LIBRARY := /home/takuron/aiot/platform/mcu/esp32/lib/libesp32.a /home/takuron/aiot/platform/mcu/esp32/lib/libspi_flash.a /home/takuron/aiot/platform/mcu/esp32/lib/libsoc.a /home/takuron/aiot/platform/mcu/esp32/lib/libbootloader_support.a /home/takuron/aiot/platform/mcu/esp32/lib/libhal.a /home/takuron/aiot/platform/mcu/esp32/lib/libnewlib.a /home/takuron/aiot/platform/mcu/esp32/lib/libvfs.a /home/takuron/aiot/platform/mcu/esp32/lib/liblog.a /home/takuron/aiot/platform/mcu/esp32/lib/libdriver.a /home/takuron/aiot/platform/mcu/esp32/lib/libcontainer.a /home/takuron/aiot/platform/mcu/esp32/lib/librtc.a /home/takuron/aiot/platform/mcu/esp32/lib/libcoexist.a /home/takuron/aiot/platform/mcu/esp32/lib/libcore.a /home/takuron/aiot/platform/mcu/esp32/lib/libnet80211.a /home/takuron/aiot/platform/mcu/esp32/lib/libpp.a /home/takuron/aiot/platform/mcu/esp32/lib/libwpa.a /home/takuron/aiot/platform/mcu/esp32/lib/libwpa2.a /home/takuron/aiot/platform/mcu/esp32/lib/libwps.a /home/takuron/aiot/platform/mcu/esp32/lib/libphy.a /home/takuron/aiot/platform/mcu/esp32/lib/libnvs_flash.a /home/takuron/aiot/platform/mcu/esp32/lib/libcxx.a /home/takuron/aiot/platform/mcu/esp32/lib/libstdcc++-cache-workaround.a /home/takuron/aiot/platform/mcu/esp32/lib/libwpa_supplicant.a /home/takuron/aiot/platform/mcu/esp32/lib/libapp_update.a /home/takuron/aiot/platform/mcu/esp32/lib/libmesh.a
kernel_init_PREBUILT_LIBRARY := 
network_PREBUILT_LIBRARY := 
rhino_PREBUILT_LIBRARY := 
lwip_PREBUILT_LIBRARY := 
netmgr_PREBUILT_LIBRARY := 
mbedtls_PREBUILT_LIBRARY := 
arch_xtensa_lx6_PREBUILT_LIBRARY := 
ulog_PREBUILT_LIBRARY := 
lib_rbtree_PREBUILT_LIBRARY := 
kv_PREBUILT_LIBRARY := 
yloop_PREBUILT_LIBRARY := 
vfs_PREBUILT_LIBRARY := 
Experiment10_MBINS_TYPE             := app
board_esp32devkitc_MBINS_TYPE             := kernel
osal_aos_MBINS_TYPE             := kernel
mcu_esp32_MBINS_TYPE             := kernel
kernel_init_MBINS_TYPE             := kernel
network_MBINS_TYPE             := kernel
rhino_MBINS_TYPE             := kernel
lwip_MBINS_TYPE             := kernel
netmgr_MBINS_TYPE             := kernel
mbedtls_MBINS_TYPE             := kernel
arch_xtensa_lx6_MBINS_TYPE             := kernel
ulog_MBINS_TYPE             := kernel
lib_rbtree_MBINS_TYPE             := kernel
kv_MBINS_TYPE             := kernel
yloop_MBINS_TYPE             := kernel
vfs_MBINS_TYPE             := kernel
Experiment10_LIBSUFFIX             := 
board_esp32devkitc_LIBSUFFIX             := 
osal_aos_LIBSUFFIX             := 
mcu_esp32_LIBSUFFIX             := 
kernel_init_LIBSUFFIX             := 
network_LIBSUFFIX             := 
rhino_LIBSUFFIX             := 
lwip_LIBSUFFIX             := 
netmgr_LIBSUFFIX             := 
mbedtls_LIBSUFFIX             := 
arch_xtensa_lx6_LIBSUFFIX             := 
ulog_LIBSUFFIX             := 
lib_rbtree_LIBSUFFIX             := 
kv_LIBSUFFIX             := 
yloop_LIBSUFFIX             := 
vfs_LIBSUFFIX             := 
Experiment10_POPULATE_INCLUDES      := 
board_esp32devkitc_POPULATE_INCLUDES      := 
osal_aos_POPULATE_INCLUDES      := 
mcu_esp32_POPULATE_INCLUDES      := 
kernel_init_POPULATE_INCLUDES      := 
network_POPULATE_INCLUDES      := 
rhino_POPULATE_INCLUDES      := 
lwip_POPULATE_INCLUDES      := 
netmgr_POPULATE_INCLUDES      := 
mbedtls_POPULATE_INCLUDES      := 
arch_xtensa_lx6_POPULATE_INCLUDES      := 
ulog_POPULATE_INCLUDES      := 
lib_rbtree_POPULATE_INCLUDES      := 
kv_POPULATE_INCLUDES      := 
yloop_POPULATE_INCLUDES      := 
vfs_POPULATE_INCLUDES      := 
OBJ-y := arch_xtensa_lx6 esp32devkitc kernel_init kv lib_rbtree lwip mbedtls mcu_esp32 netmgr network osal_aos rhino ulog vfs yloop
AOS_SDK_UNIT_TEST_SOURCES   		:=                                
INTERNAL_MEMORY_RESOURCES 		:= 
EXTRA_TARGET_MAKEFILES 			:=    /home/takuron/aiot/platform/mcu/esp32//gen_image_bin.mk
APPS_START_SECTOR 				:=  
BOOTLOADER_FIRMWARE				:=  
ATE_FIRMWARE				        :=  
APPLICATION_FIRMWARE				:=  
PARAMETER_1_IMAGE					:=  
PARAMETER_2_IMAGE					:=  
FILESYSTEM_IMAGE					:=  
WIFI_FIRMWARE						:=  
BT_PATCH_FIRMWARE					:=  
AOS_ROM_SYMBOL_LIST_FILE 		:= 
AOS_SDK_CHIP_SPECIFIC_SCRIPT		:=                
AOS_SDK_CONVERTER_OUTPUT_FILE	:=                
AOS_SDK_FINAL_OUTPUT_FILE 		:=                
AOS_RAM_STUB_LIST_FILE 			:= 
PING_PONG_OTA 					:= 
AOS_CPLUSPLUS_FLAGS:=                
KEIL_DEVICE :=                
KEIL_VENDOR :=                
IAR_OGCMENU :=                
CONFIG_SYSINFO_DEVICE_NAME 					:= ESP32
