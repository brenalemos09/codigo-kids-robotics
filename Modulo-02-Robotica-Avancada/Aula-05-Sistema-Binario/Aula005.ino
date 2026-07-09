#define in1 4
#define in2 5
#define in3 6
#define in4 7
#define ENA 8
#define ENB 9
#define btn_frente    12
#define btn_direito   11
#define btn_esquerda  10 

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(btn_frente, INPUT_PULLUP);
  pinMode(btn_direito, INPUT_PULLUP);
  pinMode(btn_esquerda, INPUT_PULLUP);
}

void frente(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void direita(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void esquerda(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
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
 
 int botao_frente = digitalRead(btn_frente);
 int botao_direita = digitalRead(btn_direito);
 int botao_esquerdo = digitalRead(btn_esquerda);

   if(botao_frente == LOW){
    frente();
    delay(3000);
    parar();
   }
   
   if(botao_direita == LOW){
    direita();
    delay(3000);
    parar();
    }
    
    if(botao_esquerdo == LOW){
    esquerda();
    delay(3000);
    parar();
    }
}
