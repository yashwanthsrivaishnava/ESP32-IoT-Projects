# 💡 ESP32 LED Control

## Overview

This project demonstrates how to control an LED using an ESP32 development board.

The ESP32 configures a GPIO pin as an output and switches the LED ON and OFF at one-second intervals.

This is a beginner-friendly project for learning ESP32 programming and embedded system fundamentals.

---

## 🎯 Objectives

- Understand ESP32 GPIO pins
- Configure a pin as an output
- Control an LED using digital signals
- Learn basic Arduino programming for ESP32
- Display messages through the Serial Monitor

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| ESP32 Development Board | 1 |
| LED | 1 |
| 220–330Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

An onboard LED may be used if its GPIO pin is documented for your board.

---

## 🔌 Circuit Connections

| LED Connection | ESP32 |
|---|---|
| LED anode (+) | GPIO 2 through a resistor |
| LED cathode (-) | GND |

Check the ESP32 board pinout before connecting the LED.

---

## ⚙️ Working Principle

The ESP32 controls the LED using a digital GPIO output.

The program uses:

- `pinMode()` to configure the pin as an output.
- `digitalWrite(HIGH)` to turn the LED ON.
- `digitalWrite(LOW)` to turn the LED OFF.
- `delay()` to create a one-second interval.

The cycle repeats continuously.

---

## 🔄 Working Process

```text
ESP32 Starts
     ↓
Configure GPIO 2
     ↓
Set GPIO HIGH
     ↓
LED ON
     ↓
Wait 1 Second
     ↓
Set GPIO LOW
     ↓
LED OFF
     ↓
Wait 1 Second
     ↓
Repeat
```

---

## 📟 Serial Monitor

Set the Serial Monitor baud rate to:

```text
115200
```

Example output:

```text
ESP32 LED Control Started
LED ON
LED OFF
LED ON
LED OFF
```

---

## 💻 Arduino Functions Used

- `pinMode()`
- `digitalWrite()`
- `Serial.begin()`
- `Serial.println()`
- `delay()`

---

## 📚 Concepts Learned

- ESP32 GPIO programming
- Digital output control
- Embedded C++ programming
- Timing and delays
- Serial communication
- ESP32 board configuration

---

## 🚀 Applications

LED control is useful in:

- Status indicators
- IoT device indicators
- Smart lighting
- Alarm systems
- Robotics
- Embedded system prototypes
- Hardware debugging

---

## 🔮 Future Improvements

- Control the LED using a push button.
- Adjust blinking speed.
- Control LED brightness using PWM.
- Control the LED through a Wi-Fi web server.
- Add Bluetooth control.
- Integrate LED status with sensor readings.

---

## ⚠️ Safety Note

ESP32 GPIO pins operate at 3.3V logic and are not 5V tolerant. Use a current-limiting resistor with an external LED and verify the pinout of your specific board.

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
