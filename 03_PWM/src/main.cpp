#include <Arduino.h>

int potpin = 0; // initialize analog pin 0
int ledpin = 11; //initialize digital pin 11(PWM output)
int val = 0; // Temporarily store variables' value from the sensor

void setup() {
  // define digital pin 11 as “output”
  pinMode(ledpin,OUTPUT);
  // set baud rate at 9600
  Serial.begin(9600);
  // attention: Analog ports are automatically set up as “input”
}

void loop() {
  // read the analog value from the sensor and assign it to val
  val = analogRead(potpin);
  // display value of val
  Serial.println(val);
  // turn on LED and set up brightness ( maximum output of PWM is 255)
  analogWrite(ledpin,val/4);
  // wait for 0.01 second
  delay(10);
}
