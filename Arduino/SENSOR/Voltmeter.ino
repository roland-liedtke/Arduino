/* 
  Arduino Voltmeter 0-5 V
  Dev: Roland Liedtke
  Date: 02/01/2025
  Converter: ADC 
  Version: 1
*/

#include <LiquidCrystal.h>                    // LCD Library

const byte lcd_RS = 2;                        // LCD Pins
const byte lcd_EN = 3;
const byte lcd_D4 = 4;
const byte lcd_D5 = 5;
const byte lcd_D6 = 6;
const byte lcd_D7 = 7;
const byte lcd_COL = 16;                      // LCD Dimensions
const byte lcd_ROW = 2;

int value = 0;
float voltage = 0;

LiquidCrystal lcd(lcd_RS, lcd_EN, lcd_D4, lcd_D5, lcd_D6, lcd_D7);

void setup() {
  lcd.begin(lcd_COL,lcd_ROW);                                         // Initializes the interface to the LCD screen
  Serial.begin(9600);
}


void loop() {
  value = analogRead(A4);
  lcd.home();
  lcd.print("Voltage: ");
  voltage = value * (5.0/1024);
  lcd.print(voltage);
  lcd.print(" V");
  delay(200);
  lcd.clear();
}
