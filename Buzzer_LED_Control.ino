int buttonPin = 2;
int ledPin1 = 9;
int ledPin2 = 10;
int buzzerPin = 11;
int buttonState = 0;
void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}
void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(buzzerPin, HIGH);
    delay(1000);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    delay(1000);
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin2, LOW);
  }
}