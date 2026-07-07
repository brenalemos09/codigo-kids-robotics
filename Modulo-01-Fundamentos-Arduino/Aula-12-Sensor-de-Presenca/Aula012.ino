#define ledvermelho 13
#define ledazul 12
#define sensor A0
#define buzzer 6

int sensorAlogPin = 0;
int valor = 0;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(ledazul, OUTPUT);
  pinMode(ledvermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valor = analogRead(sensorAlogPin);

  if (valor < 950) {
    digitalWrite(ledazul, HIGH);
    digitalWrite(ledvermelho, LOW);
    digitalWrite(buzzer, HIGH);
    Serial.println("Atenção! Presença detectada");
    delay(500);
  }
  else{
    digitalWrite(ledazul, LOW);
    digitalWrite(ledvermelho, HIGH);
    digitalWrite(buzzer, LOW);
    Serial.println("Monitorando o Ambiente");
    delay(500);
  }
}
