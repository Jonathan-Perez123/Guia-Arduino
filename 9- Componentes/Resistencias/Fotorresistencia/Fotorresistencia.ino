int lightPin = A4;
int lightVal;

int dt = 100;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
}

void loop() {
  lightVal = analogRead(lightPin);

  Serial.println(lightVal);
  delay(dt);
}
