# Diodo Led

![](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fimg.clasf.co.ve%2F2019%2F08%2F21%2FDiodo-Led-5mm-Packs-10-Unidades-20190821010247.8080100015.jpg&f=1&nofb=1)

### Composición externa

Un diodo led se compone , externamente, de el led este se encuentra recubierto por plástico para protegerlo así como difuminar y distribuir de manera uniforme la luz que emite el led. Este recubirmiento tiene una forma de "campana", normalmente esta se encuentra "comida" o de manera plana en un lado, esto indica que se trata del lado positivo del diodo led. Las "patitas" del led son dos, una para el positivo y otra para el negativo, se pueden diferenciar ya que una es más larga que la otra, cada una es el positivo y negativo respectivamente. En algunos leds encontraremos una pata más larga de la otra, con ello sabremos cual es el positivo y cual el negativo, como pista adicional se encuentra esta "muesca" en el cuerpo del led.

### Composición interna

Un diodo led se encuentra internamente compuesto por una base o sustrato donde se colocan los demás componentes. Sobre el se coloca una capa de un semiconductor de tipo N y encima de ella una más fina de un semiconductor tipo P. Cada uno de estos dos tipos de semiconductores se encuentran con una diferente cantidad de electrones en cada uno de sus átomos, siendo el seminconductor de tipo N el que cuenta con menos electrones dentro de su capa de valencias, siendo de una carga positiva. En cambio el seminconductor de tipo P tiene una carga negativa, lo que hace que este tenga más electrones dentro de su capa de valencias.

### Funcionamiento

Al conectar un cable en cada una de estas dos capas se transforme la energía que se transmite en estos dos semiconductores, siendo la última capa en la cuál se produce la emision de luz, lo que es lo mismo, más tecnicacmente, que se transforme la energía en fotones. Para que esta emisión de luz sea más eficiente se coloca un cono reflectante encima de la última capa para que la luz emitida se refleje y se producta una mayor fuente de luz, aunque la energía emitida sea la misma. Para crear los diferentes tipos de colores que puede producir con un led se cambia la composición interna de los semiconductores, esto hará que se puedan ver diferentes tipos de colores, rojo, verde, azul, etc...

### Circuito

![](Circuito%20Led.png)

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

La pata negativa del led se conecta a la resistencia y luego al pin de tierra (GND) de la placa Arduino. Por otra parte el positivo del led se conecta a cualquier pin digital o PWM de la placa Arduino.

**Tipos de diodos leds**:
* **Diodo Led**: emite luz en forma de fotones, pueden ser de diferntes colores.
* **Diodo Led infrarrojo**: este tipo de led emite luz fuera del espectro visible para el ojo humano. Se utiliza para la transimición, así como también para la recepción, de datos. Se utilizan en controles remotos para luces o televisores.

### Programación

Para controlar estos leds se utiliza se utilizan los comandos de escritura y lectura que se vieron en la sección 6 de la programación en Arduino.

```cpp
const int led = 8;  //Constante que contendrá el número del pin del led
void setup() {
  pinMode(led, OUTPUT); //Definimos el pin del led
}

void loop() {
  digitalWrite(led, HIGH);  //Encendemos el led con el parámetro --> HIGH
  digitalWrite(led, LOW);   //Apagamos el led con el parámetro --> LOW
}
```
