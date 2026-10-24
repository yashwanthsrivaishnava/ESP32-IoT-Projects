// ESP32 Digital Input and Output

const int buttonPin = 4;
const int ledPin = 2;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);

  Serial.begin(115200);
  Serial.println("ESP32 Digital I/O Started");
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Button Pressed - LED ON");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Button Released - LED OFF");
  }

  delay(200);
}
