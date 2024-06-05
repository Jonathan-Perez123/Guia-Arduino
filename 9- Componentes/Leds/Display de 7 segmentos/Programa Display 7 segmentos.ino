// definimos las constantes de los pines de los 7 leds que componen al display
const int pinA = 2;
const int pinB = 3;
const int pinC = 4;
const int pinD = 5;
const int pinE = 6;
const int pinF = 7;
const int pinG = 8;

void setup (){

  // definimos 8 pines del arduino como salida
  for (int x = 0; x <= 8; x++) {
    pinMode (x, OUTPUT);
  }
  // apagamos todos los leds del display de 7 segmentos
  for (int x = 0; x <= 8; x++) {
    digitalWrite (x, LOW);
  }
}

void loop (){
  //encender 0
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, HIGH);
  digitalWrite (pinF, HIGH);
  digitalWrite (pinG, LOW);
  delay(1000);
  //1
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, LOW);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, LOW);
  digitalWrite (pinE, LOW);
  digitalWrite (pinF, LOW);
  digitalWrite (pinG, LOW);
  delay(1000);
  //2
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, LOW);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, HIGH);
  digitalWrite (pinF, LOW);
  digitalWrite (pinG, HIGH);
  delay(1000);
  //3
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, LOW);
  digitalWrite (pinF, LOW);
  digitalWrite (pinG, HIGH);
  delay(1000);
  //4
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, LOW);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, LOW);
  digitalWrite (pinE, LOW);
  digitalWrite (pinF, HIGH);
  digitalWrite (pinG, HIGH);
  delay(1000);
  //5
  digitalWrite (pinA, LOW);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, LOW);
  digitalWrite (pinF, HIGH);
  digitalWrite (pinG, HIGH);
  delay(1000);
  //6
  digitalWrite (pinA, LOW);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, HIGH);
  digitalWrite (pinF, HIGH);
  digitalWrite (pinG, HIGH);
  delay(1000);
  //7
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, LOW);
  digitalWrite (pinE, LOW);
  digitalWrite (pinF, LOW);
  digitalWrite (pinG, LOW);
  delay(1000);
  //8
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, HIGH);
  digitalWrite (pinF, HIGH);
  digitalWrite (pinG, HIGH);
  delay(1000);
  //9
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, LOW);
  digitalWrite (pinF, HIGH);
  digitalWrite (pinG, HIGH);
  delay(1000);
}
