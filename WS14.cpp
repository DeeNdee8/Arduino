#include <LiquidCrystal_I2C.h>
#include <Wire.h>

const int trigPin = 9;
const int echoPin = 10;
long duration;
int distanceCm;
LiquidCrystal_I2C lcd(0x27,16,2);

void setup(){
  lcd.backlight();
  lcd.init();
  lcd.print("Distance: ");
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distanceCm = duration* 0.0343/2;
  lcd.setCursor(0,1);
  lcd.print(distanceCm);
  lcd.print("cm");
  delay(500);

}