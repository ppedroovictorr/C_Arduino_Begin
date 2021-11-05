void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

char comando;
int valor;

void loop() {
  // put your main code here, to run repeatedly:
  char oldcomando = comando;
  if (Serial.available() > 0)
  {
    comando = Serial.read();
  }

  if (comando == 'e')
  {
    valor = Serial.parseInt();
    analogWrite(11, valor);
    if (oldcomando == 'i')
  {
    comando = 'i';
    Serial.readString();
  }
  }

  if (comando == 'i')
  {
    float teste = analogRead(A0);
    int teste2 = analogRead(A1);
    Serial.println(teste);
    
      delay(200);
  }
}
