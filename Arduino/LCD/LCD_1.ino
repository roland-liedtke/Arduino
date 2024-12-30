#include <LiquidCrystal.h>                    // LCD Library
#include <TimeLib.h>                          // Time Library

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);          // Creates a variable of type LiquidCrystal


void setup() {
  lcd.begin(16,2);                            // Initializes the interface to the LCD screen
}


void loop() {
  lcd.home();
  lcd.clear();
  lcd.print("Hej Roland! :D!");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,2);
  lcd.print("Jak sie masz?");
  lcd.print(now());
  delay(2000);
}
