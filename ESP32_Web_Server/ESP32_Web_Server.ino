
#include <WiFi.h>
#include <WebServer.h>

// Enter your Wi-Fi details
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

// LED pin
const int LED_PIN = 2;

// Create web server on port 80
WebServer server(80);

void handleRoot() {
  String page = R"rawliteral(
    <!DOCTYPE html>
    <html>
    <head>
      <title>ESP32 LED Control</title>
      <meta name="viewport" content="width=device-width, initial-scale=1">
      <style>
        body {
          font-family: Arial;
          text-align: center;
          margin-top: 60px;
          background: #f2f6fc;
        }
        h1 { color: #123b66; }
        button {
          padding: 15px 30px;
          margin: 10px;
          font-size: 18px;
          border: none;
          border-radius: 8px;
          color: white;
          cursor: pointer;
        }
        .on { background: #16834a; }
        .off { background: #c62828; }
      </style>
    </head>
    <body>
      <h1>ESP32 Web Server</h1>
      <p>Control the LED using your browser.</p>
      <a href="/on"><button class="on">LED ON</button></a>
      <a href="/off"><button class="off">LED OFF</button></a>
    </body>
    </html>
  )rawliteral";

  server.send(200, "text/html", page);
}

void handleLEDOn() {
  digitalWrite(LED_PIN, HIGH);
  server.sendHeader("Location", "/");
  server.send(303);
}

void handleLEDOff() {
  digitalWrite(LED_PIN, LOW);
  server.sendHeader("Location", "/");
  server.send(303);
}

void setup() {
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  Serial.print("Connecting to Wi-Fi");

  unsigned long startAttempt = millis();

  while (WiFi.status() != WL_CONNECTED &&
         millis() - startAttempt < 20000) {
    delay(500);
    Serial.print(".");
  }

  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("\nWi-Fi connection failed!");
    Serial.println("Check credentials and 2.4 GHz Wi-Fi.");
    return;
  }

  Serial.println("\nWi-Fi connected!");
  Serial.print("Open this IP address in your browser: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.on("/on", handleLEDOn);
  server.on("/off", handleLEDOff);

  server.begin();
  Serial.println("Web server started!");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    server.handleClient();
  }
}
