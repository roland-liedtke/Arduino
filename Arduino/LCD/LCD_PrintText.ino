/* 
  Arduino LCD Simple Program
  Dev: Roland Liedtke
  Date: 30/12/2024
  LCD: justPi 16x2 with HD44780 driver
  Version: 1
*/

#include <LiquidCrystal.h>                    // LCD Library

const byte lcd_RS = 2;                        // Memory optimisation
const byte lcd_EN = 3;
const byte lcd_D4 = 4;
const byte lcd_D5 = 5;
const byte lcd_D6 = 6;
const byte lcd_D7 = 7;
const byte lcd_COL = 16;
const byte lcd_ROW = 2;

LiquidCrystal lcd(lcd_RS, lcd_EN, lcd_D4, lcd_D5, lcd_D6, lcd_D7);    // Creates a variable of type LiquidCrystal(rs, {rw}, enable, d4, d5, d6, d7)

void setup() {
  lcd.begin(lcd_COL,lcd_ROW);                                         // Initializes the interface to the LCD screen
}

void loop() {
  lcd.home();
  lcd.print("Hello!");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("Roland! :D");
  delay(1000);
  lcd.clear();
}
