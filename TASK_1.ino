// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(500);
  digitalWrite(11, HIGH);
  delay(1000); 
  digitalWrite(11, LOW);
  delay(500);   
  digitalWrite(11, HIGH); 
  delay(1000);
  digitalWrite(11, LOW);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  delay(500); 
  
 
}
