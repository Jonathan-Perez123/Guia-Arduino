int led = 8;  //Variable que contendrá el número del pin del led
void setup() {
  pinMode(led, OUTPUT); //Definimos el pin del led
}

void loop() {
  digitalWrite(led, HIGH);  //Encendemos el led con --> HIGH
  digitalWrite(led, LOW);   //Apagamos el led con   --> LOW
}
