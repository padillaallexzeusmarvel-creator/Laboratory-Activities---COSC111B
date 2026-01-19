// Laboratory Activity #6: Bidirectional Control Using Arduino and Python

const int RED_LED = 7;
const int GREEN_LED = 6;
const int BLUE_LED = 5;

const int BTN1 = 12;
const int BTN2 = 11;
const int BTN3 = 10;

bool redState = false;
bool greenState = false;
bool blueState = false;

bool lastBtn1 = HIGH;
bool lastBtn2 = HIGH;
bool lastBtn3 = HIGH;

void setup() {
  Serial.begin(9600);

  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode(BTN3, INPUT_PULLUP);
  
  lastBtn1 = digitalRead(BTN1);
  lastBtn2 = digitalRead(BTN2);
  lastBtn3 = digitalRead(BTN3);
}

void loop() {
  bool btn1 = digitalRead(BTN1);
  bool btn2 = digitalRead(BTN2);
  bool btn3 = digitalRead(BTN3);

  if (lastBtn1 == HIGH && btn1 == LOW) {
    Serial.println("R");
  }
  if (lastBtn2 == HIGH && btn2 == LOW) {
    Serial.println("G");
  }
  if (lastBtn3 == HIGH && btn3 == LOW) {
    Serial.println("B");
  }

  lastBtn1 = btn1;
  lastBtn2 = btn2;
  lastBtn3 = btn3;

  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    if (input.length() != 1) {
      Serial.println("ERROR: Enter only 1, 2, or 3");
      return;
    }

    char cmd = input.charAt(0);

    if (cmd == '1') {
      redState = !redState;
      digitalWrite(RED_LED, redState);
    }
    else if (cmd == '2') {
      greenState = !greenState;
      digitalWrite(GREEN_LED, greenState);
    }
    else if (cmd == '3') {
      blueState = !blueState;
      digitalWrite(BLUE_LED, blueState);
    }
    else {
      Serial.println("ERROR: Invalid input");
    }
  }
}
