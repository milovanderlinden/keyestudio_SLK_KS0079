#include <Arduino.h>

int ledpin = 11;// initialize pin 11
int inpin = 7;// initialize pin 7
int val;// define val

void setup() {
  pinMode(ledpin,OUTPUT);// set LED pin as “output”
  pinMode(inpin,INPUT);// set button pin as “input”
}

void loop() {
  // read the level value of pin 7 and assign if to val
  val=digitalRead(inpin);
  // check if the button is pressed, if yes, turn on the LED
  if(val==LOW) {
    digitalWrite(ledpin,LOW);
  } else {
    digitalWrite(ledpin,HIGH);
  }
}
