# Display de 7 segmentos

Este componente es bastante parecido exteriormente a una matriz de leds en cuanto a materiales. Un display de 7 segmentos se compone de 7 leds oraganizados de una manera específica para mostrar números. Cada uno de los leds se puede controlar de manera independiente. 

### Composición externa

Se compone de 8 patas, una de tierra común para los 7 leds y 7 patas más para conectarse a la placa de Arduino y así poder controlar cada led. Existen diferentes tipos de este tipo de led, hay algunos que son de diferentes colores y otros módulos que son de varios colores 

### Composición interna

Se compone de 7 leds organizados de manera tal que se puedan mostrar números. Estos leds suelen ser de color rojo. 

### Funcionamiento

El funcionamiento de estos leds es el mismo que para un diodo led convecnional de un color. 

### Circuito

![](Circuito%20Display%20de%207%20segmentos.png)
![](Diagrama%20de%20led%20de%20display%20de%207%20segmentos..jpg))

**Materiales**:
* **Display de 7 segmentos**
* **Cables**: siguiendo el diagrama de la imagen se puede observar que cada pin del módulo corresponde a un led específico, es necesario saber donde conectamos cada pin para luego identificar que led encendemos con cada cable, en la imagen se observa que se le asigna una letra a cada pin del display suguiero anotar la letra del led y su correspondiente pin al que se encuentra conectado. El display cuenta con una tierra común para todos los leds y 7 pines para cada led que se deberán conectar a los pines digitales de Arduino.

### Programación

Para programar un display de 7 segmentos se utiliza los comandos de escritura digital vistos en la sección 6 de la programación.

En el siguiente programa se encienden los diferentes leds del display para formar números que van desde el 0 hasta el 9.

```cpp
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
  // Número 0
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, HIGH);
  digitalWrite (pinF, HIGH);
  digitalWrite (pinG, LOW);
  delay(1000);
  // Número 1
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, LOW);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, LOW);
  digitalWrite (pinE, LOW);
  digitalWrite (pinF, LOW);
  digitalWrite (pinG, LOW);
  delay(1000);
  // Número 2
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, LOW);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, HIGH);
  digitalWrite (pinF, LOW);
  digitalWrite (pinG, HIGH);
  delay(1000);
  // Número 3
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, LOW);
  digitalWrite (pinF, LOW);
  digitalWrite (pinG, HIGH);
  delay(1000);
  // Número 4
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, LOW);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, LOW);
  digitalWrite (pinE, LOW);
  digitalWrite (pinF, HIGH);
  digitalWrite (pinG, HIGH);
  delay(1000);
  // Número 5
  digitalWrite (pinA, LOW);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, LOW);
  digitalWrite (pinF, HIGH);
  digitalWrite (pinG, HIGH);
  delay(1000);
  // Número 6
  digitalWrite (pinA, LOW);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, HIGH);
  digitalWrite (pinF, HIGH);
  digitalWrite (pinG, HIGH);
  delay(1000);
  // Número 7
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, LOW);
  digitalWrite (pinE, LOW);
  digitalWrite (pinF, LOW);
  digitalWrite (pinG, LOW);
  delay(1000);
  // Número 8
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, HIGH);
  digitalWrite (pinF, HIGH);
  digitalWrite (pinG, HIGH);
  delay(1000);
  // Número 9
  digitalWrite (pinA, HIGH);
  digitalWrite (pinB, HIGH);
  digitalWrite (pinC, HIGH);
  digitalWrite (pinD, HIGH);
  digitalWrite (pinE, LOW);
  digitalWrite (pinF, HIGH);
  digitalWrite (pinG, HIGH);
  delay(1000);
}
```
