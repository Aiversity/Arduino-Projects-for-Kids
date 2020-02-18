int Light;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Light = analogRead(A0);
  Serial.println(Light);
  //To check the second value try test.ino in the previous folder. My value is 870 and above
  if(Light >= 870){  
    digitalWrite(13, 1);
  }
  else{
    digitalWrite(13, 0);
  }
}
