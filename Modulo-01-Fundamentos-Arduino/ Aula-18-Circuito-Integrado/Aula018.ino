#define bot1 3
#define bot2 11
int unidade = 0;
long tempo = 0;

void setup(){
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  pinMode(bot1, INPUT_PULLUP);
  pinMode(bot2, INPUT_PULLUP);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int segmento[10]={B11111100,B01100000,B11011010,B11110010,B01100110,B10110110,B10111110,B11100000,B11111110,B11110110};
  bool Botao1 = digitalRead(bot1);
  bool Botao2 = digitalRead(bot2);
  bool contagem = millis() - tempo > 300;

  if(Botao1 == 0 && contagem){
    unidade ++;
    tempo = millis();
  }
  if(Botao2 == 0 && contagem){
    unidade --;
    tempo = millis();
  }

  if(unidade < 0){
    unidade = 9;
  }

  if(unidade >= 10){
    unidade = 0;
  }

  switch (unidade){
    case 0:
    digitalWrite(9, LOW);
    shiftOut(10,8,LSBFIRST,segmento[0]);
    digitalWrite(9, HIGH);
    delay(10);
    break;
    case 1:
    digitalWrite(9, LOW);
    shiftOut(10,8,LSBFIRST,segmento[1]);
    digitalWrite(9, HIGH);
    delay(10);
    break;      
    case 2:
    digitalWrite(9, LOW);
    shiftOut(10,8,LSBFIRST,segmento[2]);
    digitalWrite(9, HIGH);
    delay(10);
    break;      
    case 3:
    digitalWrite(9, LOW);
    shiftOut(10,8,LSBFIRST,segmento[3]);
    digitalWrite(9, HIGH);
    delay(10);
    break;      
    case 4:
    digitalWrite(9, LOW);
    shiftOut(10,8,LSBFIRST,segmento[4]);
    digitalWrite(9, HIGH);
    delay(10);
    break;
    case 5:
    digitalWrite(9, LOW);
    shiftOut(10,8,LSBFIRST,segmento[5]);
    digitalWrite(9, HIGH);
    delay(10);
    break;
    case 6:
    digitalWrite(9, LOW);
    shiftOut(10,8,LSBFIRST,segmento[6]);
    digitalWrite(9, HIGH);
    delay(10);
    break;
    case 7:
    digitalWrite(9, LOW);
    shiftOut(10,8,LSBFIRST,segmento[7]);
    digitalWrite(9, HIGH);
    delay(10);
    break;
    case 8:
    digitalWrite(9, LOW);
    shiftOut(10,8,LSBFIRST,segmento[8]);
    digitalWrite(9, HIGH);
    delay(10);
    break;
    case 9:
    digitalWrite(9, LOW);
    shiftOut(10,8,LSBFIRST,segmento[9]);
    digitalWrite(9, HIGH);
    delay(10);
    
  }
  
}
