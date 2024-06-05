//Pantallas LCD
#include <LiquidCrystal.h>  //Incluimos la librería para poder controlar la pantalla LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  //Definimos los pines que vamos a utilizar (Esto son los básicos e indispensable).

void setup() {
  lcd.begin(16, 2); //Definir las dimenciones de la pantalla --> lcd.begin(columnas, filas);
}

void loop() {
  lcd.clear();  //Borra la pantalla LCD y coloca el cursor en la esquina superior izquierda. 
  lcd.home(); //Coloca el cursor en la esquina superior izquierda.
  lcd.setCursor();  //Coloca el cursor en una coordenada especificada, siguiendo la siguiente regla --> lcd.setCursor(columnas, filas);
  lcd.write(data);
  lcd.print() //Muestra en pantalla texto o variable.
  lcd.cursor()  //Muestra el cursor LCD: un guión bajo (línea) en la posición en la que se escribirá el siguiente carácter. 
  lcd.noCursor()  //Esconde el cursor del LCD
  lcd.blink();  //Muestra el cursor parpadeando
  lcd.noBlink();  //No muestra el cursor
  lcd.display();  //Enciende la pantalla LCD, después de haberla apagado con noDisplay(). Esto restaurará el texto (y el cursor) que estaba en la pantalla. 
  lcd.noDisplay();  //Apaga la pantalla LCD, sin perder el texto que se muestra en ella. 
  lcd.scrollDisplayLeft();  //Desplaza el contenido de la pantalla (texto y cursor) un espacio hacia la izquierda. 
  lcd.scrollDisplayRight();  //Desplaza el contenido de la pantalla (texto y cursor) un espacio hacia la derecha. 
  lcd.autoscroll(); //Activa el desplazamiento automático de la pantalla LCD. Esto hace que cada carácter emitido en la pantalla desplace los caracteres anteriores un espacio. Si la dirección actual del texto es de izquierda a derecha (por defecto), la pantalla se desplaza hacia la izquierda; si la dirección actual es de derecha a izquierda, la pantalla se desplaza hacia la derecha. Esto tiene el efecto de imprimir cada nuevo carácter en la misma ubicación en la pantalla LCD. 
  lcd.noAutoscroll(); //Contrario a autoscroll
  lcd.leftToRight();  //Establezca la dirección del texto escrito en la pantalla LCD de izquierda a derecha, el valor predeterminado. Esto significa que los siguientes caracteres que se escriban en la pantalla irán de izquierda a derecha, pero no afecta al texto emitido anteriormente. 
  lcd.rightToLeft();  //Establezca la dirección del texto escrito en la pantalla LCD de izquierda a derecha, el valor predeterminado. Esto significa que los siguientes caracteres que se escriban en la pantalla irán de izquierda a derecha, pero no afecta al texto emitido anteriormente. 
}
