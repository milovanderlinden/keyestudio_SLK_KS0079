#include <Arduino.h>

int ledPin = 10; // define digital pin 10.

void setup() {
  // define pin with LED connected as output.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // set the LED on.
  digitalWrite(ledPin, HIGH);
  // wait for a second.
  delay(1000);
  // set the LED off.
  digitalWrite(ledPin, LOW);
  // wait for a second
  delay(1000);
}
