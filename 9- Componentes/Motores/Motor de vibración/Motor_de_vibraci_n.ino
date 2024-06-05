const int motor = 10;  // creamos una constante que contiene el número de pin al cual está conectado el motor

void setup(){
  pinMode(motor, OUTPUT);  // se define el pin del motor como salida
}

void loop(){
  digitalWrite(motor, 1);  // encendemos el motor
  delay(1000);
  digitalWrite(motor, 0);  // apagamos el motor
}
