int counter=0;
void setup()
{
  Serial.begin(9600);
pinMode(6,OUTPUT);
pinMode(7,INPUT);
pinMode(4,INPUT);
}
void loop()
{
    Serial.println(counter);

int Bi = digitalRead(7);
int Bj = digitalRead(4);

  if(counter>=17)
  {
    counter=17;
  }
  if(counter<=0)
  {
    counter=0;
  }
  if(Bj == 1)
   {
    while(digitalRead(4)==1);

     counter--;
   }
   if(Bi == 1)
  {
     while(digitalRead(7)==1);

    counter++;
   }
      if(Bj == 1)
   {
    while(digitalRead(4)==1);

     counter--;
   }
switch (counter)
{   

case 0:
  analogWrite(6,0 );
  break;
  case 1: 
  analogWrite(6,15 ); break;
  case 2:
  analogWrite(6,30); break;
  case 3:
 analogWrite(6, 45); break;
  case 4:
  analogWrite(6, 60); break;
  case 5:
  analogWrite(6, 75); break;
  case 6:
  analogWrite(6, 90); break;
  case 7:
  analogWrite(6, 105); break;
  case 8:
  analogWrite(6, 120); break;
  case 9:
  analogWrite(6, 135); break;
  case 10:
  analogWrite(6, 150); break;
  case 11:
  analogWrite(6, 165); break;
  case 12:
  analogWrite(6, 180); break;
  case 13:
  analogWrite(6, 195); break;
  case 14:
  analogWrite(6, 210); break;
  case 15:
  analogWrite(6, 225); break;
  case 16:
  analogWrite(6, 240); break;

   case 17:
  analogWrite(6, 255); break;

  

}
     switch (counter)
{   

case 0:
  analogWrite(6,0 );
  break;
  case 1: 
  analogWrite(6,15 ); break;
  case 2:
  analogWrite(6,30); break;
  case 3:
 analogWrite(6, 45); break;
  case 4:
  analogWrite(6, 60); break;
  case 5:
  analogWrite(6, 75); break;
  case 6:
  analogWrite(6, 90); break;
  case 7:
  analogWrite(6, 105); break;
  case 8:
  analogWrite(6, 120); break;
  case 9:
  analogWrite(6, 135); break;
  case 10:
  analogWrite(6, 150); break;
  case 11:
  analogWrite(6, 165); break;
  case 12:
  analogWrite(6, 180); break;
  case 13:
  analogWrite(6, 195); break;
  case 14:
  analogWrite(6, 210); break;
  case 15:
  analogWrite(6, 225); break;
  case 16:
  analogWrite(6, 240); break;

   case 17:
  analogWrite(6, 255); break;

  

}



   }
