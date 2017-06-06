const int switchPin = 2;
const int ledPin = 4;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(ledPin, HIGH);
}

void loop() {

  if(digitalRead(switchPin) == LOW)
    digitalWrite(ledPin, LOW);
  else
    digitalWrite(ledPin, HIGH);

}
