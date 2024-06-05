# Teclado 4x4 Matricial

Este es un teclado que se organiza de forma matricial, empleando filas y columnas para la organización de los botones que en total son 16. 

### Composición externa

Se compone de una impresión de plástico que proteje los botones y agrega leyendas a los mismos.

### Composición interna

Se compone de 16 botones conectados en forma de matriz.

### Funcionamiento

Al presionar cualquiera de los botones se detecta un pulso/voltaje que lo podemos detectar mediante la programación para ejecutar una acción para cada botón. 

### Circuito

![](Circuito%20Teclado4x4.jpg)

**Materiales**:
* **Teclado 4x4**
* **Cables**: se conectan todos directamente a la placa de Arduino. El módulo trae 8 pines, 4 corresponden a las columnas y 4 a las filas del teclado, se deben conectar directamente a la placa de Arduino, también se puede utilizar una breadboard.

### Programación

Para controlar este teclado es necesario instalar una librería, esta suele ya venir preinstalada con Arduino IDE pero en caso de no estar instalada esta se llama "Keypad" y nos servirá para controlar el teclado de una manera sencilla, añandiendo funciones que nos permiten interactuar con el teclado de una manera completa.

```cpp
#include <Keypad.h>     // Incluimos la librería 

// Creamos las constantes para definir las filas y columnas de nuestra matriz
const byte filas = 4;   
const byte columnas = 4;

// Creamos las variables correspondientes a cada pin para identificar cada número
byte pinesF[filas] = {9,8,7,6};
byte pinesC[columnas] = {5,4,3,2};
 
// Creamos una matriz con filas y columnas que almacenará las leyendas de cada tecla
char teclas[filas][columnas] = {

 {'1','2','3','A'},
 {'4','5','6','B'},
 {'7','8','9','C'},
 {'*','0','#','D'}
};
 
Keypad teclado = Keypad(makeKeymap(teclas), pinesF, pinesC, filas, columnas);   // Realizamos un mapeo del teclado con sus respectivos pines y sus teclas
 
char tecla; // Creamos la variable que almacenará la tecla que ha sido presionada
 
void setup() {
    Serial.begin(9600); // Inicializamos el monitor serie a 9600 baudios
}
void loop() {
    tecla = teclado.getKey();   // Guardamos el valor de la tecla presionada en la variable tecla anteriormente declarada
    if (tecla != 0) 
        Serial.print(tecla);    // Imprimos la tecla presionada en caso de que la variable tecla sea diferente a cero 
}
```
