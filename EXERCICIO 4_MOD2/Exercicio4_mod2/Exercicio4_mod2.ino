void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}



void loop() {
  // put your main code here, to run repeatedly:

  int leitura = analogRead(A0);
  float tensao = leitura / 204.8;
  float celsius = leitura / 20.5;
  float faren = (celsius * 9/5 + 32);
  float kelvin = (celsius + 273);

  Serial.print("A0 - Valor Arduino: ");
  Serial.print(leitura);
  Serial.print(" /Tensão: ");
  Serial.print(tensao);
  Serial.print(" /Temperatura em ºC: ");
  Serial.print(celsius, 1);
  Serial.print(" /Temperatura em ºF: ");
  Serial.print(faren, 1);
  Serial.print(" /Temperatura em ºK: ");
  Serial.print(kelvin, 1);
  Serial.println();
}
