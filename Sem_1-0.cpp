// C++ code
//
  int button = 2;
  int blink = 8;
  bool readySend = true;
  int incomingByte;

void setup()
{

  pinMode(blink, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);

  
}

void loop()
{
  if (Serial.available() > 0)
  {
    incomingByte = Serial.read();
   // Serial.write(incomingByte);
  }
  
  if (digitalRead(button) == HIGH
     or incomingByte == 49)
  {
    digitalWrite(blink, HIGH);
    if (readySend == true)
    {
      Serial.println("Light");
      readySend = false;
    }
  }
  else
  {
    digitalWrite(blink, LOW);

    readySend = true;
  }
 

}