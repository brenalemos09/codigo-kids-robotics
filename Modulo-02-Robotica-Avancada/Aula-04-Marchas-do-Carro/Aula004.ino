#define in1  4
#define in2  5
#define in3  6
#define in4  7
#define ENA  8
#define ENB  9  
#define bot1 11
#define bot2 12

int pwm;
int marcha;

void setup() {
   pinMode(in1, OUTPUT);
   pinMode(in2, OUTPUT);
   pinMode(in3, OUTPUT);
   pinMode(in4, OUTPUT);
   pinMode(ENA, OUTPUT);
   pinMode(ENB, OUTPUT);
   pinMode(bot2, INPUT_PULLUP);
   pinMode(bot1, INPUT_PULLUP);
   Serial.begin(9600);   
}
  
  void partida(){
   digitalWrite(in1, LOW);
   digitalWrite(in2, HIGH);
   digitalWrite(in3, LOW);
   digitalWrite(in4, HIGH);
   analogWrite(ENA, pwm);
   analogWrite(ENB, pwm);
  }

  void parar(){
   digitalWrite(in1, LOW);
   digitalWrite(in2, LOW);
   digitalWrite(in3, LOW);
   digitalWrite(in4, LOW);
   analogWrite(ENA, 0);
   analogWrite(ENB, 0);
  }

void loop() {

  int Botao1 = digitalRead(bot1);
  int Botao2 = digitalRead(bot2);

 
  if(Botao1 == LOW){
    partida();
  } else{
    parar();
  }
  
  if(Botao2 == LOW){
   marcha ++;
   delay(1000);
  }

  if(marcha > 5){
     marcha = 0;
    }
  
  
  switch(marcha){
    
    case 0:
    pwm = 0;
    break;
  
    case 1:
    pwm = 150;
    break;
    
    case 2:
    pwm = 180;
    break;
    
    case 3:
    pwm = 200;
    break;
    
    case 4:
    pwm = 220;
    break;
    
    case 5:
    pwm = 255;
    break;
  }
}




 
  

 



 
