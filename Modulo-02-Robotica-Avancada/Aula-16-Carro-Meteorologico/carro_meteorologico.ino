#include <dht.h>  

#include <LiquidCrystal_I2C.h>
#define    dht_pin    2  

#define in1 4
#define in2 5
#define in3 6
#define in4 7
#define ENA 8
#define ENB 9

LiquidCrystal_I2C lcd(0x27,20,4);

dht   my_dht; 
float    temperatura;   
float    umidade;   
double timer = 0;

void setup() 
{
   pinMode(in1, OUTPUT);
   pinMode(in2, OUTPUT);
   pinMode(in3, OUTPUT);
   pinMode(in4, OUTPUT);
   pinMode(ENA, OUTPUT);
   pinMode(ENB, OUTPUT);
   Serial.begin(9600);  
   lcd.init();
   lcd.backlight();
   lcd.begin(16,2); 

}

void frente(){
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 digitalWrite(in3, LOW);
 digitalWrite(in4, HIGH);
}

void re(){
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 digitalWrite(in3, HIGH);
 digitalWrite(in4, LOW);
}

void esquerda(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void direita(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void loop() 
{
  if(millis() - timer >= 2000){
    
   my_dht.read11(dht_pin);

   temperatura = my_dht.temperature;
   umidade     = my_dht.humidity;

   Serial.print(temperatura);
   Serial.print(" ");
   Serial.println(umidade);

   lcd.print("Umid: ");
   lcd.print(umidade);
   lcd.setCursor(1,12);
  
   lcd.print("Temp: ");
   lcd.print(temperatura);
   lcd.setCursor(2,12);

   timer = millis();
   
  }
 analogWrite(ENA, 150);
 analogWrite(ENB, 150);
  
   frente();
   delay(3000);
   re();
   delay(3000);
   direita();
   delay(3000);
   esquerda();
   delay(3000);
}
