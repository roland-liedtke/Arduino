/* 
  Arduino 5 Led Switch
  Dev: Roland Liedtke
  Date: 02/01/2025
  Version: 1
*/

int value = 0;


void setup() {
  pinMode(8, OUTPUT);                                                 // LEDs
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  value = analogRead(A4);                                             // Read value from ADC   
  // !! 4 & 5 Diod flickering
  value = map(value, 0, 1021, 1, 5);                                  // Map Value from 0-1023 to 1-5

  if (value == 1) {
      digitalWrite(8, HIGH); 
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW); 
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW); 
  } else if (value == 2) {
      digitalWrite(8, LOW); 
      digitalWrite(9, HIGH); 
      digitalWrite(10, LOW); 
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW);       
  } else if (value == 3) {
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW); 
      digitalWrite(10, HIGH); 
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW);       
  } else if (value == 4) {
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW); 
      digitalWrite(11, HIGH); 
      digitalWrite(12, LOW);       
  } else {
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW); 
      digitalWrite(11, LOW); 
      digitalWrite(12, HIGH);       
  }
  delay(50);
}
