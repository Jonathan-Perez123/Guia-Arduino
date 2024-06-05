//Los botones son compoentes digitales.Para controlar un componente son un botón es necesario crear una variable del componente y otra que contendrá el valor del mismo.

const int boton = 13; // constante con el número de pin

int valorBoton; // variable que contendrá el estado del botón

void setup() {
  Serial.begin(9600);
  pinMode(boton, INPUT); // definimos el pin
}

void loop() {
  valorBoton = digitalRead(boton); // almacenamos el valor del botón en una variable
  Serial.println(valorBoton);
}
