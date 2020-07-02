int IRSensor = 2; // connect ir sensor to arduino pin 2
int LED = 7; // conect Led to arduino pin 13
int flag = 0;  
int reset = 8; // RESET BUTTON FOR STOPING THE ALARAM AFT


void setup() 
{
  pinMode (IRSensor, INPUT); 
  pinMode (LED, OUTPUT); 
  pinMode (reset, INPUT_PULLUP); 

}

void loop()
{
  int statusSensor = digitalRead (IRSensor);
  
  if(statusSensor == 0){
    flag = 1;
  }
  if(flag==1)  // ALRAM LOOP IF ANYTHING TRIGGERD 
  {
    digitalWrite(7,HIGH);
    delay(50);
    digitalWrite(7,LOW);
    delay(50 );
    }
  if(digitalRead(reset)==0){
    flag = 0 ; // RESET THE FALG TO 0 AND STOPS THE ALARAM LOOP
    }
}
