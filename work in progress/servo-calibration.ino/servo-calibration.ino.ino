#include <Servo.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;

int pos = 0;


void setup() {
  Servo1.attach(8);//lower right
  Servo2.attach(9);//lower left
  Servo3.attach(10);//upper right
  Servo4.attach(11);//upper left

//initializing all servos to 0:
  Servo1.write(pos);
  Servo2.write(pos);
  Servo3.write(pos);
  Servo4.write(pos);
  delay(1000);

//moving each servo after each other to 25 uits (idk if it is actually degrees)
  /*
  Servo1.write(25);
  delay(1000);

  
  Servo2.write(25);
  delay(1000);
  
  
  Servo3.write(25);
  delay(1000);

  
  Servo4.write(25);
*/
}

void loop() {
  

}