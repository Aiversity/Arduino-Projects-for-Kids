  
  #include <DHT.h>; // Import the library of the DHT sensor
  
  #define SENSORPIN 12     // The sensor pin to which we are connecting in the arduino = Pin no. 12
  #define SENSORTYPE DHT22   // The DHT sensor model we are using = DHT22
  DHT dht(SENSORPIN, SENSORTYPE); // Define the model and pin number of the dht sensor
  
  float humidity;    //Variable for storing humidity
  float temperature; //Variable for storing temperature
  
  void setup()
  {
    Serial.begin(9600); 
    Serial.println("Starting to measure the humidity and temperature...");
    dht.begin();  //Starting the DHT22 sensor
  }
  
  void loop()
  {
      delay(2000); //delay of 2 seconds
      //Read data from the sensor and store it to variables humidity and temperature
      humidity = dht.readHumidity();
      temperature = dht.readTemperature();
      //Print the values of humidity and temperature in the serial monitor
      Serial.print("Humidity: ");
      Serial.println(humidity);
      Serial.print("Temperature: ");
      Serial.print(temperature);
      Serial.println(" Celsius");
  }
  
     
