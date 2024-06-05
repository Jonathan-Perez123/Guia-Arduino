// Creamos las constantes de los pines
const int TriggerPin = 9;  // Debe estar conectado al pin digital
const int EchoPin = A0;    // Debe estar conectado a un pin analógico

// Creamos las variables de estado
long time;
float distance;

void setup() {
  // Inicializamos el monitor serie a 9600 baudiosss
  Serial.begin(9600);

  // Definimos los pines
  pinMode(TriggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
}

void loop() {
  // Realizamos la configuración inicial correspondiente al TriggerPin
  digitalWrite(TriggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TriggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin, LOW);

  // Calculamos la distancia
  time = pulseIn(EchoPin, HIGH) / 2;
  distance = time * 0.0343;

  // Mostramos en el monitor serie la distancia
  Serial.print("Distancia:		");
  Serial.print(distance);
  Serial.println("	cm");
}