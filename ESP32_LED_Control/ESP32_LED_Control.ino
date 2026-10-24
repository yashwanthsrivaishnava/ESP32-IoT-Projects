// ESP32 LED Control

const int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);

  Serial.begin(115200);
  Serial.println("ESP32 LED Control Started");
}

void loop() {
  digitalWrite(ledPin, HIGH);
  Serial.println("LED ON");
  delay(1000);

  digitalWrite(ledPin, LOW);
  Serial.println("LED OFF");
  delay(1000);
}
