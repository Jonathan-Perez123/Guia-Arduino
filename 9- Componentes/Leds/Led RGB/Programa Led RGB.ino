//Un led RGB es como si unieramos 3 leds de los colores: Red, Green and Blue (Rojo, Verde y Azul). 
Este es un componente analógico, por lo que se debe utilizar los comandos analógicos para encenderlo. 
Los valores que admite el led RGB son desde el 0 hasta el 255. Para crear los colores se deben mezclar los 3 colores.

int red = 13; //Variable que contendrá el número de pin del led Rojo
int green = 12; //Variable que contendrá el número de pin del led Verde 
int blue = 11; //Variable que contendrá el número de pin del led Azul  

void setup() {
  pinMode(red, OUTPUT); //Definimos el pin del led Rojo
  pinMode(green, OUTPUT); //Definimos el pin del led Verde
  pinMode(blue, OUTPUT); //Definimos el pin del led Azul
}

void loop() {
  analogWrite(red, 100); //Encendemos el color Rojo (Red) 
  analogWrite(green, 200); //Encendemos el color Verde (Green)
  analogWrite(blue, 50); //Encendemos el color Azul (Blue)
}
