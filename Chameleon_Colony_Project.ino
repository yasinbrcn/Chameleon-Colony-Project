int potval0,potval1,potval2;
void setup() 
{
  pinMode(3,OUTPUT); //Red
  pinMode(5,OUTPUT); //Green
  pinMode(6,OUTPUT); //Blue
  pinMode(9,OUTPUT); //Green
  pinMode(10,OUTPUT); //Blue
  pinMode(11,OUTPUT); //Red
}

void loop() 
{
  potval0 = analogRead(A0); //Red
  potval1 = analogRead(A1); //Green
  potval2 = analogRead(A2); //Blue
  potval0 = map(potval0,0,1023,0,255);
  potval1 = map(potval1,0,1023,0,255);
  potval2 = map(potval2,0,1023,0,255);

  analogWrite(3,potval0);
  analogWrite(11,potval0);
  analogWrite(5,potval1);
  analogWrite(9,potval1);
  analogWrite(6,potval2);
  analogWrite(10,potval2);
}
