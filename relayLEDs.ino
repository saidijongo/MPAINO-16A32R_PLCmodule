const int tatalLEDs = 32;
int ledPins[] = { 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85};

void setup(){
  for(int pin=0; pin < tatalLEDs;pin++){
    pinMode(ledPins[pin], OUTPUT);
  }
}

void loop(){
  for(int pin=0; pin < tatalLEDs;pin++){
    digitalWrite(ledPins[pin], HIGH);
    delay(3000);
    digitalWrite(ledPins[pin],LOW);
  }

}
