// C++ code
//
#include<Servo.h>
Servo myservo;
int potpin = 0;
int val;
int GREEN = 8;
int ORANGE = 7;
int RED = 13;
void setup()
{
  myservo.attach(9);
  pinMode(GREEN, OUTPUT);
  pinMode(ORANGE, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop()
{
  val = analogRead(potpin);
  val = map(val, 0,1023,0,180);
  myservo.write(val);
  delay(15);
  digitalWrite(GREEN, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(GREEN, LOW);
  digitalWrite(ORANGE, HIGH);
  delay(500);
  digitalWrite(ORANGE, LOW);
  digitalWrite(RED, HIGH);
  delay(500);
  digitalWrite(RED, LOW);
  digitalWrite(ORANGE,HIGH);
  delay(500);
  digitalWrite(ORANGE, LOW);
}