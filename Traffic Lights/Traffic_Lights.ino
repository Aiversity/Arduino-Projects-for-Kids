#define Red_pin 8
#define Yellow_pin 10
#define Green_pin 12

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(Red_pin, OUTPUT);
  pinMode(Yellow_pin, OUTPUT);
  pinMode(Green_pin, OUTPUT);

}


// the loop function runs over and over again forever
void loop() {
  digitalWrite(Red_pin, HIGH);   
  delay(3000);               
  digitalWrite(Yellow_pin, HIGH);    
  delay(1000);
  digitalWrite(Red_pin, LOW);    
  digitalWrite(Yellow_pin, LOW);    
  digitalWrite(Green_pin, HIGH);
  delay(3000);

  //Green blinking    
  delay(500);
  digitalWrite(Green_pin, HIGH);    
  delay(500);
  digitalWrite(Green_pin, LOW);    
  delay(500);
  digitalWrite(Green_pin, HIGH);    
  delay(500);
  digitalWrite(Green_pin, LOW);    
  delay(500);
  digitalWrite(Green_pin, HIGH);    
  delay(500);
  digitalWrite(Green_pin, LOW);

  digitalWrite(Yellow_pin, HIGH);
  delay(1000);
  digitalWrite(Yellow_pin, LOW);
}
