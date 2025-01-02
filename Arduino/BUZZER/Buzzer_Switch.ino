/* 
  Arduino Simple Buzzer Alarm
  Dev: Roland Liedtke
  Date: 30/12/2024
  Buzzer: 12mm with generator
  Version: 1
*/

const byte buzzerPin = 9;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  digitalWrite(buzzerPin, HIGH);
  delay(1000);
  digitalWrite(buzzerPin, LOW);
  delay(1000);
}
