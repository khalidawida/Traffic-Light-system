int sensor = 4;
int motor = 5;
void setup()
{
  pinMode(motor, OUTPUT);
  pinMode(sensor, INPUT);

}

void loop()
{
  if(digitalRead(sensor)==1)
  {
    digitalWrite(motor,HIGH);}
  
  else 
    digitalWrite(motor,LOW);

 
}
