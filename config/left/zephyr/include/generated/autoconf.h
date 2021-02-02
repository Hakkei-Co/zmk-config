#define CONFIG_ZMK_KEYBOARD_NAME "Corne"
#define CONFIG_USB_DEVICE_PRODUCT "Corne"
#define CONFIG_BT_DEVICE_NAME "Corne"
#define CONFIG_USB_DEVICE_VID 0x1D50
#define CONFIG_USB_DEVICE_PID 0x615E
#define CONFIG_USB_DEVICE_MANUFACTURER "ZMK Project"
#define CONFIG_ZMK_USB 1
#define CONFIG_USB_NUMOF_EP_WRITE_RETRIES 10
#define CONFIG_ZMK_BLE 1
#define CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE 2048
#define CONFIG_ZMK_BLE_THREAD_STACK_SIZE 512
#define CONFIG_ZMK_BLE_THREAD_PRIORITY 5
#define CONFIG_ZMK_BLE_KEYBOARD_REPORT_QUEUE_SIZE 20
#define CONFIG_ZMK_BLE_CONSUMER_REPORT_QUEUE_SIZE 5
#define CONFIG_ZMK_BLE_CLEAR_BONDS_ON_START 1
#define CONFIG_BT_DEVICE_APPEARANCE 961
#define CONFIG_ZMK_SPLIT 1
#define CONFIG_ZMK_SPLIT_BLE 1
#define CONFIG_ZMK_SPLIT_BLE_ROLE_CENTRAL 1
#define CONFIG_ZMK_SPLIT_BLE_CENTRAL_POSITION_QUEUE_SIZE 5
#define CONFIG_BT_MAX_PAIRED 6
#define CONFIG_BT_MAX_CONN 6
#define CONFIG_BT_GAP_AUTO_UPDATE_CONN_PARAMS 1
#define CONFIG_ZMK_IDLE_TIMEOUT 30000
#define CONFIG_ZMK_EXT_POWER 1
#define CONFIG_ZMK_COMBO_MAX_PRESSED_COMBOS 4
#define CONFIG_ZMK_COMBO_MAX_COMBOS_PER_KEY 5
#define CONFIG_ZMK_COMBO_MAX_KEYS_PER_COMBO 4
#define CONFIG_ZMK_USB_INIT_PRIORITY 50
#define CONFIG_ZMK_BLE_INIT_PRIORITY 50
#define CONFIG_ZMK_KSCAN_EVENT_QUEUE_SIZE 4
#define CONFIG_ZMK_LOG_LEVEL 4
#define CONFIG_UART_CONSOLE_ON_DEV_NAME ""
#define CONFIG_LOG_BUFFER_SIZE 2048
#define CONFIG_LOG_STRDUP_BUF_COUNT 6
#define CONFIG_ZMK_SETTINGS_SAVE_DEBOUNCE 60000
#define CONFIG_HEAP_MEM_POOL_SIZE 4096
#define CONFIG_KERNEL_BIN_NAME "zmk"
#define CONFIG_REBOOT 1
#define CONFIG_USB 1
#define CONFIG_ZMK_LOG_LEVEL_DBG 1
#define CONFIG_SHIELD_CORNE_LEFT 1
#define CONFIG_ZMK_KSCAN_GPIO_DRIVER 1
#define CONFIG_ZMK_KSCAN_INIT_PRIORITY 40
#define CONFIG_HAS_CMSIS_CORE 1
#define CONFIG_HAS_CMSIS_CORE_M 1
#define CONFIG_HAS_STM32CUBE 1
#define CONFIG_USE_STM32_HAL_PCD 1
#define CONFIG_USE_STM32_HAL_PCD_EX 1
#define CONFIG_USE_STM32_LL_USB 1
#define CONFIG_USE_STM32_LL_UTILS 1
#define CONFIG_ROM_START_OFFSET 0x0
#define CONFIG_TINYCRYPT 1
#define CONFIG_TINYCRYPT_SHA256 1
#define CONFIG_TINYCRYPT_SHA256_HMAC 1
#define CONFIG_TINYCRYPT_SHA256_HMAC_PRNG 1
#define CONFIG_TINYCRYPT_AES 1
#define CONFIG_TINYCRYPT_AES_CMAC 1
#define CONFIG_UART_INTERRUPT_DRIVEN 1
#define CONFIG_BT_HCI_ACL_FLOW_CONTROL 1
#define CONFIG_BOARD "proton_c"
#define CONFIG_SOC "stm32f303xc"
#define CONFIG_SOC_SERIES "stm32f3"
#define CONFIG_NUM_IRQS 82
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 72000000
#define CONFIG_GPIO 1
#define CONFIG_CORTEX_M_SYSTICK 1
#define CONFIG_CLOCK_CONTROL 1
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 10000
#define CONFIG_BUILD_OUTPUT_HEX 1
#define CONFIG_FPU 1
#define CONFIG_FLASH_SIZE 256
#define CONFIG_FLASH_BASE_ADDRESS 0x8000000
#define CONFIG_SRAM_SIZE 40
#define CONFIG_SRAM_BASE_ADDRESS 0x20000000
#define CONFIG_PINMUX_INIT_PRIORITY 45
#define CONFIG_CLOCK_CONTROL_STM32_CUBE 1
#define CONFIG_UART_STM32 1
#define CONFIG_GPIO_STM32 1
#define CONFIG_PINMUX_STM32 1
#define CONFIG_USB_DC_STM32 1
#define CONFIG_BOARD_QMK_PROTON_C 1
#define CONFIG_SOC_SERIES_STM32F3X 1
#define CONFIG_CPU_HAS_ARM_MPU 1
#define CONFIG_HAS_SWO 1
#define CONFIG_SOC_FAMILY "st_stm32"
#define CONFIG_SOC_FAMILY_STM32 1
#define CONFIG_SOC_STM32F303XC 1
#define CONFIG_SOC_LOG_LEVEL_INF 1
#define CONFIG_SOC_LOG_LEVEL 3
#define CONFIG_ARCH "arm"
#define CONFIG_CPU_CORTEX 1
#define CONFIG_CPU_CORTEX_M 1
#define CONFIG_ISA_THUMB2 1
#define CONFIG_ASSEMBLER_ISA_THUMB2 1
#define CONFIG_COMPILER_ISA_THUMB2 1
#define CONFIG_STACK_ALIGN_DOUBLE_WORD 1
#define CONFIG_FAULT_DUMP 2
#define CONFIG_FP_HARDABI 1
#define CONFIG_CPU_CORTEX_M4 1
#define CONFIG_CPU_CORTEX_M_HAS_SYSTICK 1
#define CONFIG_CPU_CORTEX_M_HAS_DWT 1
#define CONFIG_CPU_CORTEX_M_HAS_BASEPRI 1
#define CONFIG_CPU_CORTEX_M_HAS_VTOR 1
#define CONFIG_CPU_CORTEX_M_HAS_PROGRAMMABLE_FAULT_PRIOS 1
#define CONFIG_ARMV7_M_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV7_M_ARMV8_M_FP 1
#define CONFIG_GEN_ISR_TABLES 1
#define CONFIG_ARM_MPU_REGION_MIN_ALIGN_AND_SIZE 4
#define CONFIG_GEN_IRQ_VECTOR_TABLE 1
#define CONFIG_MAIN_STACK_SIZE 1024
#define CONFIG_IDLE_STACK_SIZE 320
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_TEST_EXTRA_STACKSIZE 0
#define CONFIG_ARM 1
#define CONFIG_ARCH_IS_SET 1
#define CONFIG_ARCH_LOG_LEVEL_INF 1
#define CONFIG_ARCH_LOG_LEVEL 3
#define CONFIG_MPU_LOG_LEVEL_INF 1
#define CONFIG_MPU_LOG_LEVEL 3
#define CONFIG_GEN_PRIV_STACKS 1
#define CONFIG_GEN_SW_ISR_TABLE 1
#define CONFIG_ARCH_SW_ISR_TABLE_ALIGN 0
#define CONFIG_GEN_IRQ_START_VECTOR 0
#define CONFIG_ARCH_HAS_TIMING_FUNCTIONS 1
#define CONFIG_ARCH_HAS_RAMFUNC_SUPPORT 1
#define CONFIG_ARCH_HAS_NESTED_EXCEPTION_DETECTION 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP 1
#define CONFIG_ARCH_HAS_EXTRA_EXCEPTION_INFO 1
#define CONFIG_ARCH_HAS_THREAD_ABORT 1
#define CONFIG_CPU_HAS_FPU 1
#define CONFIG_CPU_HAS_MPU 1
#define CONFIG_KERNEL_LOG_LEVEL_INF 1
#define CONFIG_KERNEL_LOG_LEVEL 3
#define CONFIG_MULTITHREADING 1
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING 0
#define CONFIG_NUM_METAIRQ_PRIORITIES 0
#define CONFIG_ERRNO 1
#define CONFIG_SCHED_DUMB 1
#define CONFIG_WAITQ_DUMB 1
#define CONFIG_BOOT_BANNER 1
#define CONFIG_BOOT_DELAY 0
#define CONFIG_SYSTEM_WORKQUEUE_PRIORITY -1
#define CONFIG_ATOMIC_OPERATIONS_BUILTIN 1
#define CONFIG_TIMESLICING 1
#define CONFIG_TIMESLICE_SIZE 0
#define CONFIG_TIMESLICE_PRIORITY 0
#define CONFIG_POLL 1
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_NUM_PIPE_ASYNC_MSGS 10
#define CONFIG_KERNEL_MEM_POOL 1
#define CONFIG_MEM_POOL_HEAP_BACKEND 1
#define CONFIG_HEAP_MEM_POOL_MIN_SIZE 64
#define CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN 1
#define CONFIG_SWAP_NONATOMIC 1
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_TIMEOUT_64BIT 1
#define CONFIG_XIP 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_MP_NUM_CPUS 1
#define CONFIG_TICKLESS_IDLE 1
#define CONFIG_TICKLESS_IDLE_THRESH 3
#define CONFIG_TICKLESS_KERNEL 1
#define CONFIG_HAS_DTS 1
#define CONFIG_HAS_DTS_GPIO 1
#define CONFIG_BT_UART 1
#define CONFIG_BT_H4 1
#define CONFIG_BT_UART_ON_DEV_NAME ""
#define CONFIG_CONSOLE 1
#define CONFIG_CONSOLE_INPUT_MAX_LINE_LEN 128
#define CONFIG_CONSOLE_HAS_DRIVER 1
#define CONFIG_UART_CONSOLE 1
#define CONFIG_UART_CONSOLE_INIT_PRIORITY 60
#define CONFIG_UART_CONSOLE_LOG_LEVEL_INF 1
#define CONFIG_UART_CONSOLE_LOG_LEVEL 3
#define CONFIG_UART_MUX_RX_STACK_SIZE 512
#define CONFIG_UART_MUX_RX_PRIORITY 7
#define CONFIG_UART_MUX_LOG_LEVEL_INF 1
#define CONFIG_UART_MUX_LOG_LEVEL 3
#define CONFIG_HAS_SEGGER_RTT 1
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_HAS_DRIVER 1
#define CONFIG_SERIAL_SUPPORT_INTERRUPT 1
#define CONFIG_UART_LINE_CTRL 1
#define CONFIG_EXTI_STM32 1
#define CONFIG_EXTI_STM32_EXTI0_IRQ_PRI 0
#define CONFIG_EXTI_STM32_EXTI1_IRQ_PRI 0
#define CONFIG_EXTI_STM32_EXTI2_IRQ_PRI 0
#define CONFIG_EXTI_STM32_EXTI3_IRQ_PRI 0
#define CONFIG_EXTI_STM32_EXTI4_IRQ_PRI 0
#define CONFIG_EXTI_STM32_EXTI9_5_IRQ_PRI 0
#define CONFIG_EXTI_STM32_EXTI15_10_IRQ_PRI 0
#define CONFIG_SYSTEM_CLOCK_DISABLE 1
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_TICKLESS_CAPABLE 1
#define CONFIG_GPIO_LOG_LEVEL_INF 1
#define CONFIG_GPIO_LOG_LEVEL 3
#define CONFIG_PINMUX 1
#define CONFIG_PINMUX_NAME "PINMUX"
#define CONFIG_PINMUX_STM32_DEVICE_INITIALIZATION_PRIORITY 2
#define CONFIG_CLOCK_CONTROL_LOG_LEVEL_INF 1
#define CONFIG_CLOCK_CONTROL_LOG_LEVEL 3
#define CONFIG_CLOCK_CONTROL_STM32_DEVICE_INIT_PRIORITY 1
#define CONFIG_CLOCK_STM32_SYSCLK_SRC_PLL 1
#define CONFIG_CLOCK_STM32_HSE_CLOCK 8000000
#define CONFIG_CLOCK_STM32_PLL_SRC_HSE 1
#define CONFIG_CLOCK_STM32_PLL_PREDIV 1
#define CONFIG_CLOCK_STM32_PLL_PREDIV1 1
#define CONFIG_CLOCK_STM32_PLL_MULTIPLIER 9
#define CONFIG_CLOCK_STM32_AHB_PRESCALER 1
#define CONFIG_CLOCK_STM32_APB1_PRESCALER 2
#define CONFIG_CLOCK_STM32_APB2_PRESCALER 1
#define CONFIG_CLOCK_STM32_MCO1_SRC_NOCLOCK 1
#define CONFIG_CLOCK_STM32_MCO2_SRC_NOCLOCK 1
#define CONFIG_FLASH_HAS_DRIVER_ENABLED 1
#define CONFIG_FLASH_HAS_PAGE_LAYOUT 1
#define CONFIG_FLASH 1
#define CONFIG_FLASH_LOG_LEVEL_INF 1
#define CONFIG_FLASH_LOG_LEVEL 3
#define CONFIG_FLASH_PAGE_LAYOUT 1
#define CONFIG_SOC_FLASH_STM32 1
#define CONFIG_SOC_FLASH_STM32_V1 1
#define CONFIG_SENSOR 1
#define CONFIG_SENSOR_LOG_LEVEL_INF 1
#define CONFIG_SENSOR_LOG_LEVEL 3
#define CONFIG_SENSOR_INIT_PRIORITY 90
#define CONFIG_USB_DEVICE_DRIVER 1
#define CONFIG_USB_DRIVER_LOG_LEVEL_INF 1
#define CONFIG_USB_DRIVER_LOG_LEVEL 3
#define CONFIG_HWINFO 1
#define CONFIG_HWINFO_HAS_DRIVER 1
#define CONFIG_HWINFO_STM32 1
#define CONFIG_MINIMAL_LIBC 1
#define CONFIG_HAS_NEWLIB_LIBC_NANO 1
#define CONFIG_MINIMAL_LIBC_MALLOC 1
#define CONFIG_MINIMAL_LIBC_MALLOC_ARENA_SIZE 0
#define CONFIG_MINIMAL_LIBC_CALLOC 1
#define CONFIG_MINIMAL_LIBC_REALLOCARRAY 1
#define CONFIG_STDOUT_CONSOLE 1
#define CONFIG_SYS_HEAP_ALLOC_LOOPS 3
#define CONFIG_PRINTK64 1
#define CONFIG_POSIX_MAX_FDS 4
#define CONFIG_MAX_TIMER_COUNT 5
#define CONFIG_BT 1
#define CONFIG_BT_LOG_LEVEL_INF 1
#define CONFIG_BT_LOG_LEVEL 3
#define CONFIG_BT_HCI 1
#define CONFIG_BT_PERIPHERAL 1
#define CONFIG_BT_CENTRAL 1
#define CONFIG_BT_BROADCASTER 1
#define CONFIG_BT_OBSERVER 1
#define CONFIG_BT_DIS 1
#define CONFIG_BT_DIS_MODEL "stm32f303xc"
#define CONFIG_BT_DIS_MANUF "Manufacturer"
#define CONFIG_BT_DIS_PNP 1
#define CONFIG_BT_DIS_PNP_VID_SRC 1
#define CONFIG_BT_DIS_PNP_VID 0x0
#define CONFIG_BT_DIS_PNP_PID 0x0
#define CONFIG_BT_DIS_PNP_VER 0x1
#define CONFIG_BT_BAS 1
#define CONFIG_BT_BAS_LOG_LEVEL 0
#define CONFIG_BT_CONN 1
#define CONFIG_BT_PHY_UPDATE 1
#define CONFIG_BT_DATA_LEN_UPDATE 1
#define CONFIG_BT_RPA 1
#define CONFIG_BT_ASSERT 1
#define CONFIG_BT_ASSERT_VERBOSE 1
#define CONFIG_BT_DEBUG 1
#define CONFIG_BT_DEBUG_LOG 1
#define CONFIG_BT_HCI_HOST 1
#define CONFIG_BT_HCI_CMD_COUNT 2
#define CONFIG_BT_RX_BUF_COUNT 3
#define CONFIG_BT_RX_BUF_LEN 76
#define CONFIG_BT_DISCARDABLE_BUF_COUNT 3
#define CONFIG_BT_DISCARDABLE_BUF_SIZE 45
#define CONFIG_BT_HCI_TX_STACK_SIZE 512
#define CONFIG_BT_HCI_ECC_STACK_SIZE 1100
#define CONFIG_BT_HCI_TX_PRIO 7
#define CONFIG_BT_HCI_RESERVE 0
#define CONFIG_BT_RECV_IS_RX_THREAD 1
#define CONFIG_BT_RX_STACK_SIZE 2200
#define CONFIG_BT_RX_PRIO 8
#define CONFIG_BT_DRIVER_RX_HIGH_PRIO 6
#define CONFIG_BT_HOST_CRYPTO 1
#define CONFIG_BT_SETTINGS 1
#define CONFIG_BT_SETTINGS_CCC_LAZY_LOADING 1
#define CONFIG_BT_SETTINGS_USE_PRINTK 1
#define CONFIG_BT_ACL_RX_COUNT 6
#define CONFIG_BT_CONN_TX_MAX 3
#define CONFIG_BT_USER_PHY_UPDATE 1
#define CONFIG_BT_AUTO_DATA_LEN_UPDATE 1
#define CONFIG_BT_SMP 1
#define CONFIG_BT_SMP_APP_PAIRING_ACCEPT 1
#define CONFIG_BT_SMP_SC_PAIR_ONLY 1
#define CONFIG_BT_BONDABLE 1
#define CONFIG_BT_SMP_ENFORCE_MITM 1
#define CONFIG_BT_L2CAP_RX_MTU 65
#define CONFIG_BT_L2CAP_TX_BUF_COUNT 3
#define CONFIG_BT_L2CAP_TX_FRAG_COUNT 2
#define CONFIG_BT_L2CAP_TX_MTU 65
#define CONFIG_BT_ATT_ENFORCE_FLOW 1
#define CONFIG_BT_ATT_PREPARE_COUNT 0
#define CONFIG_BT_ATT_TX_MAX 3
#define CONFIG_BT_GATT_SERVICE_CHANGED 1
#define CONFIG_BT_GATT_CACHING 1
#define CONFIG_BT_GATT_CLIENT 1
#define CONFIG_BT_GATT_READ_MULTIPLE 1
#define CONFIG_BT_GAP_PERIPHERAL_PREF_PARAMS 1
#define CONFIG_BT_PERIPHERAL_PREF_MIN_INT 24
#define CONFIG_BT_PERIPHERAL_PREF_MAX_INT 40
#define CONFIG_BT_PERIPHERAL_PREF_SLAVE_LATENCY 0
#define CONFIG_BT_PERIPHERAL_PREF_TIMEOUT 42
#define CONFIG_BT_CREATE_CONN_TIMEOUT 3
#define CONFIG_BT_CONN_PARAM_UPDATE_TIMEOUT 5000
#define CONFIG_BT_BACKGROUND_SCAN_INTERVAL 2048
#define CONFIG_BT_BACKGROUND_SCAN_WINDOW 18
#define CONFIG_BT_ID_MAX 1
#define CONFIG_BT_ECC 1
#define CONFIG_BT_COMPANY_ID 0x05F1
#define CONFIG_DEBUG 1
#define CONFIG_PRINTK 1
#define CONFIG_EARLY_CONSOLE 1
#define CONFIG_ASSERT_VERBOSE 1
#define CONFIG_NVS 1
#define CONFIG_NVS_LOG_LEVEL_INF 1
#define CONFIG_NVS_LOG_LEVEL 3
#define CONFIG_LOG 1
#define CONFIG_LOG_DEFAULT_LEVEL 3
#define CONFIG_LOG_OVERRIDE_LEVEL 0
#define CONFIG_LOG_MAX_LEVEL 4
#define CONFIG_LOG_FUNC_NAME_PREFIX_DBG 1
#define CONFIG_LOG_MODE_OVERFLOW 1
#define CONFIG_LOG_PROCESS_TRIGGER_THRESHOLD 10
#define CONFIG_LOG_PROCESS_THREAD 1
#define CONFIG_LOG_PROCESS_THREAD_SLEEP_MS 1000
#define CONFIG_LOG_PROCESS_THREAD_STACK_SIZE 768
#define CONFIG_LOG_DETECT_MISSED_STRDUP 1
#define CONFIG_LOG_STRDUP_MAX_STRING 32
#define CONFIG_LOG_DOMAIN_ID 0
#define CONFIG_LOG_BACKEND_UART 1
#define CONFIG_LOG_BACKEND_SHOW_COLOR 1
#define CONFIG_LOG_BACKEND_FORMAT_TIMESTAMP 1
#define CONFIG_HAWKBIT_LOG_LEVEL_INF 1
#define CONFIG_HAWKBIT_LOG_LEVEL 3
#define CONFIG_UPDATEHUB_LOG_LEVEL_INF 1
#define CONFIG_UPDATEHUB_LOG_LEVEL 3
#define CONFIG_NET_BUF 1
#define CONFIG_NET_BUF_USER_DATA_SIZE 4
#define CONFIG_NET_BUF_LOG_LEVEL_INF 1
#define CONFIG_NET_BUF_LOG_LEVEL 3
#define CONFIG_USB_DEVICE_STACK 1
#define CONFIG_USB_DEVICE_LOG_LEVEL_INF 1
#define CONFIG_USB_DEVICE_LOG_LEVEL 3
#define CONFIG_USB_PID_CDC_ACM_SAMPLE 0x0001
#define CONFIG_USB_PID_CDC_ACM_COMPOSITE_SAMPLE 0x0002
#define CONFIG_USB_PID_HID_CDC_SAMPLE 0x0003
#define CONFIG_USB_PID_CONSOLE_SAMPLE 0x0004
#define CONFIG_USB_PID_DFU_SAMPLE 0x0005
#define CONFIG_USB_PID_HID_SAMPLE 0x0006
#define CONFIG_USB_PID_HID_MOUSE_SAMPLE 0x0007
#define CONFIG_USB_PID_MASS_SAMPLE 0x0008
#define CONFIG_USB_PID_TESTUSB_SAMPLE 0x0009
#define CONFIG_USB_PID_WEBUSB_SAMPLE 0x000A
#define CONFIG_USB_PID_BLE_HCI_SAMPLE 0x000B
#define CONFIG_USB_PID_BLE_HCI_H4_SAMPLE 0x000C
#define CONFIG_USB_PID_WPANUSB_SAMPLE 0x000D
#define CONFIG_USB_DEVICE_SN "0123456789ABCDEF"
#define CONFIG_USB_MAX_NUM_TRANSFERS 4
#define CONFIG_USB_REQUEST_BUFFER_SIZE 128
#define CONFIG_USB_SELF_POWERED 1
#define CONFIG_USB_MAX_POWER 50
#define CONFIG_USB_DEVICE_HID 1
#define CONFIG_USB_HID_DEVICE_NAME "HID"
#define CONFIG_USB_HID_DEVICE_COUNT 1
#define CONFIG_USB_HID_LOG_LEVEL_INF 1
#define CONFIG_USB_HID_LOG_LEVEL 3
#define CONFIG_HID_INTERRUPT_EP_MPS 16
#define CONFIG_USB_HID_POLL_INTERVAL_MS 9
#define CONFIG_USB_HID_REPORTS 1
#define CONFIG_FLASH_MAP 1
#define CONFIG_SETTINGS 1
#define CONFIG_SETTINGS_LOG_LEVEL_INF 1
#define CONFIG_SETTINGS_LOG_LEVEL 3
#define CONFIG_SETTINGS_DYNAMIC_HANDLERS 1
#define CONFIG_SETTINGS_NVS 1
#define CONFIG_SETTINGS_NVS_SECTOR_SIZE_MULT 1
#define CONFIG_SETTINGS_NVS_SECTOR_COUNT 8
#define CONFIG_TEST_ARM_CORTEX_M 1
#define CONFIG_TOOLCHAIN_ZEPHYR_0_11 1
#define CONFIG_LINKER_ORPHAN_SECTION_WARN 1
#define CONFIG_HAS_FLASH_LOAD_OFFSET 1
#define CONFIG_FLASH_LOAD_OFFSET 0x0
#define CONFIG_FLASH_LOAD_SIZE 0x0
#define CONFIG_KERNEL_ENTRY "__start"
#define CONFIG_LINKER_SORT_BY_ALIGNMENT 1
#define CONFIG_DEBUG_OPTIMIZATIONS 1
#define CONFIG_COMPILER_OPT ""
#define CONFIG_RUNTIME_ERROR_CHECKS 1
#define CONFIG_OUTPUT_STAT 1
#define CONFIG_OUTPUT_DISASSEMBLY 1
#define CONFIG_OUTPUT_PRINT_MEMORY_USAGE 1
#define CONFIG_BUILD_OUTPUT_BIN 1
#define CONFIG_COMPAT_INCLUDES 1
