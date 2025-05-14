const int ledPin = 9;

void setup() {

  pinMode(ledPin, OUTPUT);
}

void loop() {
  int brightnessValue = 200; //255 100%
  analogWrite(ledPin, brightnessValue);
  delay(1000);
  
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    analogWrite(ledPin, fadeValue);
    delay(100); 
  }

  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(ledPin, fadeValue);
    delay(100);
  }
}