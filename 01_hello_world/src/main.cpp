#include <Arduino.h>

int val; //define variable val
int ledpin=13; // define digital interface 13

void setup() {
  // set the baud rate at 9600 to match the software set up. When connected to
  // a specific device, (e.g. bluetooth), the baud rate needs to be the same
  // with it.
  Serial.begin(9600);
  // initialize digital pin 13 as output. When using I/O ports on an Arduino,
  // this kind of set up is always needed.
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // read the instruction or character from PC to Arduino, and assign to Val.
  val=Serial.read();
  // determine if the instruction or character received is “R”.
  if(val=='R') {
    digitalWrite(ledpin,HIGH);// set the LED on digital pin 13 on.
    delay(500);
    digitalWrite(ledpin,LOW);// set the LED on digital pin 13 off.
    delay(500);
    Serial.println("Hello World!");// display“Hello World!”string.
  }
}
