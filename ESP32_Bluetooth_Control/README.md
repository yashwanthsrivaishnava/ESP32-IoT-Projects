
# ESP32 Bluetooth Control

## Overview
This project uses Bluetooth Classic to control an LED connected to an ESP32. A mobile Bluetooth terminal sends commands to turn the LED ON or OFF.

## Objectives
- Understand Bluetooth communication with ESP32.
- Receive commands from a mobile device.
- Control a GPIO output using text commands.
- Learn the basics of wireless embedded systems.

## Components Required
- Compatible ESP32 development board
- LED
- 220–330 ohm resistor
- Breadboard and jumper wires
- USB cable
- Android phone with a Bluetooth Classic terminal app

## Software Required
- Arduino IDE
- ESP32 board support package
- Built-in BluetoothSerial library, where supported

## Circuit Connections

| ESP32 Pin | Component |
|---|---|
| GPIO 2 | LED anode through a resistor |
| GND | LED cathode |

Use an external LED if your board does not have an onboard LED connected to GPIO 2.

## Commands

| Command | Action |
|---|---|
| ON | Turns the LED ON |
| OFF | Turns the LED OFF |

Send each command with a newline so the ESP32 knows when the command is complete.

## Working Principle
1. The ESP32 initializes Bluetooth with the device name ESP32_LED_Control.
2. The mobile phone connects using a Bluetooth terminal application.
3. The user sends ON or OFF.
4. The ESP32 reads and processes the received text.
5. The LED output changes according to the command.
6. A confirmation message is returned to the phone.

## How to Run
1. Open the sketch in Arduino IDE.
2. Select a compatible ESP32 board and port.
3. Upload the code.
4. Pair and connect the phone using a Bluetooth Classic terminal app.
5. Send ON or OFF with a newline.

## Expected Result
The LED turns ON when the ESP32 receives ON and turns OFF when it receives OFF. Confirmation messages appear in the terminal.

## Concepts Learned
- Bluetooth Classic communication
- Serial data reception
- String command processing
- GPIO control
- Wireless device interaction

## Applications
- Wireless LED control
- Home automation prototypes
- Bluetooth-based robot control
- Embedded system demonstrations

## Compatibility Note
This example uses Bluetooth Classic SPP through BluetoothSerial. It is suitable for supported original ESP32 boards. ESP32-C3 and ESP32-S3 do not support Bluetooth Classic SPP; use a BLE-based project for those boards instead.

## Security Note
This is a basic learning project and does not implement application-level authentication. Do not use it as-is to control safety-critical devices.

## Future Improvements
- Add more commands for motors and servos.
- Control multiple outputs.
- Build a custom mobile application.
- Add Bluetooth Low Energy support for compatible boards.

## Author
**P YASHWANTH**
