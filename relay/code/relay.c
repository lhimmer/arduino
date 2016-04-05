#define RELAY1  4
void setup()
{
  Serial.begin(9600);
  pinMode(RELAY1, OUTPUT);
}

void loop()
{
  if (Serial.available())
  {
    int state = '1'; 
    state = Serial.read();
    if (state == '0')
    {    
      digitalWrite(RELAY1,1);           // Turns Relay On
      Serial.println("Light ON");
    }
    if (state == '1')
    {
      digitalWrite(RELAY1,0);          // Turns Relay Off
      Serial.println("Light OFF");
    }
  }
}
