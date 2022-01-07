#include <Arduino.h>
#include <yCard.h>
#include <yFile.h>

void setup() {
   Serial.begin(9600);
}


void loop() {
  ycard_func();
  delay(1000);
}
