int red = 13;
int yellow = 12;
int green = 11;
int button = 0;
int count = 0;
bool mask;






void setup() {
  Serial.begin(115200);

pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
pinMode(button,INPUT);

}

void loop() {
  if(digitalRead(button)==HIGH){
    delay(500);
    count++;
    Serial.print(count);
  }
  if(count==4){
    count=0;}
 else if(count==1){
    digitalWrite(red,HIGH);}
else  if(count==2){
    digitalWrite(yellow,HIGH);}
else  if(count==3){
    digitalWrite(green,HIGH);}
 else   if(count==0){
      digitalWrite(red,LOW);
          digitalWrite(yellow,LOW);
      digitalWrite(green,LOW);

  
    }
  
  
  
  
  
     }

  
  
