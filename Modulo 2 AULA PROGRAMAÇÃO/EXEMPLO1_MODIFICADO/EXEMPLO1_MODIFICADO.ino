/* Mude a entrada para A1
   Aumente 1 no divisor
   comece o multiplicador em 3.5
   comece as faixas de comparação em 90 variando de 110 em 110
*/

void setup() {
  Serial.begin(9600);
}

int analogica = A2 * 1.0;
String entrada = "A2";
float Leitura;
float divisor = 13.0;
float MultiplcadorDeTensao = 3.3;
int comeco = 80;
int taxa = 100;


void loop() {
  float Leitura = analogRead(analogica);


  if (Leitura < comeco)
  {
    Serial.print("Leitura " + entrada + ": ");
    Serial.print(Leitura);
    Serial.print(" - sendo Taxa A, resultando em: R$");
    Serial.println(Leitura * (MultiplcadorDeTensao + 0.2) / divisor);
  }
  else if (Leitura >= comeco and Leitura < comeco + taxa)
  {
    Serial.print("Leitura " + entrada + ": ");
    Serial.print(Leitura);
    Serial.print(" - sendo Taxa B, resultando em: R$");
    Serial.println(Leitura * (MultiplcadorDeTensao + 0.4) / divisor);
  }
  else if (Leitura >= comeco + taxa and Leitura < comeco + (taxa * 2.0))
  {
    Serial.print("Leitura " + entrada + ": ");
    Serial.print(Leitura);
    Serial.print(" - sendo Taxa C, resultando em: R$");
    Serial.println(Leitura * (MultiplcadorDeTensao + 0.6) / divisor);
  }
  else if (Leitura >= comeco + (taxa * 2.0) and Leitura < comeco + (taxa * 3.0))
  {
    Serial.print("Leitura " + entrada + ": ");
    Serial.print(Leitura);
    Serial.print(" - sendo Taxa D, resultando em: R$");
    Serial.println(Leitura * (MultiplcadorDeTensao + 0.8) / divisor);
  }
  else if (Leitura >= comeco + (taxa * 3.0) and Leitura < comeco + (taxa * 4.0))
  {
    Serial.print("Leitura " + entrada + ": ");
    Serial.print(Leitura);
    Serial.print(" - sendo Taxa E, resultando em: R$");
    Serial.println(Leitura * (MultiplcadorDeTensao + 1.0) / divisor);
  }
  else
  {
    Serial.print("Leitura " + entrada + ": ");
    Serial.print(Leitura);
    Serial.print(" - sendo Taxa F, resultando em: R$");
    Serial.println(Leitura * (MultiplcadorDeTensao + 1.2) / (divisor - 2));
  }
}







/* Mude a entrada para A2
   Aumente 2 no divisor
   comece o multiplicador em 3.3
   comece as faixas de comparação em 80 variando de 100 em 100
*/
