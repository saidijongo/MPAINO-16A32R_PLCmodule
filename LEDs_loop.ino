const int totalLEDs = 32;
int ledPins[totalLEDs];

void setup() {
  for (int pin = 0; pin < totalLEDs; pin++) {
    ledPins[pin] = 54 + pin;
    pinMode(ledPins[pin], OUTPUT);
  }
}

void loop() {
  for (int pin = 0; pin < totalLEDs; pin++) {
    digitalWrite(ledPins[pin], HIGH);
    delay(300);
    digitalWrite(ledPins[pin], LOW);
  }
}
