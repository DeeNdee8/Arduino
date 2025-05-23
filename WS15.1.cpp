const int lm35Pin = A0;       
const int trigPin = 9;      
const int echoPin = 10;     

void setup() {
  Serial.begin(9600);       
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);   
}

long readUltrasonicDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);
  return duration;
}

void loop() {
  int rawValue = analogRead(lm35Pin);
  float voltage = (rawValue / 1023.0) * 5000.0;
  float celsius = voltage / 10.0;
  float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

  long duration = readUltrasonicDistance();
  float distanceCM = (duration / 2.0) * 0.0343; // Speed of sound in cm/µs is 0.0343
  float distanceIN = distanceCM / 2.54;

  Serial.print("Temperature: ");
  Serial.print(celsius);
  Serial.print("°C, ");
  Serial.print(fahrenheit);
  Serial.print("°F  |  Distance: ");
  Serial.print(distanceCM);
  Serial.print(" cm, ");
  Serial.print(distanceIN);
  Serial.println(" in");

  delay(3000); 
}