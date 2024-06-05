# Botón a presión

Un botón a presión es un componente que permite dejar pasar o no la corriente en un circuito. Este componente puede ser utilizado para encender o apagar todo tipo de componentes como leds, motores o sensores.

### Composición externa

Se compone de una cubierta de plástico que sirve a modo de superficie para poder presionar el botón de una manera efectiva.

### Composición interna

Se compone de un circuito que ante una fuerza (humana) acciona una pista que deja o no pasar la corriente.

### Funcionamiento

Al presionar el botón como ya se ha dicho se acciona una pista que permite el paso o no de la energía eléctrica.

### Circuito

![](Circuito%20Boton.png)

**Materiales**:
* **Botón**
* **Resistencia**: se necesita de una resistencia de 10KΩ para evitar quemar el componente, dicha resistencia irá conectada al negativo del botón (pin izquierdo).
* **Cables**: se debe conectar un cable a 5V de la placa Arduino, dicho cable sale del pin derecho del botón. Como segundo y último cable se necesita conectar el bóton a cualquier pin digital de la placa Arduino para poder de allí leer los valores que produzca el botón.

### Programación

Para programar este componente hace falta una carga que controlar, es decir, un led, motor o sensor en el cual producir los cambios del botón, también se puede presindir de esta carga par utilizar el monitor serie como indicativo de que se a presionado el botón.


```cpp
//Los botones son compoentes digitales.Para controlar un componente son un botón es necesario crear una constante para almacenar el pin al cual se encuentra conectado el componente y otra que contendrá estado en el cuál se encuentra el mismo al ser presionado o no.

const int boton = 13; // Constante con el número de pin

int valorBoton; // Vriable que contendrá el estado del botón

void setup() {
  Serial.begin(9600);
  pinMode(boton, INPUT); // Definimos el pin
}

void loop() {
  valorBoton = digitalRead(boton); // Amacenamos el valor del botón en una variable
  Serial.println(valorBoton);
}
```
