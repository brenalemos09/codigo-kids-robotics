
#define Eixo_x  A0
#define Eixo_y  A1
#define botao   2
#define in1  4
#define in2  5
#define in3  6
#define in4  7
#define ENA  8
#define ENB  9


void setup() {
 Serial.begin(9600);
 
 pinMode(Eixo_x, INPUT);
 pinMode(Eixo_y, INPUT);
 pinMode(botao, INPUT_PULLUP);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);
 pinMode(ENA, OUTPUT);
 pinMode(ENB, OUTPUT);
}

void frente(){
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 digitalWrite(in3, LOW);
 digitalWrite(in4, HIGH);
}

void re(){
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 digitalWrite(in3, HIGH);
 digitalWrite(in4, LOW);
}

void esquerda(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void direita(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void parar(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void loop() {
    analogWrite(ENA, 255);
    analogWrite(ENB, 255);

    int valorVRx = analogRead(Eixo_x);
    int valorVRy = analogRead(Eixo_y);
    bool estado_btn = digitalRead(botao);

    if(valorVRx == 0){ 
      re();
    } 
    if(valorVRx == 1023){
      frente();
    }
    if (valorVRy == 0){
      esquerda();
    } 
    if(valorVRy == 1023){
      direita();   
    }
      if(estado_btn == LOW){
    parar();
  }
}
