#define LED_PIN 13 // Defining a pin number
void setup() {
  // put your setup code here, to run once: 
  pinMode(LED_PIN, OUTPUT) //Setting up a pin number for OUTPUT
}

void loop() {
  digitalWrite(LED_PIN, HIGH) //Send a high voltage to the led to turn it on
  delay(1000) // Delay for 1 second
  digitalWrite(LED_PIN, LOW)  //Send a low voltage to the led to turn it off
  delay(1000) // Delay for 1 second
  
}
