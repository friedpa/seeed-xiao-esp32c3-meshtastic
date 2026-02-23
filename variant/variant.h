// Pin definitions for Seeed Lora-shuttle: HT-CT62 (Esp32-C3 + SX1262) devboard
// Based on HT-62CT Chip Layout: https://heltec.org/project/ht-ct62/

#define BUTTON_PIN 9   // GPIO 9 available for button BOOT

// LED - Using GPIO3 (D1) which is available
#define LED_PIN 3      // GPIO3 (D1)
#define LED_STATE_ON 1

#define HAS_SCREEN 0
#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN

// SX1262 LoRa Radio Configuration
// Pin mapping Lora-shuttle: HT-CT62 (Esp32-C3 + SX1262) devboard
#define USE_SX1262

// SPI pins (left side when stacked)
#define LORA_SCK 16    // GPIO 16 -> SX1262 SCK
#define LORA_MISO 12   // GPIO 12 -> SX1262 MISO
#define LORA_MOSI 13   // GPIO 13 -> SX1262 MOSI

// Control pins (right side when stacked)
#define LORA_CS 14     // GPIO 14 -> SX1262 NSS
#define LORA_RESET 10  // GPIO 10 -> SX1262 RST
#define LORA_DIO1 15   // GPIO 15 -> SX1262 DIO1
#define LORA_BUSY 9    // GPIO  9 -> SX1262 BUSY

// SX1262 specific settings
#define LORA_DIO0 RADIOLIB_NC
#define LORA_DIO2 RADIOLIB_NC
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_BUSY
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH         // WSX1262 uses DIO2 for RF switching
#define SX126X_DIO3_TCXO_VOLTAGE 1.8     // SX1262 has 1.8V TCXO

// I2C pins for external sensors (available on pass-through pins D6/D7)
// These are available when using SX1262 module
#define I2C_SDA 4     // GPIO 4 (D6) -> SX1262 (pass-through)
#define I2C_SCL 5     // GPIO 5 (D7) -> SX1262 (pass-through)
