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