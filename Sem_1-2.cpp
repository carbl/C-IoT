// C++ code
//
int ligt = 5000;
int ligtYellow = 1000;
int ligtBlink = 500;
int greenHumDelay = 5000;
int red = 2;
int yellow = 4;
int green = 7;
int key = 8;
int redHum = 12;
int greenHum = 13;
bool keyPush = false;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(key, INPUT);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(redHum, LOW);
  digitalWrite(greenHum, LOW);
}

void loop()
{
  digitalWrite(green, HIGH);
  digitalWrite(redHum, HIGH);

  if (digitalRead(key) == HIGH)

    if (keyPush == false)
  
    keyPush = true;
  
  if (keyPush == true)
  {
    delay(greenHumDelay);
    
    
    for (int index = 0; index < 3; index ++)
  {
  digitalWrite(green, LOW);
  delay(ligtBlink);
  digitalWrite(green, HIGH);
  delay(ligtBlink);
  }
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(ligtYellow);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(redHum, LOW);
  digitalWrite(greenHum, HIGH);
  delay(ligt);
  for (int index = 0; index < 3; index ++)
  {
  digitalWrite(greenHum, LOW);
  delay(ligtBlink);
  digitalWrite(greenHum, HIGH);
  delay(ligtBlink);
  }
  digitalWrite(greenHum, LOW);
  digitalWrite(redHum, HIGH);
  digitalWrite(yellow, HIGH);
  delay(ligtYellow);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
    keyPush = false;
  }
  
}