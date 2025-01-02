/* 
  Arduino Temp Sensor Reader on LCD
  Dev: Roland Liedtke
  Date: 02/01/2025
  Sensor: DHT11
  Version: 2
*/

#include <LiquidCrystal.h>                    // LCD Library
#include <DHT.h>                              // DHT Sensors Library

const byte lcd_RS = 2;                        // LCD Pins
const byte lcd_EN = 3;
const byte lcd_D4 = 4;
const byte lcd_D5 = 5;
const byte lcd_D6 = 6;
const byte lcd_D7 = 7;
const byte lcd_COL = 16;                      // LCD Dimensions
const byte lcd_ROW = 2;

const byte DHT11_PIN = 8;                     // DHT11 Sensor Pin

LiquidCrystal lcd(lcd_RS, lcd_EN, lcd_D4, lcd_D5, lcd_D6, lcd_D7);
DHT dht;

void setup() {
  lcd.begin(lcd_COL,lcd_ROW);                                         // Initializes the interface to the LCD screen
  dht.setup(DHT11_PIN);
  Serial.begin(9600);
}


void loop() {
  
  int humidity = dht.getHumidity();                                   // Get humidity value
  int temperature = dht.getTemperature();                             // Get temperature value

  if(dht.getStatusString() == "OK") {
    lcd.home();
    lcd.print("Humidity: ");                                                    
    lcd.print(humidity);
    lcd.print("%RH ");

    lcd.setCursor(0,1);
    lcd.print("Temperature: ");
    lcd.print(temperature);
    lcd.print((char)223);
  } else {
    Serial.print("Error: ");
    Serial.println(dht.getStatusString());
  }
  
  delay(dht.getMinimumSamplingPeriod());
}
