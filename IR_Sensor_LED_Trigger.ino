int irSensorPin = 2;
int ledPin = 13;
void setup() {
  pinMode(irSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}
void loop() {
  int sensorValue = digitalRead(irSensorPin);
  if (sensorValue == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}