#define ir A0
#define in1  4
#define in2  5
#define in3  6
#define in4  7
#define enableA  8
#define enableB  9



void setup() {
  pinMode(ir, INPUT);
  pinMode(enableA, OUTPUT);
  pinMode(enableB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  Serial.begin(9600);
}


void seguir(){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW );
    analogWrite(enableA, 180);
    analogWrite(enableB, 180);  
}

void parar(){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    analogWrite(enableA, 0);
    analogWrite(enableB, 0);  
}



void loop() {
 bool sensIR = digitalRead(ir);

 if(sensIR == 0){
  seguir();
 }

 else{
  parar();
 }
}
