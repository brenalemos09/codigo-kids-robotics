#define in1 4
#define in2 5
#define in3 6
#define in4 7
#define ENA 8
#define ENB 9
#define btn 12

void setup() {
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);
 pinMode(btn, INPUT_PULLUP);
 pinMode(ENA, OUTPUT);
 pinMode(ENB, OUTPUT);
 Serial.begin(9600);
}

void seguir(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
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

  int btn_start = digitalRead(btn);

  if(btn_start == LOW){
    seguir();
    delay(5000);
    parar();
  }


}
