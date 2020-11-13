#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int ProxSensor1=3;
int sensorPin=A0; //input pin for ldr
int sensorValue; //variable to store value coming from sensor
int brightness=0;
int fadeamt=5; 
float ratiobrightness;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    lcd.begin(16, 2);
    lcd.clear();
    pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.println("LDR VALUES");
  //analogWrite(9, brightness);
  sensorValue=analogRead(sensorPin);
  Serial.println(sensorValue);
  lcd.setCursor(6,1);  lcd.print(sensorValue);
  if(sensorValue<=510 && sensorValue>200) //orig 510 and 200
  { 
    
    ratiobrightness=2000/((float)sensorValue);
    analogWrite(9, ratiobrightness); 

  }
  else if(sensorValue<200) //200
  {  analogWrite(9,50);   }
  else
  { analogWrite(9,0); }
 
  
  
 delay(50);
}
