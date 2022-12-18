#include <Servo.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;

int pos = 0-10;

void setup() {
  Servo1.attach(8);
  Servo2.attach(9);
  Servo3.attach(10);
  Servo4.attach(11);

  Servo1.write(pos);
  Servo2.write(pos);
  Servo3.write(pos);
  Servo4.write(pos);
}

void loop() {
  delay(500);
  for (pos = 0; pos <= 200; pos += 1) { 
    Servo1.write(pos);
    Servo2.write(pos);
    Servo3.write(pos);
    Servo4.write(pos);
    delay(10);
  }
  delay(500);
  for (pos = 200; pos >= 0; pos -= 1) {
    Servo1.write(pos);
    Servo2.write(pos);
    Servo3.write(pos);
    Servo4.write(pos); 
    delay(10);
  }
  delay(500);
}