/* 
  Arduino LCD Clock Program
  Dev: Roland Liedtke
  Date: 30/12/2024
*/

#include <LiquidCrystal.h>                    // LCD Library
#include <TimeLib.h>                          // Time Library

const byte lcd_RS = 2;
const byte lcd_EN = 3;
const byte lcd_D4 = 4;
const byte lcd_D5 = 5;
const byte lcd_D6 = 6;
const byte lcd_D7 = 7;
const byte lcd_COL = 16;
const byte lcd_ROW = 2;

byte sec;
byte min;
byte hours;
byte d;

LiquidCrystal lcd(lcd_RS, lcd_EN, lcd_D4, lcd_D5, lcd_D6, lcd_D7);    // Creates a variable of type LiquidCrystal(rs, {rw}, enable, d4, d5, d6, d7)


void setup() {
  lcd.begin(lcd_COL,lcd_ROW);                                         // Initializes the interface to the LCD screen
}


void loop() {
  time_t currentTime = now();                                          // Store the current time in currentTime variable

  sec = second(currentTime);
  min = minute(currentTime);
  hours = hour(currentTime);
  
  printTime();
}


void printTime() {
  lcd.home();
  if (hours < 10) {
    lcd.print(F(" "));
  }
  lcd.print(hours);

  lcd.print(F(":"));
  if (min < 10) {
    lcd.print(F("0"));
  }
  lcd.print(min);

  lcd.print(F(":"));
  if (sec < 10) {
    lcd.print(F("0"));
  }
  lcd.print(sec);
};
