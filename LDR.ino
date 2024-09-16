#define led 13
int ldrPin = A0;  
int ldrValue = 0; 
unsigned long res=0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  ldrValue = analogRead(ldrPin);
  ldrValue=(ldrValue/1023)*5;
  res=(1000*ldrValue)/(5-ldrValue);
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);
  if(res>=30000)
  {
    digitalWrite(led,HIGH);
  }else digitalWrite(led,LOW);
  delay(500);
}
