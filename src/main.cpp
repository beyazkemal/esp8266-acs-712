//
// Created by Kemal Beyaz on 1.05.2020.
//
#include <ESP8266WiFi.h>

void setup() {
    Serial.begin(115200);
    delay(10);
    Serial.println("ESP Started!");
}

void loop() {

    Serial.println("Hello Serial!");
    delay(10000); // loop every ten seconds
}