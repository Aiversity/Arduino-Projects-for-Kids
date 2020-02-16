int Potentionmeter;
void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  Potentionmeter = analogRead(A0);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Potentionmeter = analogRead(A0);
  Potentionmeter = Potentionmeter / 5;
  analogWrite(11, Potentionmeter);
  Serial.println(Potentionmeter);
  delay(50);


}
