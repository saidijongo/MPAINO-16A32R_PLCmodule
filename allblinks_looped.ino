//const int totalLEDs = 32;
const int totalLEDs = 32; //32 pumps with dc motor driver

int ledPins[totalLEDs];

void setup() {
  for (int pin = 0; pin < totalLEDs; pin++) {
    ledPins[pin] = 54 + pin;
    pinMode(ledPins[pin], OUTPUT);
  }
}

void loop() {
  // Turn on all LEDs
  for (int pin = 0; pin < totalLEDs; pin++) {
    digitalWrite(ledPins[pin], HIGH);
  }
  delay(30000);  // Run all LEDs/ ON

  // Turn off all LEDs
  for (int pin = 0; pin < totalLEDs; pin++) {
    digitalWrite(ledPins[pin], LOW);
  }
  delay(300);  // Delay with all LEDs off
}
