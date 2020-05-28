#define trigger 13  
#define echo 12 

int led1 = 11 ; 
int led2 = 10 ; 
int led3 = 9 ; 
int led4 = 8 ; 
int led5 = 7 ;
int Buzzer = 6;


void setup()
{
Serial.begin(9600);
pinMode(trigger, OUTPUT);
pinMode(echo, INPUT);
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(Buzzer, OUTPUT);
 
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(Buzzer, LOW);



 delay(1000); 
}
 
void loop()
{
 int duration, distance;
 digitalWrite(trigger, HIGH);
 
delayMicroseconds(1000);  
digitalWrite(trigger, LOW);
 
 
duration = pulseIn(echo,HIGH);
 
distance = ( duration / 2) / 29.1;
Serial.println("cm:"); 
Serial.println(distance);
 
 
if(  (distance > 0) && (distance <= 10)   ) 
{
  digitalWrite(Buzzer, HIGH); 
  delay(2000);
  digitalWrite(Buzzer, LOW);
  delay(2000);
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH); 
} else
if(  (distance > 10) && (distance <= 20)  ) 
{
 
  digitalWrite(led1, LOW); 
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH); 
 
} else
 
if(  (distance > 20) && (distance <= 30)  ) 
{
 
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
} else
 
if(  (distance > 30) && (distance <= 40)  ) 
{
 
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
} else
 
if(  (distance > 50) && (distance <= 60)  ) 
{
 
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
} else
 
if(  distance > 60 ) 
{
 
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
} 
 
}
