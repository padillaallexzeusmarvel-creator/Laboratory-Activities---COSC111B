// Define LED pins
int ledPins[] = {12, 11, 10, 9, 8};  // Red to Blue

void setup() {
  // Set each LED pin as OUTPUT
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn on LEDs one by one from Red to Blue
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPins[i], HIGH);  // Turn on LED
    delay(1000);                      // Wait 1 second
  }

  // Turn off LEDs one by one from Red to Blue
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPins[i], LOW);   // Turn off LED
    delay(1000);                      // Wait 1 second
  }
}
