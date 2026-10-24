# 📊 ESP32 Analog Sensors

## Overview

This project demonstrates analog input reading using an ESP32 development board and a potentiometer.

The potentiometer provides a variable voltage to the ESP32's ADC input. The ESP32 converts the analog signal into a digital reading and displays the ADC value and approximate voltage through the Serial Monitor.

This project introduces the fundamentals of analog sensor interfacing for IoT applications.

---

## 🎯 Objectives

- Understand ESP32 analog input
- Learn about ADC conversion
- Read a variable voltage using a potentiometer
- Display sensor readings through the Serial Monitor
- Calculate an approximate input voltage
- Understand analog data acquisition

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| ESP32 Development Board | 1 |
| Potentiometer (10K recommended) | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

| Potentiometer Pin | ESP32 |
|---|---|
| Outer Pin 1 | 3V3 |
| Outer Pin 2 | GND |
| Middle Pin (Wiper) | GPIO 34 |

GPIO 34 is an input-only pin on the original ESP32 and is suitable for analog input. Check your board's pinout before wiring.

---

## ⚙️ Working Principle

A potentiometer acts as a variable voltage divider.

When its knob is turned, the voltage at its middle terminal changes.

The ESP32's Analog-to-Digital Converter (ADC) reads this voltage and converts it into a digital value.

With 12-bit resolution, the nominal ADC range is:

```text
0 to 4095
```

The program calculates an approximate voltage using:

```text
Voltage = (ADC Value × 3.3) / 4095
```

The calculation is an estimate. Actual voltage measurement depends on ADC characteristics, attenuation, calibration, and the supply voltage.

---

## 🔄 Working Process

```text
Potentiometer
      ↓
Variable Analog Voltage
      ↓
ESP32 ADC Input
      ↓
Analog-to-Digital Conversion
      ↓
Digital ADC Value
      ↓
Approximate Voltage Calculation
      ↓
Serial Monitor
```

---

## 📟 Serial Monitor

Set the Serial Monitor baud rate to:

```text
115200
```

Example output:

```text
ESP32 Analog Sensor Reading
ADC Value: 0 | Approx. Voltage: 0.00 V
ADC Value: 1250 | Approx. Voltage: 1.01 V
ADC Value: 2500 | Approx. Voltage: 2.02 V
ADC Value: 4095 | Approx. Voltage: 3.30 V
```

These are illustrative values. Actual readings may vary.

---

## 💻 Arduino Functions Used

- `analogRead()`
- `analogReadResolution()`
- `Serial.begin()`
- `Serial.print()`
- `Serial.println()`
- `delay()`

---

## 📚 Concepts Learned

- Analog input
- Analog-to-Digital Conversion (ADC)
- Voltage divider
- Sensor data acquisition
- ADC resolution
- Voltage estimation
- Serial communication

---

## 🚀 Applications

Analog inputs are commonly used in:

- Temperature monitoring
- Light sensing
- Soil moisture measurement
- Battery voltage monitoring
- Environmental monitoring
- Industrial sensor interfaces
- IoT data acquisition

---

## 🔮 Future Improvements

- Interface an LDR light sensor.
- Read a soil moisture sensor.
- Add threshold-based alerts.
- Display readings on an OLED or LCD.
- Send readings over Wi-Fi.
- Create a web-based sensor dashboard.
- Calibrate ADC readings against a multimeter.

---

## ⚠️ Safety Note

ESP32 GPIO pins are not 5V tolerant. Connect the potentiometer between 3V3 and GND, and ensure the analog input never exceeds the permitted voltage range of the specific ESP32 board.

---

## 👨‍💻 Author

**P YASHWANTH**

B.E. Robotics & Artificial Intelligence
