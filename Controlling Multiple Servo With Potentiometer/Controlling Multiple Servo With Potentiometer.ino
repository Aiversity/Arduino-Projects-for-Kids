#include <Servo.h>

int Sensor_input1 = A0;
int Sensor_input2 = A1;
int Sensor_input3 = A2;
int Sensor_input4 = A3;
int Sensor_Reading1;
int Sensor_Reading2;
int Sensor_Reading3;
int Sensor_Reading4; 
int Angle1;
int Angle2;
int Angle3;
int Angle4;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  Sensor_Reading1 = analogRead(Sensor_input1); // Taking the input from the potentiometer
  Angle1 = map(Sensor_Reading1, 0, 1023, 0, 180); /* Mapping the input of the potentiometer from
                                               0 to 1023 to the angle of servo from 0 to 180*/
  Serial.print("   Servo1 :");
  Serial.print(Sensor_Reading1);
  Serial.print(" = ");
  Serial.print(Angle1);
  servo1.write(Angle1); // Giving the servo the angle
  delay(15);
  
  Sensor_Reading2 = analogRead(Sensor_input2); // Taking the input from the potentiometer
  Angle2 = map(Sensor_Reading2, 0, 1023, 0, 180); /* Mapping the input of the potentiometer from
                                               0 to 1023 to the angle of servo from 0 to 180*/
  Serial.print("   Servo2 :");                                               
  Serial.print(Sensor_Reading2);
  Serial.print(" = ");
  Serial.print(Angle2);
  servo2.write(Angle2); // Giving the servo the angle
  delay(15);

  Sensor_Reading3 = analogRead(Sensor_input3); // Taking the input from the potentiometer
  Angle3 = map(Sensor_Reading3, 0, 1023, 0, 180); /* Mapping the input of the potentiometer from
                                               0 to 1023 to the angle of servo from 0 to 180*/
  Serial.print("   Servo3 :");
  Serial.print(Sensor_Reading3);
  Serial.print(" = ");
  Serial.print(Angle3);
  servo3.write(Angle3); // Giving the servo the angle
  delay(15);

  
  
  
  Sensor_Reading4 = analogRead(Sensor_input4); // Taking the input from the potentiometer
  Angle4 = map(Sensor_Reading4, 0, 1023, 0, 180); /* Mapping the input of the potentiometer from
                                                  0 to 1023 to the angle of servo from 0 to 180*/
  Serial.print("   Servo4 :");                                                  
  Serial.print(Sensor_Reading4);
  Serial.print(" = ");
  Serial.println(Angle4);
  servo4.write(Angle4);
  delay(15);
}
