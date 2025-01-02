/* 
  Arduino LED Blink Potentiometer
  Dev: Roland Liedtke
  Date: 02/01/2025
  Version: 1
*/

const byte redLED = 8;
int value = 0;


void setup() {
  Serial.begin(9600);
  pinMode(redLED, OUTPUT);
}


void loop() {
  value = analogRead(A4);
  digitalWrite(redLED, HIGH);
  delay(value);
  digitalWrite(redLED, LOW);
  delay(value);
}
