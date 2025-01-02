/* 
  Arduino Temp Sensor Reader
  Dev: Roland Liedtke
  Date: 30/12/2024
  Sensor: LM35 DZ 
*/

const byte tempSensor = A1;


void setup() {
  Serial.begin(9600);
  Serial.println("Test czujnika temperatury");
}


void loop() {
  float temp = ((analogRead(tempSensor) * 5.0) / 1024.0) * 100;
  Serial.print("Temperatura: ");
  Serial.print(temp);
  Serial.println(" ℃");
  delay(5000);
}
