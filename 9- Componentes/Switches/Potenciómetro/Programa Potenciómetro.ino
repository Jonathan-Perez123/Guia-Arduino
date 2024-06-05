//El potenciómetro entre todos sus niveles podemos obtner valores desde el 0 hasta el 1023. 
//Es un componente analógico, por lo que se debe conectar a un pin analógico o PWM.

//Se debe crear una variable del pin y otra variable que contendrá el valor del potenciómetro
int potenciometro = A0; //Variable con el número de pin

int valorPotenciometro; //Variable que contendrá el valor del potenciómetro

void setup() {
  Serial.begin(9600);
  pinMode(potenciometro, INPUT); //Definimos el pin
}

void loop() {
  valorPotenciometro = analogRead(potenciometro); //Guardamos el valor del potenciómetro en una variable, esto se logra con el comando --> variable en la que se quiere guardar este valor = analogRead(pin del componente)
  Serial.println(valorPotenciometro);
}
