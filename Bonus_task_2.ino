int led = 5;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  for(int i=0;i<=255;i+=25){
    analogWrite(led,i);
    delay(500);
  }
}
