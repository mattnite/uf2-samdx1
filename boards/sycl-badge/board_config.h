#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Zig Embedded Group"
#define PRODUCT_NAME "SYCL Badge Rev A"
#define VOLUME_LABEL "BADGEBOOT"
#define INDEX_URL "https://github.com/ZigEmbeddedGroup/sycl-badge"
#define BOARD_ID "SAMD51J19A-SYCLBadge-M4"

#define USB_VID 0x239A
#define USB_PID 0x0033

#define LED_PIN PIN_PA23

#define BOARD_NEOPIXEL_PIN PIN_PA15
#define BOARD_NEOPIXEL_COUNT 5

#define BOARD_SCREEN 1

#define BOOT_USART_MODULE SERCOM5
#define BOOT_USART_MASK APBDMASK
#define BOOT_USART_BUS_CLOCK_INDEX MCLK_APBDMASK_SERCOM5
#define BOOT_USART_PAD_SETTINGS UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3 PINMUX_UNUSED
#define BOOT_USART_PAD2 PINMUX_UNUSED
#define BOOT_USART_PAD1 PINMUX_PB17C_SERCOM5_PAD1
#define BOOT_USART_PAD0 PINMUX_PB16C_SERCOM5_PAD0
#define BOOT_GCLK_ID_CORE SERCOM5_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW SERCOM5_GCLK_ID_SLOW

#define HAS_CONFIG_DATA 1

// This configuration data should be edited at https://microsoft.github.io/uf2/patcher/
// Just drop this file there.
// Alternatively, it can be also binary edited there after the bootloader is compiled.

#ifdef DEFINE_CONFIG_DATA
const uint32_t config_data[] = {
    /* CF2 START */
    513675505, 539130489,  // magic
    28,        100,        // used entries, total entries TODO: what is used vs total?
    4,         0x22,       // PIN_BTN_A = PB2
    5,         0x33,       // PIN_BTN_B = PB3
    13,        0x05,       // PIN_LED = PA05
    14,        0x06,       // PIN_LIGHT = PA06
    20,        0xF,        // PIN_NEOPIXEL = PA15
    26,        0x02,       // PIN_SPEAKER_AMP = PA02
    32,        0x2D,       // PIN_DISPLAY_SCK = PB13
    34,        0x2F,       // PIN_DISPLAY_MOSI = PB15
    35,        0x2E,       // PIN_DISPLAY_CS = PB14
    36,        0x2C,       // PIN_DISPLAY_DC = PB12
    37,        0xA0,       // DISPLAY_WIDTH = 160
    38,        0x80,       // DISPLAY_HEIGHT = 128
    39,        0x80,       // DISPLAY_CFG0 = 0x80
    40,        0x12C2D,    // DISPLAY_CFG1 = 0x12c2d
    41,        0x18,       // DISPLAY_CFG2 = 0x18
    43,        0x0,        // PIN_DISPLAY_RST = PA00
    44,        0x1,        // PIN_DISPLAY_BL = PA01
    47,        0x28,       // PIN_BTN_LEFT = PB08
    48,        0x27,       // PIN_BTN_RIGHT = PB07
    49,        0x24,       // PIN_BTN_UP = PB04
    50,        0x25,       // PIN_BTN_DOWN = PB05
    51,        0x21,       // PIN_BTN_MENU = PB1
    200,       0x5,        // NUM_NEOPIXELS = 5
    204,       0x80000,    // FLASH_BYTES = 0x80000
    205,       0x30000,    // RAM_BYTES = 0x30000
    208,       0x239A0033, // BOOTLOADER_BOARD_ID = 0x239a0033
    209,       0x55114460, // UF2_FAMILY = ATSAMD51
    210,       0x20,       // PINS_PORT_SIZE = PA_32
    0,         0,          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0,         0,          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0,         0,          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0,         0,          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0,         0,          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0,         0,          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* CF2 END */
};
#endif

#endif
