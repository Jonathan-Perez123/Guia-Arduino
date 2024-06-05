int y = ; //Variable con el número de pin del componente
int x = ; //Variable con el número de pin del componente
int boton = ; //Variable con el número de pin del componente

int yValor; //Variable que contendrá el valor del componente
int xValor; //Variable que contendrá el valor del componente
int valBoton; //Variable que contendrá el valor del componente

void setup() {
  pinMode(y, INPUT); //Declaramos el pin
  pinMode(x, INPUT); //Declaramos el pin
  pinMode(boton, INPUT); //Declaramos el pin
}

void loop() {
  yValor = analogRead(y); //Almacenamos el valor del componente en una variable
  xValor = analogRead(x); //Almacenamos el valor del componente en una variable
  valBoton = digitalRead(boton); //Almacenamos el valor del componente en una variable
}
