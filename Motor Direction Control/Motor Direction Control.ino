void setup() {
  pinMode(8,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(8,LOW);
  digitalWrite(12,HIGH);
  Serial.println("Write to Left");

  delay(5000);
  digitalWrite(12,LOW);
  delay(5000);
  
  digitalWrite(8,HIGH);
  digitalWrite(12,LOW);
   Serial.println("Left to Write");

  delay(5000);
  digitalWrite(8,LOW);
  delay(5000);
  
}
