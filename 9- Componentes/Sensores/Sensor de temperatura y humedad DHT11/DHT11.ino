#include <DHT.h> // incluimos la librería "DHT"
#include <DHT_U.h> // incluimos la librería "DHT_U"

#define Type DHT11  // definimos el tipo de sensor que hemos conectado. Opciones: "DHT11" "DHT22"
const int dhtPin = 11;  // creamos una constante que contiene en número de pin del sensor
DHT HT(dhtPin, Type);  // creamos un objeto llamado HT
int humidity;  // creamos una variable que almacenará la humedad
float tempC;  // creamos una variable que almacenará la temperatura en grados celsius
float tempF;  // creamos una variable que almacenará la temperatura en grados fahrenheit

void setup() {
  Serial.begin(9600);  // inicializamos el monitor serial a 9600 baudios
  HT.begin();  // inicializamos el sensor 
}

void loop() {
  humidity = HT.readHumidity();  // almacenamos la humedad leída del sensor en la variable "humidity"
  tempC = HT.readTemperature();  // almacenamos la temperatura leída del sensor en la variable "tempC"
  tempF = HT.readTemperature(true);  // almacenamos la temperatura leída del sensor en la variable "tempF"
  Serial.print("Humedad Relativa: ");  // Imprimimos los valores obtenidos en el monitor serie
  Serial.print(humidity);
  Serial.print("% / Temperatura: ");
  Serial.print(tempC);
  Serial.print("ºC / ");
  Serial.print(tempF);
  Serial.println("ºF");
  delay(1000);
}
