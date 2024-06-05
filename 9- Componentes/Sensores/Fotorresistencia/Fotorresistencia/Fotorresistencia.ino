const int sensorPin = A0;  // creamos una constante que contiene el número de pin donde está conectado el sensor
int estadoSensor;  // creamos una variable que almacena los datos de las lecturas analógicas

void setup() {
  Serial.begin(9600);  // inicializamos  el monitor serial a 9600 baudios
  pinMode(sensorPin, INPUT);  // definimos el pin del sensor como entrada
}

void loop() {
  estadoSensorres =  analogRead(sensorPin);  // guardamos el valor de la lectura analógica en la variable "estadoSensor" anteriormente creada
  Serial.print("Estado del sensor: ");  // mostramos por el monitor serial el valor del sensor
  Serial.print(estadoSensor);  // mostramos por el monitor serial el valor del sensor
}
