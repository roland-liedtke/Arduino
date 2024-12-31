/* 
  Arduino Temp Sensor Reader on LCD
  Dev: Roland Liedtke
  Date: 31/12/2024
*/

#include <LiquidCrystal.h>                    // LCD Library

const byte lcd_RS = 2;
const byte lcd_EN = 3;
const byte lcd_D4 = 4;
const byte lcd_D5 = 5;
const byte lcd_D6 = 6;
const byte lcd_D7 = 7;
const byte lcd_COL = 16;
const byte lcd_ROW = 2;

const byte tempSensor = A1;

LiquidCrystal lcd(lcd_RS, lcd_EN, lcd_D4, lcd_D5, lcd_D6, lcd_D7);    // Creates a variable of type LiquidCrystal(rs, {rw}, enable, d4, d5, d6, d7)

void setup() {
  lcd.begin(lcd_COL,lcd_ROW);                                         // Initializes the interface to the LCD screen
}


void loop() {
  lcd.home();
  float temp = ((analogRead(tempSensor) * 5.0) / 1024.0) * 100;
  lcd.print("Temperatura: ");
  lcd.setCursor(0, 1);
  lcd.print(temp);
  lcd.print(" C");
  delay(2000);
}
