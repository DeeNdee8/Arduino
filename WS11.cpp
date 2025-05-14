const int ledPin = 9;     
const int potPin = A0;     

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);

  // Map the potentiometer value (0-1023) to the PWM range (0-255)
  int brightness = map(potValue, 0, 1023, 0, 255);

  analogWrite(ledPin, brightness);

  delay(10);
}