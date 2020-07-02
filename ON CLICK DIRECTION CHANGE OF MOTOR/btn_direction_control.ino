int btn_1 = 7;
int btn_2 = 8;
int m1 = 2;  // motor wire +ve
int m2 = 12; // motor wire -ve
void setup() {
  pinMode(btn_1,INPUT_PULLUP);
  pinMode(btn_2,INPUT_PULLUP);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
}

void loop() {
  if(digitalRead(btn_1)==0){ // Indicate if btn one pressed
    digitalWrite(m2,LOW);
    digitalWrite(m1,HIGH);
    }
     
  else if(digitalRead(btn_2)==0){  // Indicate if btn two pressed
    digitalWrite(m2,HIGH);
    digitalWrite(m1,LOW);
    }
    else{
    digitalWrite(m2,LOW);
    digitalWrite(m1,LOW);
    } 
}
