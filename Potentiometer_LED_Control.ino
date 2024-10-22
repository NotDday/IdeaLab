int potPin = A0;
int ledPin = 9;
int potValue = 0;
void setup() {
  pinMode(ledPin, OUTPUT);
}
void loop() {
  potValue = analogRead(potPin);
  int brightness = map(potValue, 0, 1023, 0, 255);
  analogWrite(ledPin, brightness);
}