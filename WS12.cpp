const int redLedPin = 9;
const int yellowLedPin = 10;
const int greenLedPin = 11;

const unsigned long redLightDuration = 3000;
const unsigned long yellowLightDuration = 1000;
const unsigned long greenLightDuration = 3000;

void setup(){
    //set LED as output
    pinMode(redLedPin, OUTPUT);
    pinMode(yellowLedPin, OUTPUT);
    pinMode(greenLedPin, OUTPUT);

    //initialize led off
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(greenLedPin, LOW);

}

void loop(){
    //red on
    digitalWrite(redLedPin, HIGH);
    delay(redLightDuration);
    digitalWrite(redLedPin, LOW);

    //yellow on
    digitalWrite(yellowLedPin, HIGH);
    delay(yellowLightDuration);
    digitalWrite(yellowLedPin, LOW);

    //green on
    digitalWrite(greenLedPin, HIGH);
    delay(greenLightDuration);
    digitalWrite(greenLedPin, LOW);
}