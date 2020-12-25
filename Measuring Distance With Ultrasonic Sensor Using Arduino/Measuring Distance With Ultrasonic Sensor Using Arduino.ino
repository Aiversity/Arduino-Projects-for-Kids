int trigger = 4;
int echo = 2;
int duration;
int distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  digitalWrite(trigger, 0);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  digitalWrite(trigger, 1);
  delayMicroseconds(10);
  digitalWrite(trigger, 0);
  duration = pulseIn(echo, 1);
  distance = duration*0.0340/2;
  Serial.print("Distance From The Object: ");
  Serial.println(distance);
  
}
