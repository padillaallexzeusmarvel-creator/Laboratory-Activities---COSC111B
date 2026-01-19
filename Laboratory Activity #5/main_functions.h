// Laboratory Activity #5 – Receiving Serial Connection Using Arduino from Python

#ifndef LED_FUNCTIONS_H
#define LED_FUNCTIONS_H

const int RED_PIN = 8;
const int GREEN_PIN = 9;
const int BLUE_PIN = 10;

void initLEDs() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
}

bool toggleRed() {
  int state = digitalRead(RED_PIN);
  digitalWrite(RED_PIN, !state);
  return !state;
}

bool toggleGreen() {
  int state = digitalRead(GREEN_PIN);
  digitalWrite(GREEN_PIN, !state);
  return !state;
}

bool toggleBlue() {
  int state = digitalRead(BLUE_PIN);
  digitalWrite(BLUE_PIN, !state);
  return !state;
}

void allOn() {
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
}

void allOff() {
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
}

#endif

