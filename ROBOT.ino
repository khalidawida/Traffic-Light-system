int IN1=9;
int IN2=8;
int IN3=7;
int IN4=6;
int EN1=10;
int EN2=5;
char reading;
void setup()
{
Serial.begin (9600);
for(int i=5 ; i<=10 ; i++)
{
pinMode(i, OUTPUT);
}
}
void forword()
{
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
analogWrite(EN1,150);
analogWrite(EN2,150);
}
void backword()
{
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
analogWrite(EN1,150);
analogWrite(EN2,150);
}

void left()
{
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
analogWrite(EN1,0);
analogWrite(EN2,150);
}
void right()
{
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
analogWrite(EN1,150);
analogWrite(EN2,0);
}
void stopp() {
digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
analogWrite(EN1,0);
analogWrite(EN2,0); }
void loop() {
if(Serial.available()>0){
reading=Serial.read();
switch(reading){
case 'F' : forword(); break;
case 'B' : backword(); break;
case 'R' : right(); break;
case 'L' : left(); break;
case 'S' :stopp(); break;
}
}
}
