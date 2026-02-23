# Lora-shuttle: HT-CT62 (Esp32-C3 + SX1262) devboard

This variant is designed for the **Lora-shuttle: HT-CT62 (Esp32-C3 + SX1262) devboard**.

## Hardware Configuration

### Pin Mappings

#### HT-62CT intern PIN mapping between ESP32-C3 and SX1262

| ESP32-C3 Pin | SX1262 Pin | Function |
|--------------|------------|----------|
| GND | GND | Ground |
| 3.3V | 3.3V | Power |
| GPIO 00 | N/A | I2C SDA |
| GPIO 01 | N/A | I2C SCL |
| GPIO 03 | DIO1 | LoRa Interrupt |
| GPIO 04 | BUSY | Busy Signal |
| GPIO 05 | RST | Radio Reset |
| GPIO 06 | MISO | SPI Data In |
| GPIO 07 | MOSI | SPI Data Out |
| GPIO 08 | NSS | SPI Chip Select |
| GPIO 09 | N/A | Boot User Button |
| GPIO 10 | SCK | SPI Clock |

### PIN Mapping of the module headers
The module has two 2.54mm header pinouts with 8 pins per side.

### Header H1

| Header | HT62-CT | Function |
|--------------|------------|----------|
| Pin 1 - Not used |  |  |
| Pin 2 - Not used |  |  |
| Pin 3 - Not used |  |  |
| Pin 4 - 3.3V | Pin 12 3.3V | Power |
| Pin 5 - GND | Pin 02 GND | Ground |
| Pin 6 - GND | Pin 13 GND | Ground |
| Pin 7 - GND | PIN 21 GND | Ground |
| Pin 8 - 5V | N/A | USB Typ C - Connector |

### Header H2

| Header | HT62-CT | Function |
|--------------|------------|----------|
| Pin 1 - RX | Pin 19 RXD | Data |
| Pin 2 - TX | Pin 20 TXD | Data |
| Pin 3 - Not used |  |  |
| Pin 4 - Not used |  |  |
| Pin 5 - Not used |  |  |
| Pin 6 - GPIO 02 | Pin 08 GPIO 02 |  |
| Pin 7 - SCL | Pin 01 GPIO 01 | I2C SCL |
| Pin 8 - SDA | Pim 00 GPIO 00 | I2C SDA |

### I2C Sensor Support
GPIO 01 (D7) and GPIO 00 (D6) are available via the SX1262 pass-through pins D7 and D6 for external I2C sensors:
- **SDA**: GPIO 00 (D6)
- **SCL**: GPIO 01 (D7)

Compatible sensors include BME280, BME680, SSD1306 displays, etc.

## Building the Firmware

### Prerequisites
1. Install [PlatformIO](https://platformio.org/)
2. Clone this repository

### Build Command
```bash
cd meshtastic-source
pio run -e seeed-xiao-esp32c3-sx1262
```

### Flash Command
```bash
pio run -e seeed-xiao-esp32c3-sx1262 -t upload
```

Or specify the port:
```bash
pio run -e seeed-xiao-esp32c3-sx1262 -t upload --upload-port /dev/ttyACM0
```

## Hardware Model
- **Hardware Model ID**: 254
- **Slug**: Heltec_HT-62CT (ESP32-C3 + SX1262)
- **Display Name**: Lora-shuttle: HT-CT62 (ESP32-C3 + SX1262) devboard

## References
- [Heltec HT-62CT](https://heltec.org/project/ht-ct62/)
- [Lora-shuttle: HT-CT62 (ESP32-C3 + SX1262) devboard](https://www.tindie.com/products/allexok/lora-shuttle-ht-ct62-esp32-c3-sx1262-devboard/#specs)
