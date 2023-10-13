#include "StringSplitter.h"
#include <Servo.h>

Servo = myservo;

int analog_size = 6;
int digital_size = 14;

int incomingByte = 0;
int Plastic = 4;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  pinMode(Plastic ,INPUT);
}

void loop() {
 open = digitalRead(Plastic )

 if(open == 1){
  myservo.write(0);
  delay(1000);
  myservo.write(90);
  delay(1000);
 }
}
