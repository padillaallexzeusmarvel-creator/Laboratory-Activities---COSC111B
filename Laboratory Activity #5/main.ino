// Laboratory Activity #5 – Receiving Serial Connection Using Arduino from Python

#include "led_functions.h"

void setup() {
  Serial.begin(9600);
  initLEDs();
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    char cmd = toupper(command);

    if (cmd == '\n' || cmd == '\r') {
      return;
    }
    
    if (cmd == 'R') {
      if (toggleRed()) Serial.println("RED ON");
      else Serial.println("RED OFF");
    }
    else if (cmd == 'G') {
      if (toggleGreen()) Serial.println("GREEN ON");
      else Serial.println("GREEN OFF");
    }
    else if (cmd == 'B') {
      if (toggleBlue()) Serial.println("BLUE ON");
      else Serial.println("BLUE OFF");
    }
    else if (cmd == 'A') {
      allOn();
      Serial.println("ALL ON");
    }
    else if (cmd == 'O') {
      allOff();
      Serial.println("ALL OFF");
    }
    else if (cmd == 'X') {
      Serial.println("EXIT");
    }
    else {
      Serial.println("ERR: UNKNOWN COMMAND");
    }
  }
}
