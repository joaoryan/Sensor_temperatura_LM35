//Medindo temperatura com sensor LM35

int temperatura = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  temperatura = (analogRead(A0) * 0.0048828125 * 100);
  Serial.println("Temperatura: ");
    Serial.println(temperatura);
    Serial.println(" ");
    delay(500);
}
