#include <Wire.h>
#include <LiquidCrystal_I2C.h>
String leitura;

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  // initialize the LCD
  lcd.begin();
  Serial.begin(9600);

  // Turn on the blacklight and print a message.
  lcd.backlight();
  
  lcd.print("Ola");
}

void loop()
{
  leitura = "";
  while (Serial.available() > 0)
  {
    lcd.clear();
    lcd.print("Ola mundo");
    leitura = Serial.readString();
    lcd.setCursor(0, 1);
    lcd.print(leitura);

  }

}
