int buz = 13; // BUZZER +VE WIRE
int LDR_DATA = 12; // LDR SENSOR DATA OUT PIN

void setup() {
pinMode(buz,OUTPUT);
pinMode(LDR_DATA,INPUT);
}

void loop() {
  if(digitalRead(LDR_DATA)==LOW)
  {
  digitalWrite(buz,HIGH); 
  delay(100); 
  }
  digitalWrite(buz,LOW); 
}
