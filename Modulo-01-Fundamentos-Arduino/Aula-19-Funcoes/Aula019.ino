int pot = A5;
int op;
int azul = 5;
int verde = 6;
int vermelho = 9;

void setup(){
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(vermelho, OUTPUT);
}

void loop(){
  op = analogRead(pot);

  if (op > 0 && op < 100){
    Vermelho();
  }
  if (op > 100 && op < 200){
    Verde();
  }
  if (op > 200 && op < 300){
    Azul();
  }
  if (op > 300 && op < 400){
    gold();
  }
  if (op > 400 && op < 500){
    indigo();
  }
  if (op > 500 && op < 600){
    Amarelo();
  }
  if (op > 600 && op < 700){
    Ciano();
  }
  if (op > 800 && op < 900){
    pink();
  }
  
}
void Vermelho(){
  analogWrite(5, 255);
  analogWrite(6, 0);
  analogWrite(9, 0);
}

void Verde(){
  analogWrite(5, 0);
  analogWrite(6, 255);
  analogWrite(9, 0);
}

void Azul(){
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 255);
}

void gold(){
  analogWrite(5, 255);
  analogWrite(6, 215);
  analogWrite(9, 0);
}

void indigo(){
  analogWrite(5, 75);
  analogWrite(6, 0);
  analogWrite(9, 130);
}

void Amarelo(){
  analogWrite(5, 255);
  analogWrite(6, 255);
  analogWrite(9, 0);
}

void Ciano(){
  analogWrite(5, 0);
  analogWrite(6, 255);
  analogWrite(9, 255);
}

void pink(){
  analogWrite(5, 255);
  analogWrite(6, 192);
  analogWrite(9, 203);
}
