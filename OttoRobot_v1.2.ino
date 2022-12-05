#include <Servo.h>  //Servo library

Servo BL, BR, TR, TL;     //BL=Bottom Left, BR=Bottom Right, Tr=Top Right and TL=Top Left
float servoDelay = 1000;    // delay time for the servo
float servoAngleMax = 500;  // Max angle for the servo motor
float servoAngleHalf = 90;  //Half angle for the sevo motor
float servoMin = 0;         //Min angle for the servo motor

void setup() {
  BL.attach(8);
  BR.attach(9);
  TR.attach(10);
  TL.attach(11);
void setup_angle();
}
void setup_angle(){
  BL.write(0);
  BR.write(0);
  TR.write(0);
  TL.write(0);
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
//version 1.2
//Made by Aadhav Saravanan
