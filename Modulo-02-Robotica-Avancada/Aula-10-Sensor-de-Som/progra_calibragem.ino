#define pino_analogico A4

void setup() {
  pinMode(pino_analogico, INPUT);
  Serial.begin(9600);
}

void loop() {
  int valor_A0 = analogRead(pino_analogico);
  Serial.println(valor_A0); 
  delay(200);

}
