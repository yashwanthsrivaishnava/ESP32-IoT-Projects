
# ESP32 Sensor Dashboard

## Overview
This project creates a simple web-based dashboard using an ESP32. It reads an analog input and displays the sensor reading and estimated voltage in a browser.

A potentiometer is used as a test sensor. It can later be replaced with a compatible analog sensor.

## Objectives
- Read analog input using the ESP32 ADC.
- Connect the ESP32 to Wi-Fi.
- Host a dashboard webpage.
- Display sensor data in a browser.
- Understand the basics of IoT monitoring.

## Components Required
- ESP32 development board
- Potentiometer
- Breadboard and jumper wires
- USB cable
- 2.4 GHz Wi-Fi network

## Software Required
- Arduino IDE
- ESP32 board support package
- Built-in WiFi.h and WebServer.h libraries

## Circuit Connections

| Component | ESP32 Connection |
|---|---|
| Potentiometer outer pin | 3V3 |
| Other outer pin | GND |
| Middle pin | GPIO 34 |

Use a sensor output that stays within the ESP32's permitted input voltage. Never apply 5 V directly to an ESP32 GPIO.

## Working Principle
1. The ESP32 connects to the Wi-Fi network.
2. The analog input is read using `analogRead()`.
3. The reading is converted into an approximate voltage.
4. The ESP32 hosts a webpage using the WebServer library.
5. The browser requests the dashboard.
6. The webpage displays the latest reading and refreshes approximately every two seconds.

## Dashboard Features
- Analog sensor reading
- Estimated input voltage
- Automatic webpage refresh
- Browser-based monitoring

## How to Run
1. Configure Wi-Fi credentials locally.
2. Upload the sketch to a compatible ESP32 board.
3. Open Serial Monitor at 115200 baud.
4. Visit the printed IP address using a device on the same network.
5. Rotate the potentiometer to observe changing readings.

## Expected Result
The dashboard displays an ADC value between 0 and 4095 and an estimated voltage. The values change when the potentiometer is adjusted.

The actual ADC response and voltage accuracy depend on the ESP32 variant, input attenuation, and board characteristics.

## Concepts Learned
- Analog-to-digital conversion
- ESP32 Wi-Fi connectivity
- Web server basics
- HTTP requests
- Sensor data visualization
- IoT monitoring

## Applications
- Environmental monitoring
- Smart agriculture prototypes
- Sensor monitoring systems
- Home automation dashboards

## Security Note
Do not commit real Wi-Fi credentials to a public repository. This example is intended for a trusted local network and is not hardened for public internet access.

## Future Improvements
- Add temperature and humidity sensors.
- Display multiple sensor readings.
- Add graphical charts.
- Save readings to a database.
- Add a mobile-friendly interface.

## Author
**P YASHWANTH**
