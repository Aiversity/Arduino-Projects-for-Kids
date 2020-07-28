#include <Servo.h>

Servo servo;
int a;
void setup() {
  // put your setup code here, to run once:
  servo.attach(9);//We are attaching our servo to pin 9
  servo.write(0);// Now, we will output the desired angle. For me, it is 0
}

void loop() {
  // put your main code here, to run repeatedly:
  for (a = 0; a <= 180; a += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo.write(a);              // tell servo to go to aition in variable 'a'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
  for (a = 180; a >= 0; a -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo.write(a);              // tell servo to go to aition in variable 'a'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
}  
