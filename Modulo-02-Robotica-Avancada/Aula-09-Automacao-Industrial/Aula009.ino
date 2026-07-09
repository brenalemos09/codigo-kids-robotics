#define ir1 A0
#define ir2 A1
#define ir3 A2

#define in1 4
#define in2 5
#define in3 6
#define in4 7

#define enableA 8
#define enableB 9

int pwm = 255;

void setup() {

  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);

  pinMode(enableA, OUTPUT);
  pinMode(enableB, OUTPUT);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  Serial.begin(9600);
}

void parar() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  analogWrite(enableA, 0);
  analogWrite(enableB, 0);
}

void esquerda() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  analogWrite(enableA, pwm);
  analogWrite(enableB, pwm);
}

void direita() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(enableA, pwm);
  analogWrite(enableB, pwm);
}

void reto() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  analogWrite(enableA, pwm);
  analogWrite(enableB, pwm);
}

void loop() {

  bool sensIr1 = digitalRead(ir1);
  bool sensIr2 = digitalRead(ir2);
  bool sensIr3 = digitalRead(ir3);

  // Esquerda
  if (sensIr1 == LOW && sensIr3 == LOW && sensIr2 == HIGH) {
    esquerda();
  }

  // Direita
  else if (sensIr2 == LOW && sensIr3 == LOW && sensIr1 == HIGH) {
    direita();
  }

  // Frente
  else if (sensIr3 == HIGH && sensIr1 == LOW && sensIr2 == LOW) {
    reto();
  }

  // Parar
  else if (sensIr1 == LOW && sensIr2 == LOW && sensIr3 == LOW) {
    parar();
  }

  // Qualquer outra combinação
  else {
    parar();
  }
}
