#define SENSOR  4

int thresholdUp = 400;
int thresholdDown = 250;
int sensorPin = A1;

void setup(){
  Serial.begin(9600);
  pinMode(SENSOR, OUTPUT);
  delay(500); // wait for display to boot up
}

void loop(){

  int sensorValue;
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  delay(500); //wait for half a second, so it is easier to read
}

