// ESP32 Analog Input using a Potentiometer

const int analogPin = 34;

const int ADC_MAX = 4095;
const float ADC_REFERENCE = 3.3;

void setup() {
  Serial.begin(115200);
  delay(500);

  // Configure ADC resolution
  analogReadResolution(12);

  Serial.println("ESP32 Analog Sensor Reading");
}

void loop() {
  int sensorValue = analogRead(analogPin);

  float voltage = (sensorValue * ADC_REFERENCE) / ADC_MAX;

  Serial.print("ADC Value: ");
  Serial.print(sensorValue);

  Serial.print(" | Approx. Voltage: ");
  Serial.print(voltage, 2);
  Serial.println(" V");

  delay(1000);
}
