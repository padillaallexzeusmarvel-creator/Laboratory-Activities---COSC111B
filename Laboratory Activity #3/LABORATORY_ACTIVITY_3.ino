//Pin Definitions
#define THERMISTOR_PIN A0
#define PHOTORESISTOR_PIN A2
#define ALERT_PIN 12   // Shared pin for LED and buzzer

//Threshold Values
const int TEMP_THRESHOLD = 50;     //in Celsius
const int LIGHT_THRESHOLD = 220;   //brightness level

//Function Prototypes
float readTemperature();
int readBrightness();

void setup() {
  pinMode(ALERT_PIN, OUTPUT);
  pinMode(THERMISTOR_PIN, INPUT);
  pinMode(PHOTORESISTOR_PIN, INPUT);
}

void loop() {
  float temperature = readTemperature();
  int brightness = readBrightness();

  //Fire detection condition
  if (temperature >= TEMP_THRESHOLD && brightness >= LIGHT_THRESHOLD) {
    // Fast blinking LED and buzzer
    digitalWrite(ALERT_PIN, HIGH);
    delay(100);
    digitalWrite(ALERT_PIN, LOW);
    delay(100);
  } else {
    digitalWrite(ALERT_PIN, LOW);
  }

  delay(500); //Delay before next check
}

//Function to read temperature from thermistor ---
float readTemperature() {
  int sensorValue = analogRead(THERMISTOR_PIN);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperatureC = voltage * 100.0; 
  return temperatureC;
}

//Function to read brightness from photoresistor
int readBrightness() {
  int sensorValue = analogRead(PHOTORESISTOR_PIN);
  return sensorValue;
}