int l1 = 4; // DC motor one wire
int l2 = 8; // DC motor another wire

void setup() {
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  
  digitalWrite(l1,LOW);
  digitalWrite(l2,HIGH);
  Serial.println("Left to Write");
  delay(10000);   // 10 sec of delay for direction left to write
  
  
  digitalWrite(l2,LOW);
  digitalWrite(l1,HIGH);
  delay(10000);   // 10 sec of delay for direction left to write
  Serial.println("Write to left");
}
