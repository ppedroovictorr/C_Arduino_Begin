void setup() {
  // put your setup code here, to run once:

  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);

  pinMode(4, INPUT_PULLUP);
  pinMode(5, OUTPUT);
  digitalWrite(5, 1);
  digitalWrite(13, 0);
  analogWrite(9, 0);

  Serial.begin(9600);

}
//variavel entra fora do setup
int memoria = 0;

void loop() {


  if (digitalRead(2) == 0)
  {
    memoria = 1;
  }
  if (digitalRead(4) == 0)
  {
    memoria = 0;
  }
  //inicia a rodar o processo
  if (memoria == 1)
  {
    int entradaA1 = analogRead(A1);
    Serial.println(entradaA1);
    //alarme de baixa
    if (entradaA1 < 204)
    {
      digitalWrite(5, 1);
      digitalWrite(13, 1);
      analogWrite(9, 255);
    }
    //alarme de alta
    else if (entradaA1 > 812)
    {
      digitalWrite(5, 0);
      digitalWrite(13, 0);
      analogWrite(9, 0);
    }
    if (entradaA1>=204 and entradaA1<=812) {
      digitalWrite(5, 1);
      digitalWrite(13, 0);
      analogWrite(9, entradaA1 / 4);
    }
  }
  else
  {
    digitalWrite(5, 1);
    digitalWrite(13, 0);
    analogWrite(9, 0);
  }

}
