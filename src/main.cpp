#include <Arduino.h>
#include <WiFi.h>
#include <esp_wpa2.h>
#include <ESP32Ping.h>



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello World!");
  delay(1000);
}