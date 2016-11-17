#include <Arduino.h>

int buzzer = 8; // select digital IO pin for the buzzer

void setup() {
  pinMode(buzzer,OUTPUT); // set digital IO pin pattern, OUTPUT to be output
}

void loop() {
  unsigned char i,j; //define variable
  while(1) {
    // output a frequency sound
    for(i=0;i<80;i++) {
      digitalWrite(buzzer,HIGH); // sound
      delay(1); //delay1ms
      digitalWrite(buzzer,LOW); //not sound
      delay(1); //ms delay
    }
    // output a frequency sound
    for(i=0;i<100;i++) {
      digitalWrite(buzzer,HIGH); // sound
      digitalWrite(buzzer,LOW); //not sound
      delay(2); //2ms delay
    }
  }
}
