# Led RGB



## Circuito de conexión

![](Circuito%20Led%20RGB.png))

Para la conexión a un Arduino se utilizan los siguientes elementos:

* **Breadboard**: sirve para conectar las diferentes patas de leds y de la resistencia
* **Resistencia**: un led solo soporta un voltaje de 3V en promedio, anque dependiendo del color del led este requerirá más o menos voltaje para funcionar optimamente. Se utiliza una resistencia para reducir el voltaje que llega de la placa Arduino que es de 5V a 3, 3.5V. Para la conexión de un led se utiliza una resistencia de 220Ω. 
**Voltaje por color de led y tipo**:

| **Color**    | **Tensión/Voltaje** | **Resistencia** |
| ------------ | ------------------- | --------------- |
| Rojo         | 1.9V                | 220 Ω           |
| Amarillo     | 1.7V a 3V           | 220 Ω           |
| Verde        | 2.4V                | 220 Ω           |
| Naranja      | 2.4V                | 220 Ω           |
| Blanco       | 3.4V                | 220 Ω           |
| Azul         | 3.4V                | 220 Ω           |
| Morado       | 2.7V                | 220 Ω           |
| Ultravioleta | 3.1V                | 220 Ω           |

* **Cables**: para la conexión de los terminales.

La pata negativa del led se conecta a la resistencia y luego al pin de tierra (GND) de la placa Arduino. Por otra parte las patas de cada color del led (del color roja, verede y azul) se conectan a diferentes pines de la placa Arduino, es indiferente mientras este sea de tipo digital. 


# Diodo Led RGB

Los leds RGB consisten en un led rojo, uno azul y otro verde. Ajustando independientemente cada uno de ellos, los ledes RGB son capaces de producir una amplia gama de colores. A diferencia de los ledes dedicados a un solo color, los ledes RGB no producen longitudes de ondas puras.

### Composición externa

Al igual que los diodos led de un solo color estos se encuentran compuestos de los mismos compoenentes externos. Aunque con más pines: uno para tierra (GND) y otros tres para los diferentes colores, rojo, verde y azul.

### Composición interna

Se componen de la misma manera que los diodos leds convencionales pero con algunas variaciones para poder emitir diferentes colores de luz. 

### Funcionamiento

Tienen el mismo funcionamiento de los diodos leds convencionales.

### Circuito

![](Circuito%20Led%20RGB.png)

* **Breadboard**: sirve para conectar las diferentes patas de leds y de la resistencia
* **Resistencia**: un led solo soporta un voltaje de 3V en promedio, anque dependiendo del color del led este requerirá más o menos voltaje para funcionar optimamente. Se utiliza una resistencia para reducir el voltaje que llega de la placa Arduino que es de 5V a 3, 3.5V. Para la conexión de un led se utiliza una resistencia de 220Ω. 
* **Cables**: para la conexión de los terminales.
La pata negativa del led se conecta a la resistencia y luego al pin de tierra (GND) de la placa Arduino, para identificarla esta suele ser la más larga de las 4 patas del led RGB. Por otra parte las tres patas restantes se conectan a los diferentes pines digitales del Arduino, cada uno represetará un color diferente, para identificar que pata es cada color es útil seguir el siguiente diagrama. 

![](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Feducarparaelcambio.files.wordpress.com%2F2018%2F11%2Fled-rgb-arduino.jpg%3Fw%3D1024%26h%3D731&f=1&nofb=1)

### Programación

Para el control de estos leds se utilizan los comandos de escritura/lectura analógica vistos en la sección 6 de programación en Arduino. 

```cpp
//Un led RGB es como si unieramos 3 leds de los colores: Red, Green and Blue (Rojo, Verde y Azul). 
Este es un componente analógico, por lo que se debe utilizar los comandos analógicos para encenderlo. 
Los valores que admite el led RGB son desde el 0 hasta el 255. Para crear los colores se deben mezclar los 3 colores.

const int red = 13; //Constante que contendrá el número de pin del led Rojo
const int green = 12; //Constante que contendrá el número de pin del led Verde 
const int blue = 11; //Constante que contendrá el número de pin del led Azul  

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
```