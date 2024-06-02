// C++ code
//

int red = 2;
int yellow = 4;
int green = 7;
bool readySend = true;
String lights;
int lightR;
int lightY;
int lightG;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  Serial.begin(9600);
}

void loop()
{
  while (Serial.available() > 0)
  {
    lights = Serial.readString();
    lightR = lights[0];
    lightY = lights[1];
    lightG = lights[2];
    Serial.write(lightR);
    Serial.write(lightY);
    Serial.write(lightG);

  }
  if (lightR == 49)
    digitalWrite(red, HIGH);
    else
      digitalWrite(red, LOW);
  
    if (lightY == 49)
    digitalWrite(yellow, HIGH);
    else
      digitalWrite(yellow, LOW);
  
      if (lightG == 49)
    digitalWrite(green, HIGH);
    else
      digitalWrite(green, LOW);
}