#include <Ultrasonic.h>

#define trig  13
#define echo 12
#define in1  4
#define in2  5
#define in3  6
#define in4  7
#define enableA  8
#define enableB  9

Ultrasonic ultrasonic(trig, echo);


void setup(){
  pinMode(enableA, OUTPUT);
  pinMode(enableB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
   
  Serial.begin(9600);
 }
 

void desviar(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enableA, 255);
  analogWrite(enableB, 255);
}

void seguir(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enableA, 255);
  analogWrite(enableB, 255);
}


int distancia(){
  int _time = ultrasonic.timing();
  int cmMsec = ultrasonic.convert(_time, Ultrasonic::CM);
  return cmMsec;
}


void loop(){

int resultado  = distancia(); 

  if(resultado > 15){
   seguir();
  } else{
    while(resultado <= 15) {
      desviar();
      resultado  = distancia(); 
    }
  }  
}
