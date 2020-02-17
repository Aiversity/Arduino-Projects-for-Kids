
int IR;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  IR = analogRead(A0);
  Serial.println(IR);
  if(IR <= ){ //Change the 2nd value according to your highest value. Check it with the test.ino code given in the previous folder
      digitalWrite(13, 0);

  }
  else{
      digitalWrite(13, 1);

  }
}
