//for less than avg-white......else black
//1st ldr is left....2nd for front ldr.....3rd for right ldr
//0 for black,1 for white
//3,6 are for left motor....9,11 are for right motor
////long distance, timeTaken;
////int trigPin = 2; // trigger pin is for output....we r sending waves from here
////int echoPin = 3; // echo pin is for input....we r receiving waves here

int r1 = 5, r2 = 6, l1 = 9, l2 = 10;//arduino to l293d

void straight()
{
  analogWrite(r1, 204);
  analogWrite(r2, 0);
  analogWrite(l1, 202);
  analogWrite(l2, 0);
}
void right()
{
  analogWrite(r1, 0);
  analogWrite(r2, 0);
  analogWrite(l1, 200);
  analogWrite(l2, 0);
}
void left()
{
  analogWrite(r1, 200);
  analogWrite(r2, 0);
  analogWrite(l1, 0);
  analogWrite(l2, 0);
}
void back()
{
  analogWrite(r1, 0);
  analogWrite(r2, 204);
  analogWrite(l1, 0);
  analogWrite(l2, 202);
}
void stopping()
{
  analogWrite(r1, 0);
  analogWrite(r2, 0);
  analogWrite(l1, 0);
  analogWrite(l2, 0);
}

void setup()
{
  Serial.begin(9600); // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);

  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);

}

void loop()
{
  int w = digitalRead(A0);
  int x = digitalRead(A1);
  int y = digitalRead(A2);
  int z = digitalRead(A3);
  Serial.print(w);
  Serial.print(x);
  Serial.print(y);
  Serial.println(z);
  
  if (w == 1 && x == 0 && y == 0 && z == 0)
    straight();

  else if (w == 0 && x == 1 && y == 0 && z == 0)
    left();

  else if (w == 0 && x == 0 && y == 1 && z == 0)
    right();

  else if (w == 0 && x == 0 && y == 0 && z == 1)
    back();

  else
    stopping();
}
