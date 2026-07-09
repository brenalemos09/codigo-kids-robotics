#include <Wire.h>


const int MPU=0x68;  

int AcX,AcY;

#define enableA 8
#define enableB 9
#define in1 4
#define in2 5
#define in3 6
#define in4 7

void setup() {
  
  Serial.begin(9600);
  Wire.begin();
  Wire.beginTransmission(MPU);
  Wire.write(0x6B); 
   

  Wire.write(0); 
  Wire.endTransmission(true);
  pinMode(enableA, OUTPUT);
  pinMode(enableB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}

void parar(){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enableA, 0);
    analogWrite(enableB, 0);  
}

void seguir(){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enableA, 255);
    analogWrite(enableB, 255);  
}

void loop() {

  Wire.beginTransmission(MPU);
  Wire.write(0x3B); 
  Wire.endTransmission(false);

  Wire.requestFrom(MPU,6,true);  
 
  AcX=Wire.read()<<8|Wire.read();   
  AcY=Wire.read()<<8|Wire.read();  

  
  if(AcY >= 3000){
    seguir();
  } else if(AcX >= 5000){
    parar();
  }
  //Aguarda 200 ms e reinicia o processo

}
