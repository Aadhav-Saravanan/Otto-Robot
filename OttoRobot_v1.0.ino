#include <Servo.h>//Servo library

Servo myServo, myServo2, myServo3, myServo4;
int servoDelay = 1000;// delay time for the servo                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     ;
int servoMax = 180;// Max angle for the servo motor
int servoMin = 0;//Min angle for the servo motor

void setup() {
  myServo.attach(8);//Pin for
  myServo2.attach(9);//Pin for
  myServo3.attach(10);//Pin for
  myServo4.attach(11);//Pin for
}

void loop() {
  myServo.write(servoMax);
  myServo2.write(servoMax);
  myServo3.write(servoMax);
  myServo4.write(servoMax);
  
  delay(servoDelay);
  
  myServo.write(servoMin);
  myServo2.write(servoMin);
  myServo3.write(servoMin);
  myServo4.write(servoMin);
  
  delay(servoDelay);
  
}
//version 1.0
