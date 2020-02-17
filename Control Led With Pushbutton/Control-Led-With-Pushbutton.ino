int Button;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Button = analogRead(A0);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Button = analogRead(A0);
  delay(500);
  Serial.println(Button);
  if (Button >= 1000){
      digitalWrite(13, 0);

  }
  else{
      digitalWrite(13, 1);

  }
}
