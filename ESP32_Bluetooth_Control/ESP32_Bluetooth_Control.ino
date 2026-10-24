
#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

const int LED_PIN = 2;
String command = "";

void setup() {
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  if (!SerialBT.begin("ESP32_LED_Control")) {
    Serial.println("Bluetooth initialization failed!");
    while (true) {
      delay(1000);
    }
  }

  Serial.println("Bluetooth started!");
  Serial.println("Pair your phone with ESP32_LED_Control");
  Serial.println("Send ON or OFF using a Bluetooth terminal app.");
}

void loop() {
  while (SerialBT.available()) {
    char received = SerialBT.read();

    if (received == '\n' || received == '\r') {
      command.trim();
      command.toUpperCase();

      if (command == "ON") {
        digitalWrite(LED_PIN, HIGH);
        SerialBT.println("LED is ON");
        Serial.println("LED is ON");
      }
      else if (command == "OFF") {
        digitalWrite(LED_PIN, LOW);
        SerialBT.println("LED is OFF");
        Serial.println("LED is OFF");
      }
      else if (command.length() > 0) {
        SerialBT.println("Invalid command. Send ON or OFF.");
      }

      command = "";
    }
    else if (command.length() < 20) {
      command += received;
    }
  }
}
