
# ESP32 Web Server

## Overview
This project demonstrates how to create a web server using an ESP32 microcontroller. A webpage hosted by the ESP32 allows users to switch an LED ON and OFF using a phone or computer browser.

## Objectives
- Connect the ESP32 to a Wi-Fi network.
- Host a simple webpage on the ESP32.
- Control a physical LED using browser buttons.
- Understand basic IoT communication.

## Components Required
- ESP32 development board
- LED
- 220–330 ohm resistor
- Breadboard and jumper wires
- USB cable
- 2.4 GHz Wi-Fi network

## Software Required
- Arduino IDE
- ESP32 board support package
- Built-in WiFi.h and WebServer.h libraries

## Circuit Connections

| ESP32 Pin | Component |
|---|---|
| GPIO 2 | LED anode through a resistor |
| GND | LED cathode |

The onboard LED pin varies between ESP32 board models. Use an external LED if necessary.

## Working Principle
1. The ESP32 connects to the configured Wi-Fi network.
2. It displays its local IP address in the Serial Monitor.
3. The ESP32 starts an HTTP web server on port 80.
4. A browser sends a request when a user selects an LED control button.
5. The ESP32 changes the LED output and returns the browser to the main webpage.

## Web Server Routes
- `/` — Displays the control webpage.
- `/on` — Turns the LED ON.
- `/off` — Turns the LED OFF.

## How to Run
1. Open the sketch in Arduino IDE.
2. Enter your Wi-Fi credentials locally.
3. Select the correct ESP32 board and port.
4. Upload the code.
5. Open Serial Monitor at 115200 baud.
6. Visit the displayed IP address using a device on the same network.
7. Use the webpage buttons to control the LED.

## Expected Result
A webpage titled **ESP32 Web Server** appears in the browser with LED ON and LED OFF buttons. Selecting a button changes the LED state.

The displayed IP address depends on the network.

## Concepts Learned
- ESP32 Wi-Fi connectivity
- HTTP requests and responses
- Embedded web servers
- GPIO output control
- Basic IoT device control

## Applications
- IoT device control
- Home automation prototypes
- Remote sensor interfaces
- Embedded system demonstrations

## Security Note
Do not publish real Wi-Fi passwords or other private credentials in a public repository. This example is intended for a trusted local network and is not designed for secure public internet access.

## Future Improvements
- Display the current LED status on the webpage.
- Add sensor readings.
- Improve the webpage layout.
- Add authentication before allowing control.

## Author
**P YASHWANTH**
