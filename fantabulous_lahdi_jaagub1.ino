void setup()
{
  Serial.begin(9600);
  for (int i=2;i<9;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
  int sensor_value=analogRead(A5);
  if (sensor_value>100)
  {
    for (int i=0;i<10;i++)
    {
      digitalWrite(i,HIGH);
      delay(500);
      digitalWrite(i,LOW);
      delay(100);
    }
  }
}