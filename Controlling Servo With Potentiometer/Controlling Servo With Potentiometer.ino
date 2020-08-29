#include <Servo.h>

int Sensor_input = A0;
int Sensor_Reading;
int Angle;
Servo servo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  Sensor_Reading = analogRead(Sensor_input); // Taking the input from the potentiometer
  Angle = map(Sensor_Reading, 0, 1023, 0, 180); /* Mapping the input of the potentiometer from
                                               0 to 1023 to the angle of servo from 0 to 180*/
  Serial.print(Sensor_Reading);
  Serial.print(" = ");
  Serial.println(Angle);
  servo.write(Angle); // Giving the servo the angle
  delay(15);
}
