# Matriz de Leds

Una matriz de leds es basicamente un módulo compuesto de leds conectados y organizados en filas y columnas. 

### Composición externa

Se compone de 64 leds organizados en filas y columnas, 8 filas por 8 columnas en específico. En el caso del módulo MAX7219 este se compone de un microcontrolador que permite utilizar menos pines de la placa Arduino para su utilización. Los leds se encuentran recubiertos por un material plástico blanco en forma de círculos para cada led.

### Composición interna

La matriz por fuera se ve como si fueran diferentes puntos blancos, pero internamente se encuentran los diodos leds. Estos solo pueden ser de un color en específico, lo hay de diferentes colores pero el más noral es el color rojo. 

### Funcionamiento

El funcionamiento de una matriz de leds es bastante sencillo. Al organizarse en forma de matriz para controlar un led en específico nos debemos referir al led y enviar un voltaje (esto mediante programacición). 

### Circuito

![](Ciruito%20Matriz.jpg)

**Materiales**
* **Matriz de leds**: modelo MAX7219
* **Cables**: se conectan de la siguiente manera al módulo:


| Matriz | Arduino UNO |
|--------|-------------|
| DIN    | 11          |
| CLK    | 13          |
| CS     | 10          |

Si se quiere conectar más de una matriz a la placa Arduino es posible utilizar la misma cantidad de pines de una placa para hasta 8 matrices. Esto se logra conectando los pines de salida de una de las matrices a la siguiente y así sucesivamente hasta el máximo de 8 matrices. 

![](Ciruito%20Matrices.jpg)

### Programación

Se debe utilizar la librería "LedControl" de "Eberhard Fahle. Esta lirbería nos será de utilidad para poder utilizar el módulo y así utilizarlo de manera más sencilla.

Una vez instalada la librería se podrá utilizar el módulo según el siguiente programa guía que incluye las funciones más útiles de la librería.

```cpp
#include "LedControl.h" // importa libreria LedControl

LedControl lc = LedControl(11,13,10,1);   // crea objeto lc

void setup() {
  lc.shutdown(0,false); // enciende la matriz
  lc.setIntensity(0,4); // establece brillo
  lc.clearDisplay(0);   // blanquea matriz
}

void loop(){
      lc.setLed(0,0,0,true);    // enciende led 
      delay(100);					
      lc.setLed(0,0,0,false);   // apaga led
}
```
A modo de guía es necesario saber como funciona cada método de la librería:

* **LedControl**: al crear un objeto de este tipo se utiliza la siguiente estructura para poder controlar luego la matriz: `LedControl lc=LedControl(Pin DIN, Pin CLK, Pin CS, Número de matrices conectadas`. El pin hacer referencia al número de pin al cual se encuentra conectado cada pin del módulo de la matriz al Arduino. El número de matrices conectadas se utiliza para especificar la cantidad de matrices conectadas, ya que se pueden conectar cada uno de los módulos uno seguido de otro. El número de matrices es un número que puede ir del 1 al 8, haciendo refernecia a la posibilidad de conexión de 8 módulos.
* **shutdown**: permite prender o apagar el módulo. Sigue la siguiente estructura: `shutdown(Número de matriz, estado`. El número de matriz es útil cuando se tiene conectada más de una, es importante aclarar que este número pede ser uno del 0 al 7, siendo 0 la primera matriz y 7 la octava (el número máximo de matrices controlables por la libería). El estado puede ser `True` o `False`, cada uno hará que la matriz se encuentre encendia o apagada. 
* **setIntensity**: permite asignar una intensidad al módulo, es decir, la cantidad de luz que emitirá la misma. Este método sigue la siguiente estrucutra: `setIntensity(Número de matriz, intensidad`. La intensidad es un número que puede ir desde el 1 al 15, siendo 1 la intensidad más baja y 15 la más alta. 
* **clearDisplay**: este método permite limpiar todos los valores de la matriz. Es decir, si tenemos un patron en la matriz y queremos apagar todos los leds para hacerlo más rápido se utiliza dicho método. el método recibe un 1 o un 0 para indicar si se quiere limpiar o no la matriz.
* **SetLed**: este método permite encender un led de la matriz siguiendo la siguiente estrucutura: `lc.setLed(Número de matriz,fila,columna,estado)`. El número de matriz hace referencia al módulo, siendo 0 la primera y 7 la octava. Número de fila del 0 al 7 para referirnos a las 8 filas. Número de columna del 0 al 7 para referirnos a las 8 columnas. Estado, este puede ser `True`para indicar que que queremos encender el led y `False`para indicar que querermos apagar el led.

### Programas de ejemplo

Ahora que conocemos los diferentes métodos de la librería encenderemos todos los led de la matriz. 

En el siguiente programa se recorre cada fila y columna y se enciende el led.

```cpp
#include "LedControl.h" // importa libreria LedControl

LedControl lc = LedControl(11,13,10,1);   // crea objeto lc

void setup() 
{
  lc.shutdown(0,false); // enciende la matriz
  lc.setIntensity(0,4); // establece brillo
  lc.clearDisplay(0);   // blanquea matriz
}

void loop()
{
      for (int fila = 0; fila < 8; fila++)
      {
        for (int columna = 0; columna < 8; columna++)
        {
            lc.setLed(0, fila, columna, true;
            delay(500)
        }
      }
}
```

El siguiente programa utiliza un concepto llamado multiplexación. Si quereremos dibujar figuras en la matriz como por ejemplo: números, letras, íconos, etcétera, si lo queremos hacer de la manera aprendida sería bastante tedioso. Para esta situación existe un método que nos permitirá representar valores en las filas de una manera bastante sencilla. 

![](Diagrama%20Matriz%20de%20leds.jpg)

Primero es necesario entender la metodología que se sigue para dibujar elementos en la matriz. Como referencia se sugiere ver la imagen. Para encender los diferentes leds lo haremos fila por fila, indicando en cada fila cuales de los leds de las diferentes columna queremos encender. Como ejemplo se expone en la imágen los respectivos valores que representarán los leds que se tienen que encender en cada fila. Para encender un led asignaremos el valor de 1 y para mantener este apagado se utiliza el valor de 0. Así podemos crear un "mapa" de 8 bits que representará a cada columna y en cada bit indicaremos un 0 si queremos apagar el led y un 1 si queremos encender el led. 

Para pasar esto a la programación debemos crear un array de elementos en los que cada elemento se componga de la serie de bits que hemos visto anteriormente y se ven en la imagen.

Luego de crear el array recorreremos cada elemento del array utilizando un nuevo método que nos aporta esta librería. `setRow` este método recibe como parámetros `setRow(Número de matriz, fila, valor)` donde el número de la matriz es un número entre 0 y 7, el número de fila es un número del 0 al 7 y el valor es un número de 8 bits que representará los leds que se encenderán. 

El funcionamiento del programa es el siguiente: se recorre cada fila de la matriz a la vez que recorremos los elementos del array para así indicarle al método `setRow` el número de fila que será nuestra variable de iteración del bucle for, así como también el elemento del array. 

```cpp
#include "LedControl.h" // importa libreria LedControl

LedControl lc = LedControl(11,13,10,1);   // crea objeto lc



void setup() 
{
  lc.shutdown(0,false); // enciende la matriz
  lc.setIntensity(0,4); // establece brillo
  lc.clearDisplay(0);   // blanquea matriz
}

void loop()
{
byte corazon[8]= {  // Creamos array corazon con la imagen del corazon
  B00000000,
  B00000000,
  B00101000,
  B01010100,
  B10000010,
  B01000100,
  B00101000,
  B00010000
};

for (int i = 0; i < 8; i++)
{
    lc.setRow(0, i, corazon[i])
}
}
```