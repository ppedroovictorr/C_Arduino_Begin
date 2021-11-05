#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
 lcd.begin();
  Serial.begin(9600);

  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.print("Ola");
}

int inicio = 1500;
int TaxaTempo = 350;
int TaxaLeitura = 50;
extern volatile unsigned long timer0_millis;


void loop() {
  // put your main code here, to run repeatedly:
  unsigned int tempo = millis();

  Serial.println(tempo);

  if (tempo <= TaxaTempo * 1.0)
  {
    analogWrite(6, 0);
  }
  else if (tempo > TaxaTempo * 1.0 and tempo <= TaxaTempo * 2.0)
  {
    analogWrite(6, TaxaLeitura * 1.0);
    // Serial.println(TaxaLeitura * 1.0);
  }
  else if (tempo > TaxaTempo * 2.0 and tempo <= TaxaTempo * 3.0)
  {
    analogWrite(6, TaxaLeitura * 2.0 );
    // Serial.println(TaxaLeitura * 2.0 );
  }
  else if (tempo > TaxaTempo * 3.0 and tempo <= TaxaTempo * 4.0)
  {
    analogWrite(6, TaxaLeitura * 3.0 );
    // Serial.println(TaxaLeitura * 3.0 );
  }
  else if (tempo > TaxaTempo * 4.0 and tempo <= TaxaTempo * 5.0)
  {
    analogWrite(6, TaxaLeitura * 4.0 );
    // Serial.println(TaxaLeitura * 4.0 );
  }
  else if (tempo > TaxaTempo * 5.0 and tempo <= TaxaTempo * 6.0)
  {
    analogWrite(6, TaxaLeitura * 5.0 );
    // Serial.println(TaxaLeitura * 5.0 );
  }
    else if (tempo > TaxaTempo * 6.0 and tempo <= TaxaTempo *7.0)
  {
    analogWrite(6, TaxaLeitura * 6.0 );
    // Serial.println(TaxaLeitura * 6.0 );
  }
    else if (tempo > TaxaTempo * 7.0 and tempo <= TaxaTempo * 8.0)
  {
    analogWrite(6, TaxaLeitura * 7.0 );
    // Serial.println(TaxaLeitura * 7.0 );
  }
  else {
    timer0_millis = 0;
  }

}
