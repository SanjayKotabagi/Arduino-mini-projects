int led = 6; 
int brightness = 0; 
int fadeAmount = 5; 

void setup() {
   pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:

void loop() {
   analogWrite(led, brightness);
   brightness = brightness + fadeAmount;
   if (brightness == 0 || brightness == 100) {
      fadeAmount = -fadeAmount ;
   }
  delay(200);
}
