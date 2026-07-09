#define ir A0
#define ena 8
#define enb 9
#define in1 4
#define in2 5
#define in3 6
#define in4 7


void setup(){
  pinMode(ir, INPUT);
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  Serial.begin(9600);
}
 

void parar(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(500);
}

void re(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(ena, 255);
  analogWrite(enb, 255);
  delay(500);
}

void girar(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(ena, 255);
  analogWrite(enb, 255);
  delay(1000);
}

void seguir(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(ena, 255);
  analogWrite(enb, 255);
}

void loop(){
  int sensIr = digitalRead(ir);

  Serial.println(sensIr);
  
  if(sensIr == 1){
    parar();
    re();
    girar();
    seguir();
  }
  
  else{
   seguir();
 }  
}
