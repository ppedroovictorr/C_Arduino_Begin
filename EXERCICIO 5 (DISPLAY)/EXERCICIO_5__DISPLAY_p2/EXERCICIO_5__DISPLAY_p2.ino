String leitura;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  leitura = "";
  while (Serial.available() > 0)
  {
    leitura += Serial.readString();

  }
  if (leitura != "")
  {
        Serial.println(leitura);
  }
}
