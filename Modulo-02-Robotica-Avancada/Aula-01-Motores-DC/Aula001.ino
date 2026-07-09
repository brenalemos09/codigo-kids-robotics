#define motor 6
#define ENB 9

#define pot A5

int pwm;
void setup() {
  
  pinMode(pot, INPUT);

  pinMode(motor, OUTPUT);
  pinMode(ENB, OUTPUT);
  
  Serial.begin(9600);   
}

void loop() {

 int pot1 = analogRead(pot);
 
 pot1 = map(pot1, 0, 1023, 0 ,255);

Serial.println(pot1);

 pwm = pot1;

digitalWrite(motor, LOW);
analogWrite(ENB, pwm);
}

 

 
