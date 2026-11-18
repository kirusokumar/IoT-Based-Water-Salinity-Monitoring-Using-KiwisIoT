#include <ESP8266WiFi.h>
#include <KiwisIoT.h>

// WiFi Credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";

// KiwisIoT Topic ID
const char* topic = "YOUR_TOPIC_ID";

// Sensor Pin
#define SALINITY_PIN A0

// KiwisIoT
KiwisIoT kiwisiot(ssid, pass, topic);

unsigned long previousMillis = 0;

void setup() {

  Serial.begin(115200);

  pinMode(SALINITY_PIN, INPUT);

  kiwisiot.begin();

  Serial.println("Water Salinity Monitoring Started");
}

void loop() {

  kiwisiot.run();

  if (millis() - previousMillis >= 3000) {

    previousMillis = millis();

    // Read analog sensor value
    int salinityRaw = analogRead(SALINITY_PIN);

    Serial.println("\n--- WATER SALINITY DATA ---");

    Serial.print("Salinity Sensor ADC: ");
    Serial.println(salinityRaw);

    // Send raw sensor reading
    kiwisiot.send("0", String(salinityRaw));

  }
}