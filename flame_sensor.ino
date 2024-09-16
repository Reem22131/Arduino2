int led = 3;
int flameSensorPin = A0;  
int flameValue;    

void setup() {
 pinMode ( led, OUTPUT );
  Serial.begin(9600);
}

void loop() {
  flameValue = analogRead(flameSensorPin);
  Serial.print("Flame Intensity: ");
  Serial.println(flameValue);
  if (flameValue < 200) {  
    Serial.println("Flame Detected!");
    digitalWrite ( led , HIGH ) ;
  } else {
    Serial.println("No Flame Detected.");
  }
  
  delay(500); 
}

