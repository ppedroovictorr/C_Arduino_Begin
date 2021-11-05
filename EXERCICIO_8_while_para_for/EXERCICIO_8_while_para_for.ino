///#include <Wire.h>
//#include <LiquidCrystal_I2C.h>
String leitura;

void setup() {
  // put your setup code here, to run once:

  // lcd.begin();         // initialize the LCD
  // lcd.backlight();     // Turn on the blacklight and print a message.
  // Serial.begin(9600);    // inicia o arduino
}

int inicio = 1500;
int TaxaTempo = 350;
int TaxaLeitura = 50;
extern volatile unsigned long timer0_millis;


void loop() {

  // put your main code here, to run repeatedly:
  unsigned int tempo = millis();

  //lcd.backlight();
  //lcd.clear(); // limpa lcd
  Serial.println(tempo);

  if (tempo <= TaxaTempo * 1)
  {
    analogWrite(6, 0);
  }
  else
  {
    int i = 1;
    for (int i = 1; i <= 7; i++)
    {
      tempo = millis();
      if (tempo > TaxaTempo * i and tempo <= TaxaTempo * (i + 1))
      {
        analogWrite(6, TaxaLeitura * i);

      }
      else
      {
        timer0_millis = 0;
      }
      delay(TaxaTempo);
    }
  }
}
