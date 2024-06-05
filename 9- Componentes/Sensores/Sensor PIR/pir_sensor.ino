const sensorPin = 2;  // creamos una variable con el número de pin donde está conectado el sensor PIR
int estadoSensor;  // creamos una variable que contendrá el estado del sensor PIR

void setup() {
  Serial.begin(9600); // inicializamos el monitor serial a 9600 baudios
  pinMode(sensorPin, INPUT);  // definimos al pin del sensor como entrada
}

void loop() {
  estadoSensor = digitalWrite(sensorPin);  // almacenamos en la variable "estadoSensor" la lectura digital del mismo
  Serial.print("Estado del sensor PIR");  // Imprimimos por el monitor serie el valor del sensor
  Serial.println(estadoSensor);  // Imprimimos por el monitor serie el valor del sensor
  delay(500);
}
