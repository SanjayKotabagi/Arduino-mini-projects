#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#define trigPin 2
#define echoPin 3
#define startpin 4

float time;
float distance;


LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin();
  lcd.backlight();
}

void loop()
{
  lcd.backlight();
  lcd.print("Distance Measure");
    lcd.clear();
    digitalWrite(trigPin, LOW); 
    // this clears the trig pin by setting it in low        
    delayMicroseconds(5);

      // Trigger the sensor by setting the trigPin high for 10 microseconds:
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

     time = pulseIn(echoPin,HIGH);
     distance = time * 0.035/2;
     lcd.print("Distance:");
     lcd.print(distance);
     lcd.print("cm");
     lcd.setCursor(0,1);
     lcd.print("Distance:");
     lcd.print(distance/100);
     lcd.print("m");
     Serial.print("Distance cm : ");
     Serial.println(distance);
     delay(3000);
     lcd.clear();
}
