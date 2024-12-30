/* 
  Arduino Buzzer Simple Piano
  Dev: Roland Liedtke
  Date: 30/12/2024
*/

const int buzzer = 12;


void setup(){
  pinMode(buzzer, OUTPUT);
}


void loop(){
  tone(buzzer, 261);   // Send 261 Hz sound signal...
  delay(1000);        
  tone(buzzer, 293);  
  delay(1000);
  tone(buzzer, 329);
  delay(1000);
  tone(buzzer, 349);
  delay(1000);
  tone(buzzer, 391);
  delay(1000);
  tone(buzzer, 440);
  delay(1000);
  tone(buzzer, 493);
  delay(1000);
  tone(buzzer, 523);
  delay(1000);

  noTone(buzzer);     // Stop sound...
  digitalWrite(buzzer, HIGH);
  delay(5000);        // ...for 1sec
}
