// Finals Laboratory Exam - Arduino-to-Python Client System

const int BUTTON = 2;
const int GROUP = 5;

bool lastState = HIGH;

void setup() {
  pinMode(BUTTON, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  bool currentState = digitalRead(BUTTON);

  if (lastState == HIGH && currentState == LOW) {
    Serial.println(GROUP);
    delay(200);
  }

  lastState = currentState;
}
