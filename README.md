# IoT-Based Water Salinity Monitoring Using KiwisIoT

## Project Overview
This project monitors water salinity sensor readings using a NodeMCU ESP8266 and an analog salinity sensor. The ESP8266 collects sensor data and sends it to the KiwisIoT platform, allowing users to remotely monitor water conditions through an IoT dashboard.

## Hardware Components
- NodeMCU ESP8266
- Analog Water Salinity Sensor
- Jumper Wires
- Power Supply

## Software Requirements
- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library

## Circuit Connections

| Component | ESP8266 Pin |
|---|---|
| Salinity Sensor Analog Output | A0 |
| Sensor VCC | Suitable power supply |
| Sensor GND | GND |

## Working Principle
The salinity sensor produces an analog signal based on the water sample. The ESP8266 reads the analog value every 3 seconds and displays it in the Serial Monitor. The raw sensor reading is then transmitted to the KiwisIoT platform.

## KiwisIoT Dashboard

| Channel | Data |
|---|---|
| Channel 0 | Salinity Sensor ADC Reading |

## Configuration
Update your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino code:

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

Upload the code to the NodeMCU ESP8266 and monitor the sensor readings through the KiwisIoT dashboard.

**Note:** The project currently sends raw ADC readings, not calibrated salinity values such as ppt or PSU. Calibration and temperature compensation may be required for accurate salinity measurements. Also, check your ESP8266 board's A0 input voltage limit before connecting the sensor output.

## Applications
- Water salinity monitoring
- Aquaculture and fish farming
- Marine water monitoring
- Water quality observation
- IoT-based environmental monitoring

## Project Blog
[Read the full project on Hackster.io](https://www.hackster.io/kirusokumar/iot-based-water-salinity-monitoring-using-kiwisiot-1eb609)

## Recommended Platform
[KiwisIoT – IoT Monitoring Platform](https://www.kiwisiot.in/)

**Arduino Library:** https://github.com/Kiwistron/KiwisIoT

**Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

---
**Author:** Kirusokumar