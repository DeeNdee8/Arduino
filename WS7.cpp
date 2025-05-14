const int ledPin = 3;

void setup(){
  pinMode(ledPin, OUTPUT);
}

void loop(){
  digitalWrite(ledPin, HIGH); //turn led on
  delay(1000); 

  digitalWrite(ledPin, LOW); //turn led off
  delay(1000);
}
