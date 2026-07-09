#include <Servo.h>
#include <Ultrasonic.h>

#define echo 10
#define trig 11
#define in1  4
#define in2  5
#define in3  6
#define in4  7
#define enableA 8
#define enableB 9

int angulo = 0;
Ultrasonic ultrasonic(trig, echo);
Servo meuservo;

void setup() {
  pinMode(enableA, OUTPUT);
  pinMode(enableB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);  
  pinMode(in3, OUTPUT); 
  pinMode(in4, OUTPUT); 
  meuservo.attach(2);
  Serial.begin(9600);
}

void seguir(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enableA, 150);
  analogWrite(enableB, 150);
}

int distancia(){
  int _time = ultrasonic.timing();
  int cmMsec = ultrasonic.convert(_time, Ultrasonic::CM);
  return cmMsec;
}

void loop() {
  int obstaculo = distancia();
  seguir();

  if(obstaculo <= 10){
      meuservo.write(90);
      delay(500);
      meuservo.write(180);
  }
}
