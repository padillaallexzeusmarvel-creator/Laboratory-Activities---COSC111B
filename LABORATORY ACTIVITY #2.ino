int ledPins[] = {12, 11, 10, 9, 8};  

void setup() {
  int i = 0;
  while (i < 5) {
    pinMode(ledPins[i], OUTPUT);
    i++;
  }
}

void loop() {
  int i = 0;

  // Fade ON LEDs one by one
  while (i < 5) {
    for (int brightness = 0; brightness <= 255; brightness += 5) {
      analogWrite(ledPins[i], brightness);
      delay(20);
    }
    delay(1000); // 1 sec before next LED
    i++;
  }

  i = 0;
  // Fade OFF LEDs one by one
  while (i < 5) {
    for (int brightness = 255; brightness >= 0; brightness -= 5) {
      analogWrite(ledPins[i], brightness);
      delay(20);
    }
    delay(1000); // 1 sec before next LED
    i++;
  }
}