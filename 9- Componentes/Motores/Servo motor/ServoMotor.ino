#include <Servo.h>  //Incluimos la librería Servo para poder controlar este componente

int servoPin = 9; //Variable con el número de pin del componente
int valorServo = 0;
Servo servoMotor; //Variable de tipo 'Servo' que contendrá la cantidad de grados en el que este está

void setup() {
  Serial.begin(9600);
  servoMotor.attach(servoPin); //Declaramos el pin de nuestro servomotor
}

void loop() {
  Serial.println("Ingrese el número de grados que quiere girar");
  delay(1000);
  valorServo = Serial.parseInt();
  servoMotor.write(valorServo); //Escribimos sobre el Servomotor la cantidad de grados que nos queremos mover
}
