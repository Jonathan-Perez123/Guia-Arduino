# Tira led RGB

Una tira de leds es un serie de leds conectados uno a otro que, combinados, se forma una tira de una "x" cantidad de leds que se pueden controlar indepedientemente uno de otro para así, crear patrones de luces con animaciones. 

### Composición externa

Se compone de un plástico flexible que hace de soporte para todo el circuito electrico que requieren los leds. Esta tira de plástico del lado inferior se encuentra normalmente con un pegamento para pegar a una superficie, aunque existen tiras sin este pegamento. El circuitop se encuentra entre este material y cubierto por una silicona trasnparente que hace que los leds sean protegidos.

### Composición interna

De un lado de la tira led se encuentra un conector de 4 pines/cables, uno de ellos es la tierra que es común para los tres colores, el resto de los cables corresponden a los colores rojo, verde y azul. En específico todos los leds se encuentran conectados en serie o en paralelo dependiendo del modelo. E algunos casos solo se encuentran tres cables, uno para la tierra, otra para la alimentación y otra para controlar los leds de la tira. 

### Funcionamiento

Al igual que los leds RGB una tira RGB se controla de la misma manera solo que multiplicado por la cantidad de leds que esta posea. 

### Circuito

![](Circuito%20Tira%20Led.png)

**Materiales**:
* **Tira led**
* **Arduino UNO**

### Programación

Para controlar una de estas tiras leds es necesario utilizar una librería que facilitará el control de las mismas. Pero primero es necesario conocer como se controlan estas.

Cada led de la tira tiene asigando un índice que indentifica a cada led, esto nos servirá para poder controlar cada uno por separado refiriendonos al un índice en específico en referencia a un led concreto. 

![](Diagrama%20Tira%20Led.jpg)

Como vemos el índice comienza desde el número 0, esto es bastante habitual en programación/informática. 

**Librería**: se llama "Adafruit_NeoPixel.h". Para instalarla se debe buscar con dicho nombre en el gestor de librerías de Arduino IDE.

```cpp
#include <Adafruit_NeoPixel.h>    // Importa libreria

// Primer parametro = cantidad de pixeles en la tira
// Segundo parametro = pin de conexion a Arduino
// Tercer parametro:
//   NEO_KHZ800  800 KHz velocidad de datos (WS2812 y nuevos)
//   NEO_KHZ400  400 KHz velocidad de datos (WS2811 y mas antiguos)
//   NEO_GRB     flujo de datos en orden GRB (WS2812 y nuevos)
//   NEO_RGB     flujo de datos en orden RGB (versiones mas antiguas)

Adafruit_NeoPixel tira = Adafruit_NeoPixel(8, 2, NEO_GRB + NEO_KHZ800); // creacion de objeto "tira"
// con una cantidad de 8 pixeles, sobre pin 2 de Arduino y configurado para WS2812

void setup() {
  tira.begin();       // inicializacion de la tira
  tira.show();        // muestra datos en pixel
}

void loop() {
  tira.setBrightness(20);               // brillo global para toda la tira
  for (int i = 0; i < 8; i++) {         // bucle para recorrer posiciones 0 a 7
    tira.setPixelColor(i, 0, 0, 255);   // cada pixel en color azul > Parámetros de la función > (posicion,R,G,B)
    tira.show();                        // muestra datos en pixel
    delay(500);                         // breve demora de medio segundo
  }
  tira.clear();                         // restablece todos los pixeles en apagado
}
```
Como vemos es necesario contar con una tira led que sea compatible con dicha librería y que se componga de leds controlables independientemente.

Existen dos tipos de tiras leds:
* **Leds independientes**: estas tiras se componen de diferentes leds que se pueden controlar cada uno por separado
* **Leds unificados**: cada uno se compone de leds en los que solo puedes controlar el color de todos los leds a la vez y no de cada uno en específico.
