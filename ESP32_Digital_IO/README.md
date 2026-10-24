# 🔘 ESP32 Digital I/O

## Overview

This project demonstrates digital input and output control using an ESP32 development board.

A push button is connected to a digital input pin, and an LED is connected to a digital output pin.

When the button is pressed, the ESP32 detects the input and turns ON the LED. When the button is released, the LED turns OFF.

---

## 🎯 Objectives

- Understand ESP32 digital input and output
- Interface a push button with ESP32
- Control an LED using GPIO
- Learn to use the internal pull-up resistor
- Read digital signals
- Display status messages using the Serial Monitor

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| ESP32 Development Board | 1 |
| Push Button | 1 |
| LED | 1 |
| 220–330Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

### Push Button

| Push Button Terminal | ESP32 |
|---|---|
| Terminal 1 | GPIO 4 |
| Terminal 2 | GND |

### LED

| LED Terminal | ESP32 |
|---|---|
| Anode (+) | GPIO 2 through a resistor |
| Cathode (-) | GND |

Check the pinout of your ESP32 board before connecting components.

---

## ⚙️ Working Principle

The ESP32 reads the button using `digitalRead()` and controls the LED using `digitalWrite()`.

The `INPUT_PULLUP` configuration activates the internal pull-up resistor.

Therefore:

- `LOW` means the button is pressed.
- `HIGH` means the button is released.

The program turns the LED ON when the button is pressed and OFF when it is released.

---

## 🔄 Working Process

```text
Push Button
     ↓
ESP32 GPIO Input
     ↓
Read Button State
     ↓
Button Pressed?
   ↙       ↘
 Yes        No
  ↓          ↓
LED ON     LED OFF
```

---

## 📟 Serial Monitor

Set the Serial Monitor baud rate to:

```text
115200
```

Example output:

```text
ESP32 Digital I/O Started
Button Pressed - LED ON
Button Released - LED OFF
```

The messages repeat while the program monitors the button.

---

## 💻 Arduino Functions Used

- `pinMode()`
- `digitalRead()`
- `digitalWrite()`
- `Serial.begin()`
- `Serial.println()`
- `delay()`

---

## 📚 Concepts Learned

- Digital input
- Digital output
- GPIO programming
- Internal pull-up resistors
- Button interfacing
- Conditional statements
- Embedded system control

---

## 🚀 Applications

Digital input and output are used in:

- Push-button controls
- Smart home devices
- Security systems
- IoT controllers
- Robotics
- Industrial automation
- User interface systems

---

## 🔮 Future Improvements

- Add multiple push buttons.
- Control multiple LEDs.
- Add button debouncing.
- Control the LED through Wi-Fi.
- Add Bluetooth control.
- Integrate a sensor-based input.

---

## ⚠️ Safety Note

ESP32 GPIO pins use 3.3V logic and are not 5V tolerant. Always use a current-limiting resistor with an external LED.

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
