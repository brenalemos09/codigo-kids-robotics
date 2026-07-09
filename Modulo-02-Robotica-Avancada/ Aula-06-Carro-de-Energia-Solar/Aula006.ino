#define in1 4
#define in2 5
#define in3 6
#define in4 7
#define ENA 8
#define ENB 9
#define ldr A0

void setup() {
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(ldr, INPUT);
}
void seguir(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void parar(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void loop() {
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);

  int sensLdr = analogRead(ldr);
  if(sensLdr < 820){
    seguir();
  } else {
    parar();
  }

}
