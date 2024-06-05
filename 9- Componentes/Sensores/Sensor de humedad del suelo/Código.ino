// Varaible del pin
const int sensorPin = A0;

// Varaible del estado del sensor
int estSensor;

void setup(){
  // Inicalizamos el monitor serial
  Serial.begin(9600);

  // Definimos el pin del sensor como de entrada
  pinMode(sensorPin, INPUT);
}

void loop(){
  estSensor = analogRead(sensorPin);
  Serial.println(estSensor);
}
