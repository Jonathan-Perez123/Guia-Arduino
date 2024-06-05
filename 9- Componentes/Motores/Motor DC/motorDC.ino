/*
Componente: Motor DC (Motor de corriente continua)
Creador: Antu Boccalandro
Fecha: 14/05/22
Descripción: En este código se detallan las instrucciones necesarias para controlar un motor DC con las funciones más importantes de la librería AFMotor de Adafruit.
*/

#include <AFMotor.h>  // se incluye la librería descargada "AFMotor"

AF_DCMotor motor1(1);  // se crea el objeto "motor1" y como parámetro a la función especificamos el número de motor del mismo

void setup(){
  motor1.setSpeed(250);  // se setea la velocidad del motor1 a 250, siendo 1 la velocidad mínima y 250 la máxima
}

void loop(){
  motor1.run(FORWARD);  // el parámetro "FORWARD" le indica al motor que valla hacia adelante
  delay(2000);  
  motor1.run(BACKWARD);  // el parámetro "BACKWARD" le indica al motor que valla hacia atrás
  delay(2000);  
  motor1.run(RELEASE);  // el parámetro "RELEASE" le indica al motor que no avance
  delay(2000);  
}
