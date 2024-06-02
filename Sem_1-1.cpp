// C++ code
//
int ligt = 5000;
int ligtYellow = 1000;
int ligtBlink = 500;
int Red = 2;
int Yellow = 4;
int Green = 7;

void setup()
{
  pinMode(Red, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Green, OUTPUT);
  digitalWrite(Red, LOW);
  digitalWrite(Yellow, LOW);
  digitalWrite(Green, LOW);
}

void loop()
{
  digitalWrite(Green, HIGH);
  delay(ligt);
  for (int index = 0; index < 3; index ++)
  {
  digitalWrite(Green, LOW);
  delay(ligtBlink);
  digitalWrite(Green, HIGH);
  delay(ligtBlink);
  }
  digitalWrite(Green, LOW);
  digitalWrite(Yellow, HIGH);
  delay(ligtYellow);
  digitalWrite(Yellow, LOW);
  digitalWrite(Red, HIGH);
  delay(ligt);
  digitalWrite(Yellow, HIGH);
  delay(ligtYellow);
  digitalWrite(Red, LOW);
  digitalWrite(Yellow, LOW);
}