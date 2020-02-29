int xPin = A3;
int yPin = A2; 
int zPin = A1;
int D1=10, D2=11, D3=12, D4=13; 
long x;
long y;
long z;  


void setup()
{
  Serial.begin(9600);
  pinMode(19, OUTPUT);
  pinMode(18, OUTPUT);
  digitalWrite(19, HIGH);
  digitalWrite(18,LOW);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}


void loop()
{
  x = analogRead(xPin);  
  y = analogRead(yPin);
  z = analogRead(zPin);  
  Serial.print("x= ");
  Serial.print(x);
  Serial.print(" y= ");
  Serial.print(y);
  Serial.print(" z= ");
  Serial.print(z);
  delay(500);
if(x<150)  
forward();
else if(x>150)  
backward();
else if(y<300)  
left();
else if(y>350)  
right();
else
stop_();
}


void stop_()
{
  Serial.println("");
  Serial.println("STOP");
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
}


void forward()
{
  Serial.println("");
  Serial.println("Forward");
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, LOW);
}


void backward()
{
  Serial.println("");
  Serial.println("Backward");
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
}


void left()
{
  Serial.println("");
  Serial.println("Left");
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
}


void right()
{
  Serial.println("");
  Serial.println("Right");
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, LOW);
}
