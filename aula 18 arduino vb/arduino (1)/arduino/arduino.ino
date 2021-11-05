void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(5, INPUT_PULLUP);
}
int oque = 0;
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {

    oque = Serial.parseInt();
    int quanto = Serial.parseInt();

    if (oque == 0)
    {
      analogWrite(3, quanto);
    }
    if (oque == 1)
    {
      digitalWrite(13, quanto);
    }

  }

  Serial.print(analogRead(A0));
  Serial.print(",");
  Serial.println(digitalRead(5));

  delay(200);
}
