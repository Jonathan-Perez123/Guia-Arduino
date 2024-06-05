const int botonPin = 13;  // 
int botonValue;  // creamos una varialbe que contendrá el valor del botón

void setup() {
  pinMode(botonPin, INPUT); // definimos el pin del boton como entrada
  Serial.begin(9600);  // inicializamos el monitor serie a 9600 baudios
}
void loop() {
  botonValue = digitalRead(11);  // almacenamos el valor del botón en la variable anteriormente creado
  Serial.println(sensorValue);  // imprimimos el valor del botón por el monitor serie
}
