int time=75;
bool islig
void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
}

void loop()
{
int  swich1 = digitalRead(2);
  switch(swich1){
    case 1:
    analogWrite(5,0);
    analogWrite(6,0);
    delay(time);
     analogWrite(5,25);
     analogWrite(6,50);
     delay(time);
     analogWrite(5,50);
     analogWrite(6,100);
     delay(time);
     analogWrite(5,75);
     analogWrite(6,100);
     delay(time);
     analogWrite(5,100);
     analogWrite(6,150);
     delay(time);
     analogWrite(5,125);
     analogWrite(6,255);
    while( digitalRead(2)==1);
    break;
    case 0:
    analogWrite(5,127);
        analogWrite(6,255);
    delay(time);
     analogWrite(5,100);
        analogWrite(6,200);
    delay(time);
     analogWrite(5,75);
        analogWrite(6,150);delay(time);
     analogWrite(5,50);
        analogWrite(6,100);delay(time);
     analogWrite(5,25);
        analogWrite(6,50);delay(time);
     analogWrite(5,0);
        analogWrite(6,0);
    while( digitalRead(2)==0);
    break;
  }
  
int  swich2 = digitalRead(3);
  switch(swich2){
    case 1:
    analogWrite(10,0);
    analogWrite(9,0);
    delay(time);
     analogWrite(10,25);
     analogWrite(9,50);
     delay(time);
     analogWrite(10,50);
     analogWrite(9,100);
     delay(time);
     analogWrite(10,75);
     analogWrite(9,100);
     delay(time);
     analogWrite(10,100);
     analogWrite(9,150);
     delay(time);
     analogWrite(10,125);
     analogWrite(9,255);
    while( digitalRead(3)==1);
    break;
    case 0:
    analogWrite(10,127);
        analogWrite(9,255);
    delay(time);
     analogWrite(10,100);
        analogWrite(9,200);
    delay(time);
     analogWrite(10,75);
        analogWrite(9,150);delay(time);
     analogWrite(10,50);
        analogWrite(9,100);delay(time);
     analogWrite(10,25);
        analogWrite(9,50);delay(time);
     analogWrite(10,0);
        analogWrite(9,0);
    while( digitalRead(3)==0);
    break;
  }
    
  
}
