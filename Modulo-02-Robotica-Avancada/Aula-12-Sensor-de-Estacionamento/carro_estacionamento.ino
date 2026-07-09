#include <Ultrasonic.h>
#define in1 4
#define in2 5
#define in3 6
#define in4 7
#define ENA 8
#define ENB 9

#define trig 13
#define echo 12


Ultrasonic ultrasonic(trig, echo);

void setup() {
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);
 pinMode(ENA, OUTPUT);
 pinMode(ENB, OUTPUT);
 Serial.begin(9600);
}

void seguir(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(ENA, 150);
  analogWrite(ENB, 150);
}

void vireE(){
  analogWrite(ENA, 150);
  analogWrite(ENB, 150);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}
void vireD(){
  analogWrite(ENA, 150);
  analogWrite(ENB, 150);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

 void re(){
  analogWrite(ENA, 150);
  analogWrite(ENB, 150);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  
}

void parar(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}


void loop() {
  int distancia;
  long microsec = ultrasonic.timing();
  distancia = ultrasonic.convert(microsec, Ultrasonic::CM);

 if(distancia >= 20){
  seguir();
  delay(500);
  vireE();
  delay(900);
  re();
  delay(700);
  vireD();
  delay(800);
  seguir();
  delay(200);
  parar();
  delay(10000);
 }

 else{
  seguir();
 } 
}
