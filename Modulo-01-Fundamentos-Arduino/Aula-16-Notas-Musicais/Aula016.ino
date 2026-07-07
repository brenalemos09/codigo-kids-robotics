#define ledpino1 13
#define ledpino2 12
#define ledpino3 11

const int botaoA = 4;
const int botaoB = 3;
const int botaoC = 2;
const int som = 9;

int estado_botaoA = 0;
int estado_botaoB = 0;
int estado_botaoC = 0;
int tom = 0;

void setup() {
  pinMode(ledpino1, OUTPUT);
  pinMode(ledpino2, OUTPUT);
  pinMode(ledpino3, OUTPUT);
  pinMode(som, OUTPUT);
  pinMode(botaoA, INPUT);
  pinMode(botaoB, INPUT);
  pinMode(botaoC, INPUT);
}

void loop() {

  estado_botaoA = digitalRead(botaoA);
  estado_botaoB = digitalRead(botaoB);
  estado_botaoC = digitalRead(botaoC);

  if(estado_botaoA && !estado_botaoB && !estado_botaoC) {
    tom = 264;
    digitalWrite(ledpino1, HIGH);
  }
  if(estado_botaoB && !estado_botaoA && !estado_botaoC) {
    tom = 297;
    digitalWrite(ledpino2, HIGH);
  }
  if(estado_botaoC && !estado_botaoA && !estado_botaoB) {
    tom = 330;
    digitalWrite(ledpino3, HIGH);
  }
  if(tom > 0) {
    digitalWrite(som, HIGH);
    delayMicroseconds(tom);
    digitalWrite(som, LOW);
    delayMicroseconds(tom);
    tom = 0;
    digitalWrite(ledpino1, LOW);
    digitalWrite(ledpino2, LOW);
    digitalWrite(ledpino3, LOW);
  }
}
