#include <Arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "93MWejLZ7INRgCVHD2RpMQ7JlW_qpm6f";
char ssid[] = "CHRISTIAN 2.4G-5G_ETB";
char pass[] = "BotLAB2018*";

BLYNK_WRITE(V0)
{
  int pinValue = param.asInt(); 
  Serial.println("V0: " + String(pinValue));
}

BLYNK_WRITE(V1)
{
  int pinValue = param.asInt(); 
  Serial.println("V1: " + String(pinValue));
}

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}