#define in1  4
#define in2  5
#define in3  6
#define in4  7
#define ENA  8
#define ENB  9
#define pino_analogico A4

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(pino_analogico, INPUT);
  Serial.begin(9600);
}

void parar(){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    analogWrite(ENA, 0);
    analogWrite(ENB, 0);  
}

void frente(){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW); 
}

void loop() {
  int valor_A0 = analogRead(pino_analogico);
  Serial.println(valor_A0);
  if(valor_A0 > 26){
    frente();
    analogWrite(ENA, 255);
    analogWrite(ENB, 255);
    delay(1000);
  } else{
    parar();
  }  
}    
