#define in1 4
#define in2 5
#define in3 6
#define in4 7
#define ENA 8
#define ENB 9

#define sensor 2
void setup() {
   pinMode(in1, OUTPUT);
   pinMode(in2, OUTPUT);
   pinMode(in3, OUTPUT);
   pinMode(in4, OUTPUT);
   pinMode(ENA, OUTPUT);
   pinMode(ENB, OUTPUT);
   pinMode(sensor, INPUT);
   Serial.begin(9600);  

}

void frente(){
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 digitalWrite(in3, LOW);
 digitalWrite(in4, HIGH);
 analogWrite(ENA, 255);
 analogWrite(ENB, 255);
}

void parar(){
 digitalWrite(in1, LOW);
 digitalWrite(in2, LOW);
 digitalWrite(in3, LOW);
 digitalWrite(in4, LOW);
}
void loop() {
  
 bool magnetismo = digitalRead(sensor);

  if(magnetismo == LOW){
    frente();
  }else{
    parar();
  }

}
