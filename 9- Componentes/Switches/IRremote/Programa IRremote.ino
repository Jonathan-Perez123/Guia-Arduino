#include <IRremote.hpp>  // incluimos la librería "IRremote" previamente instalada desde el librerie manager

int sensor = 7; // pin donde está conectado el sensor
const int led = 13;  // guardamos el número de pin donde esta conectado el led en una constante
IRrecv irrecv(sensor);  // creamos un objeto de tipo IRrecv para almacenar el valor recivido
decode_results codigo; //resultado de los botones presionados

void setup()
{
  Serial.begin(9600);  // inicializamos el monitor serial a 9600 baudios
  irrecv.enableIRIn(); // habilitamos el sensor
  pinMode(led, OUTPUT);  // definimos el pin del led como salida
}

void loop()
{
  // En este condicional leemos el sensor y almacenamos el valor del botón presionado el la variable codigo.value para luego consultarlo a la hora de encender  componentes
  if (irrecv.decode(&codigo))
  {
    irrecv.resume();
    Serial.println(codigo.value, HEX);


    while (codigo.value == 0x1FE807F)
    {
      digitalWrite(led, 1);

      if (irrecv.decode(&codigo))
      {
        irrecv.resume();
        Serial.println(codigo.value, HEX);
      }
      digitalWrite(led, 0);

    }


  }
}
