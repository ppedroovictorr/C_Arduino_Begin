void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

char ativa;
int led;


void loop() {
  // put your main code here, to run repeatedly:
  char comando = ativa;
  if (Serial.available() > 0)
  {
    ativa = Serial.read();
  }
  if (ativa == 'e')
  {
    led = Serial.parseInt();
    analogWrite(11, led);
    if (comando == 'i') ativa = 'i';
    else ativa = 'j';
  }
  if (ativa == 'i')
  {
    int teste1 = analogRead(A0);
    int teste2 = analogRead(A1);
    Serial.print(teste1);
    Serial.print(" , ");
    Serial.println(teste2);
delay(200);
  }


}
