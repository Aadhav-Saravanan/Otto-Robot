#include <Servo.h>  //Servo library

Servo BL, BR, TR, TL;     //BL=Bottom Left, BR=Bottom Right, Tr=Top Right and TL=Top Left
int servoDelay = 1000;    // delay time for the servo
int servoAngleMax = 180;  // Max angle for the servo motor
int servoAngleHalf = 90;  //Half angle for the sevo motor
int servoMin = 0;         //Min angle for the servo motor

void setup() {
  BL.attach(8);
  BR.attach(9);
  TR.attach(10);
  TL.attach(11);
}

void loop() {
  BL.write(servoAngleMax);
  BR.write(servoAngleMax);
  TR.write(servoAngleMax);
  TL.write(servoAngleMax);

  delay(servoDelay);

  BL.write(servoMin);
  BR.write(servoMin);
  TR.write(servoMin);
  TL.write(servoMin);

  delay(servoDelay);
}
//version 1.1 
//Made by Aadhav Saravanan
//
