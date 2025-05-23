#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,16,2);

const int lm35Pin = A0;

void setup(){
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.print("Temperature");
}

void loop(){
  int rawValue = analogRead(lm35Pin);
  float voltage = (rawValue/1023.0)* 5000;
  float celsius = voltage / 10.0;
  float fahrenheit = (celsius*9.0/5.0)+32.0;

  //output monitor
  Serial.print("Temp");
  Serial.print(celsius);
  Serial.print("C,");
  Serial.print(fahrenheit);
  Serial.print("F");

  //output lcd
  lcd.setCursor(0,1);
  lcd.print(celsius);
  lcd.print("C");
  lcd.setCursor(8,1);
  lcd.print(fahrenheit);
  lcd.print("F");

  delay(1000);
}