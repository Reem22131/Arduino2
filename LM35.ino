int lm35Pin = A0; 
float temperatureC; 
float temperatureF; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(lm35Pin);
  float voltage = sensorValue * (5.0 / 1023.0);
  temperatureC = voltage * 100;  // 10mV per degree Celsius
   temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  Serial.print("Temperature in Celsius: ");
  Serial.print(temperatureC);
  Serial.println(" °C");
  Serial.print("Temperature in Fahrenheit: ");
  Serial.print(temperatureF);
  Serial.println(" °F");
  delay(1000);
}
