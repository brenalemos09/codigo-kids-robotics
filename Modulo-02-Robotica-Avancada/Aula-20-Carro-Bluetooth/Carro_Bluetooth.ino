#define in1  4
#define in2  5
#define in3  6
#define in4  7
#define enableA 8
#define enableB 9

void Pause() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(100);
}

void Forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(1000);
}

void Backward() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(1000);
}

void Left() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(1000);
}

void Right() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(1000);

}
void setup() {
  pinMode(enableA, OUTPUT);
  pinMode(enableB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  Serial.begin(9600);
  Serial.setTimeout(100);
  analogWrite(enableA, 255);
  analogWrite(enableB, 255);
  Pause();
}


void loop() {
  char conv='o';

  if (Serial.available() > 0) {
    String _read = Serial.readString();
    conv = _read.charAt(0);
  }
    if (conv == 'f') {
      Forward();
    } else if (conv == 'b') {
      Backward();
    } else if (conv == 'l') {
      Left();
    } else if (conv == 'r') {
      Right();
    } else {
      Pause();
    }
}
