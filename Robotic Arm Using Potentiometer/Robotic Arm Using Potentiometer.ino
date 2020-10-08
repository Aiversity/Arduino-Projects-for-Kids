#include <Servo.h>
Servo s1;
Servo s2;
Servo s3;


int potentiometerinput;
int potentiometerinput2; 
int potentiometerinput3;


void setup() {
   //put your setup code here, to run once:
  s1.attach(9);
  s2.attach(10);
  s3.attach(11);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   grip();
   elbow();
   
   arm();
}

void grip(){
   s1.attach(9);
   int potentiometerinput=analogRead(A0);
   potentiometerinput= map(potentiometerinput, 0, 1023, 0, 180);
   Serial.println("   ");
   Serial.print(potentiometerinput);
   s1.write(potentiometerinput);
   delay(50);
   s1.detach();
}

void arm(){
     s2.attach(10);
int potentiometerinput2=analogRead(A1);
   potentiometerinput2 = map(potentiometerinput2, 0, 1023, 0, 180);
   Serial.print("   ");
   Serial.print(potentiometerinput2);
   s2.write(potentiometerinput2);
   delay(50);
   s2.detach();
}

void elbow(){

   s3.attach(11);
   int potentiometerinput3=analogRead(A2);
   potentiometerinput3 = map(potentiometerinput3, 0, 1023, 0, 180);
   Serial.print("   ");
   Serial.print(potentiometerinput3);
     s3.write(potentiometerinput3);
   delay(50);
   s3.detach();
}
