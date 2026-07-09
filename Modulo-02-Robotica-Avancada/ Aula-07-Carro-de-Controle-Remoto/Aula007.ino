#include <IRremote.h>

#define pinoIR   13
#define in1  4
#define in2  5
#define in3  6
#define in4  7

#define tecla4 0xFF10EF
#define tecla6 0xFF5AA5
#define tecla8 0xFF4AB5
#define tecla2 0xFF18E7
#define tecla5 0xFF38C7

#define enableA 8
#define enableB 9


unsigned long valorAtual = 0x0;

IRrecv receptorIR(pinoIR);
decode_results valores;


void setup() {

  Serial.begin(9600);
  receptorIR.enableIRIn();

  pinMode(enableA, OUTPUT);
  pinMode(enableB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void esquerda() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  analogWrite(enableA, 255);
  analogWrite(enableB, 255);
  delay(200);
}


void direita() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(enableA, 255);
  analogWrite(enableB, 255);
  delay(200);
}

void frente() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  analogWrite(enableA, 255);
  analogWrite(enableB, 255);
  delay(200);
}

void re() {

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(enableA, 255);
  analogWrite(enableB, 255);
  delay(200);
}

void parar() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  analogWrite(enableA, 0);
  analogWrite(enableB, 0);
  delay(200);
}

bool controle() {
bool _press = false;
  while (receptorIR.decode(&valores)) {
    valorAtual = valores.value;
    _press = receptorIR.decode(&valores);
    receptorIR.resume();
  }
  return _press;
}


void loop() {

  bool _press = controle();
  switch (valores.value) {

    case tecla2:
      while (_press==1) {
        frente();
        _press = controle();
      }
      break;

    case tecla8:
      while (_press==1) {
        re();
        _press = controle();
      
      }
      break;

    case tecla4:
     while (_press==1) {
        esquerda();
        _press = controle();
          
      }
      break;

    case tecla6:
        while (_press==1) {
        direita();
        _press = controle();
        
      }
      break;

     case tecla5:
        while (_press==1) {
        parar();
        _press = controle();  
  }
}
}
