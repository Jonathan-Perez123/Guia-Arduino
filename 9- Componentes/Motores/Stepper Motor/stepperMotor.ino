#include <Stepper.h>  // incluimos la librería Stepper previamente instalada

int stepsPerRevolution = 2048;
int motSpeed = 12;  // Creamos una variable que contendrá la velocidad del motor
Stepper myStepper(stepsPerRevolution,8,10,9,11);  // Creamos una variable de tipo Stepper llamada MyStepper, dentro indicaremos las revoluciones preestablecidas indicadas en la variable anteriormente creada, luego debemos pasar los pines a los cuales hemos conectado el stepper motor 
int dt = 1500;  // Creamos una variable que contiene el delay 

void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(motSpeed); // definimos la velocidad del stepper motor
  
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(stepsPerRevolution); // se hace un step hacia adelante
  delay(dt);
  myStepper.step(-stepsPerRevolution);  // se hace un step hacia atrás
  delay(dt);
  
}
