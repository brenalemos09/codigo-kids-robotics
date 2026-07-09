#define in1  4
#define in2  5
#define in3  6
#define in4  7
#define ENA  8
#define ENB  9   
 

void setup() {
 Serial.begin(9600);
 
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

void loop() {
  
 analogWrite(ENA, 180);
 analogWrite(ENB, 180);

 frente();
 delay(3000);
 re();
 delay(3000);
 direita();
 delay(3000);
 esquerda();
 delay(3000);
}
