#include <Arduino.h>

#define TILT_PIN 26

void setup()
{
    Serial.begin(115200);
    pinMode(TILT_PIN, INPUT);
}

void loop()
{
    Serial.println(digitalRead(TILT_PIN));
    delay(50);
}
