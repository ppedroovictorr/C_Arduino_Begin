int conta = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  while (conta <= 7)
  {
    Serial.println("Inicio");
    Serial.println(conta++);
    for (int i = 0; i <= 100; i++)
    {
      Serial.println(i);
    }
    Serial.println("final for");
    delay(2000);
  }
}
