int sensor = 11;
int valSensor;

void setup() {
  Serial.begin(9600);
}

void loop() {
 valSensor = analogRead(sensor);
 Serial.println(valSensor); 
}
