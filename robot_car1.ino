#define pin1 2
#define pin2 3
#define pin3 4
#define pin4 5

void setup()
{
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  
}
 
void loop ()
{
  // forward 
  
  digitalWrite(pin1,LOW);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4, HIGH);
  delay(10000);
  
    // Backward
  
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4, LOW);
  delay(10000);
  
  // LEFT TURN
  
  
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4, LOW);
  
  delay(10000);
  
   // Right turn 
  
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4, LOW);
  
  delay(10000);
  
  
  // stop
  
  digitalWrite(pin1,LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4, LOW);
  
  delay(10000);
  

}