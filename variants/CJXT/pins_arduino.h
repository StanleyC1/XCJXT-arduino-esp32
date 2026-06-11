#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

// ============================================================
// X CJXT - ESP32-S3-WROOM-1-N16R8
// Flash: 16MB | PSRAM: 8MB (OPI)
// ============================================================

#define USB_VID 0x303a
#define USB_PID 0x1001

// ===== UART (USB to UART) =====
static const uint8_t TX = 43;
static const uint8_t RX = 44;

// ===== I2C =====
static const uint8_t SDA = 34;
static const uint8_t SCL = 35;

// ===== SPI (SPI2) =====
static const uint8_t SS   = 13;
static const uint8_t MOSI = 11;
static const uint8_t MISO = 13;
static const uint8_t SCK  = 12;

// ===== Builtin LED =====
static const uint8_t LED_BUILTIN = 1;
static const uint8_t BUILTIN_LED = 1;

// ===== BOOT Button =====
static const uint8_t BUTTON_BOOT = 0;

// ===== I2S =====
static const uint8_t I2S_MCLK  = 3;
static const uint8_t I2S_BCK   = 46;
static const uint8_t I2S_LRCK  = 9;
static const uint8_t I2S_DIN   = 10;
static const uint8_t I2S_DOUT  = 14;

// ===== Camera (OV2640/OV5640) =====
#define OV_D0    4
#define OV_D1    5
#define OV_D2    6
#define OV_D3    7
#define OV_D4    15
#define OV_D5    16
#define OV_D6    17
#define OV_D7    18
#define OV_VSYNC 47
#define OV_HREF  48
#define OV_PCLK  45

// ===== RGB LCD =====
#define LCD_DE   4
#define LCD_CLK  5
#define LCD_B7   6
#define LCD_B6   7
#define LCD_B5   15
#define LCD_B4   16
#define LCD_B3   17
#define LCD_G7   18
#define LCD_G6   8
#define LCD_G5   3
#define LCD_G4   46
#define LCD_G3   9
#define LCD_G2   10
#define LCD_R7   14
#define LCD_R6   23
#define LCD_R5   47
#define LCD_R4   48
#define LCD_R3   45
#define LCD_CS   23
#define LCD_DC   40

// ===== Touch IC =====
#define TP_CS   2
#define TP_INT  40
#define CT_SCL  38
#define CT_SDA  39

// ===== Misc =====
#define REMOTE_OUT  8
#define REMOTE_IN   2
#define ADC_IN      8
#define IIC_INT     0
#define LED0        1
#define TF_CS       2

// ===== Not Available =====
// GPIO36 - N/A
// GPIO37 - N/A

#endif /* Pins_Arduino_h */
