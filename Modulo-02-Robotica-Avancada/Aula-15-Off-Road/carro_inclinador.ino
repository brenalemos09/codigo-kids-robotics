#define pino_sensor 2
#define ena 8
#define enb 9
#define in1 4
#define in2 5
#define in3 6
#define in4 7

void setup() {
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(pino_sensor, INPUT);
  Serial.begin(9600);

}

void acelera(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(ena, 255);
  analogWrite(enb, 255);
}

void parar(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(500);
}

void loop() {
  bool inclinacao = digitalRead(pino_sensor);
  Serial.println(inclinacao);
  if(inclinacao == true){
    acelera();
  }else{
    parar(); 
  }
}
