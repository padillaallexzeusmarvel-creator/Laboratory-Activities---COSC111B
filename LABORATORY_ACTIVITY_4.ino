#define PHOTORESISTOR_PIN A0
#define LED_PIN 8

const int LIGHT_THRESHOLD = 220;  

bool isAlarmActive = false;

int readBrightness();
void checkSerialInput();

void setup() {
  Serial.begin(9600);
  Serial.println("Serial Alarm System Initialized.");
  Serial.println("Waiting for brightness readings...");
  
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  checkSerialInput();

  int rawBrightness = readBrightness();
  
  int mappedValue = map(rawBrightness, 0, 1023, 0, 255);

  Serial.print("Brightness: ");
  Serial.print(rawBrightness);
  Serial.print(" (Mapped: ");
  Serial.print(mappedValue);
  Serial.print(")");

  if (rawBrightness >= LIGHT_THRESHOLD) {
    if (isAlarmActive == false) {
      Serial.println("\n*** ALARM TRIGGERED! *");
    }
    isAlarmActive = true; 
  }

  if (isAlarmActive) {
    Serial.println(" (ALARM ACTIVE)");
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    
    checkSerialInput(); 
    
    digitalWrite(LED_PIN, LOW);
    delay(100);

  } else {
    Serial.println(" (System Safe)");
    digitalWrite(LED_PIN, LOW);
    delay(200); 
  }
}

void checkSerialInput() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    
    command.trim();
    command.toLowerCase();
    
    if (command == "stop") {
      isAlarmActive = false;
      digitalWrite(LED_PIN, LOW);
      Serial.println("\n*** ALARM STOPPED BY USER *");
    }
  }
}

int readBrightness() {
  int analogValue = analogRead(PHOTORESISTOR_PIN);
  return analogValue;
}