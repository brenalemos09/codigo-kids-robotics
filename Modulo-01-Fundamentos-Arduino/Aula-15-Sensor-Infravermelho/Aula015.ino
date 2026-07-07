#include <IRremote.h>

int pinoIR = 13;
int ledDireito = 7;
int ledBaixo = 8;
int ledCima = 9;
int ledEsquerdo = 10;
int ledCentro = 6;

#define tecla2 0xFF18E7
#define tecla4 0xFF10EF
#define tecla5 0xFF38C7
#define tecla6 0xFF5AA5
#define tecla8 0xFF4AB5

unsigned long valorAtual = 0x0;

IRrecv receptorIR(pinoIR);
decode_results valores;

void setup() {
  Serial.begin(9600);
  receptorIR.enableIRIn();
  pinMode(ledEsquerdo, OUTPUT);
  pinMode(ledDireito, OUTPUT);
  pinMode(ledCima, OUTPUT);
  pinMode(ledBaixo, OUTPUT);
  pinMode(ledCentro, OUTPUT);
}

void loop() {
  digitalWrite(ledEsquerdo, LOW);
  digitalWrite(ledDireito, LOW);
  digitalWrite(ledCima, LOW);
  digitalWrite(ledBaixo, LOW);
  digitalWrite(ledCentro, LOW);

  if (receptorIR.decode(&valores)) {
    valorAtual = valores.value;
    Serial.println(valorAtual);
    receptorIR.resume();
  }

  switch (valores.value) {
    case tecla2:
    digitalWrite(ledCima, HIGH);
    Serial.println("Cima");
    delay(1000);
    break;

    case tecla8:
    digitalWrite(ledBaixo, HIGH);
    Serial.println("Baixo");
    delay(1000);
    break;

    case tecla4:
    digitalWrite(ledEsquerdo, HIGH);
    Serial.println("Esquerdo");
    delay(1000);
    break;

    case tecla6:
    digitalWrite(ledDireito, HIGH);
    Serial.println("Direito");
    delay(1000);
    break;

    case tecla5:
    digitalWrite(ledCentro, HIGH);
    Serial.println("Centro");
    delay(1000);
    break;

    default:
    Serial.println("Aguardando Comando");
    digitalWrite(ledEsquerdo, LOW);
    digitalWrite(ledDireito, LOW);
    digitalWrite(ledCima, LOW);
    digitalWrite(ledBaixo, LOW);
    digitalWrite(ledCentro, LOW);
    delay(1000);
  }
}
