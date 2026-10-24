
#include <WiFi.h>
#include <WebServer.h>

// Replace these with your own Wi-Fi details
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

// GPIO34 is an ADC input on the original ESP32
const int SENSOR_PIN = 34;

WebServer server(80);

void handleDashboard() {
  int sensorValue = analogRead(SENSOR_PIN);

  // Approximate voltage for a 12-bit ADC
  float voltage = sensorValue * (3.3 / 4095.0);

  String page = R"rawliteral(
    <!DOCTYPE html>
    <html>
    <head>
      <title>ESP32 Sensor Dashboard</title>
      <meta name="viewport" content="width=device-width, initial-scale=1">
      <meta http-equiv="refresh" content="2">
      <style>
        body {
          font-family: Arial, sans-serif;
          text-align: center;
          background: #eef4fa;
          margin: 0;
          padding: 25px;
        }
        h1 { color: #174a75; }
        .card {
          background: white;
          max-width: 420px;
          margin: 20px auto;
          padding: 25px;
          border-radius: 14px;
          box-shadow: 0 3px 12px #0002;
        }
        .value {
          font-size: 32px;
          color: #16834a;
          font-weight: bold;
        }
        .note { color: #555; }
      </style>
    </head>
    <body>
      <h1>ESP32 Sensor Dashboard</h1>
      <div class="card">
        <h2>Analog Sensor Reading</h2>
        <p class="value">)rawliteral";

  page += String(sensorValue);
  page += R"rawliteral(</p>
        <p>ADC range: 0–4095</p>
        <h2>Estimated Voltage</h2>
        <p class="value">)rawliteral";

  page += String(voltage, 2);
  page += R"rawliteral( V</p>
        <p class="note">Updates approximately every 2 seconds</p>
      </div>
    </body>
    </html>
  )rawliteral";

  server.send(200, "text/html", page);
}

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  Serial.print("Connecting to Wi-Fi...");

  unsigned long startAttempt = millis();

  while (WiFi.status() != WL_CONNECTED &&
         millis() - startAttempt < 20000) {
    delay(500);
    Serial.print(".");
  }

  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("\nWi-Fi connection failed!");
    Serial.println("Check your Wi-Fi details and 2.4 GHz network.");
    return;
  }

  Serial.println("\nWi-Fi connected!");
  Serial.print("Dashboard address: http://");
  Serial.println(WiFi.localIP());

  server.on("/", handleDashboard);
  server.begin();

  Serial.println("Sensor dashboard started.");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    server.handleClient();
  }
}
