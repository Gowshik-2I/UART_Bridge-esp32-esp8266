# ESP32 & ESP8266 UART Serial Communication
 
A simple UART serial communication project where an **ESP8266 acts as transmitter** and an **ESP32 acts as receiver**, communicating over serial pins.
 
This is a foundational project built as part of learning Modbus RTU communication from scratch.
 
---
 
## Hardware Used
 
- 1x ESP32 development board (Receiver)
- 1x ESP8266 development board (Transmitter)
- Jumper wires
## Wiring
 
| ESP8266 (Transmitter) | ESP32 (Receiver) |
|-----------------------|------------------|
| TX (GPIO1)            | GPIO 16 (RX2)    |
| GND                   | GND              |
 
> **Note:** Always connect GND of both boards together or communication will not work.
 
---
 
## Pin Configuration
 
**Receiver — ESP32**
 
| ESP32 Pin | Role |
|-----------|------|
| GPIO 16   | RX2  |
| GPIO 17   | TX2  |
 
**Transmitter — ESP8266**
 
| ESP8266 Pin | Role |
|-------------|------|
| GPIO 1 (TX) | TX   |
 
---
 
## How It Works
 
- ESP8266 sends an incrementing counter as readable text using `Serial.println()`
- `Serial.println()` converts the number to ASCII text and appends `\r\n` at the end
- ESP32 reads incoming bytes on Serial2 until it hits `\n` using `readStringUntil('\n')`
- `.trim()` strips the leftover `\r` from the end of the received string
- Clean output is printed to the ESP32's Serial Monitor at 115200 baud
---
 
## Key Concepts Learned
 
- Difference between `Serial.write()`, `Serial.print()`, and `Serial.println()`
- How ASCII encoding works at the byte level
- Why `\r` (byte 13) and `\n` (byte 10) appear when reading raw bytes
- How `readStringUntil('\n')` uses `\n` as a message delimiter
---
 
## Part of a Larger Project
 
This UART test is a stepping stone toward building a full **Modbus RTU communication system** between an ESP32 and a Samkoon HMI over RS485, using a custom-built Modbus RTU library from scratch.
