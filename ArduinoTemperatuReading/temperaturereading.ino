//TMP36 Pin Variables
int sensorPin = A0;
int vibrate1 = 3;
int vibrate2 = 9;

void setup()
{
  
  Serial.begin(9600);  //Start the serial connection with the computer
}
 
void loop()                     // run over and over again
{
  
 
 //getting the voltage reading from the temperature sensor
 int reading = analogRead(sensorPin);  
 
 // converting that reading to voltage, for 3.3v arduino use 3.3
 float voltage = reading * 5.0;
 voltage /= 1024.0; 
 
 // now print out the temperature
 float temperatureC = (voltage - 0.5) * 100; 
 
 Serial.print(temperatureC); 
 Serial.println(" degrees C");
 
 delay(1000); //waiting a second
 
}

