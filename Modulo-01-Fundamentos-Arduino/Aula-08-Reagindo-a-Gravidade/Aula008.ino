#define LedAzul 13
#define LedVermelho 12
#define tilt A0

void setup() {
  pinMode(tilt, INPUT);
  pinMode(LedVermelho, OUTPUT);
  pinMode(LedAzul, OUTPUT);
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  if(analogRead(tilt) == 0) {
    digitalWrite(LedVermelho, LOW);
    digitalWrite(LedAzul, HIGH);
    Serial.println("RETO!");
    delay(500);
  }
  else {
    digitalWrite(LedVermelho, HIGH);
    digitalWrite(LedAzul, LOW);
    Serial.println("INCLINADO!");
    delay(200);
  }
}
