#include <Arduino.h>

#include "globals.h"

void setup()
{
    Serial.begin(115200);
    Serial.printf("Program start\n");

    pinMode(LED_PIN, OUTPUT);

    return;
}

void loop()
{
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);

    return;
}
