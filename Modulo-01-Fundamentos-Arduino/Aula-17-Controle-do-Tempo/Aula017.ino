#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

#define botao_play 10
#define botao_stop 11

int estado_btnplay;
int estado_btnstop;

unsigned long tempo;
unsigned long tempo_play = 0;
unsigned long tempo_stop;
unsigned long tempo_segundo;

int controle = 1;

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(botao_play, INPUT_PULLUP);
  pinMode(botao_stop, INPUT_PULLUP);

  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Bem vindo!");
  lcd.setCursor(0, 1);
  lcd.print("Cronometro");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("PLAY p/ iniciar");
}

void loop() {
  estado_btnplay = digitalRead(botao_play);
  estado_btnstop = digitalRead(botao_stop);

  if ((estado_btnplay == LOW) && (controle < 2)) {
    tempo = millis();
    controle = 0;
  }

  if ((estado_btnplay == LOW) && (controle == 2)) {
    controle = 0;
  }

  if (controle == 0) {
    lcd.setCursor(0, 0);
    lcd.print("TEMPO (segundo)");
    lcd.setCursor(0, 1);
    lcd.print("PLAY!  ");

    tempo_play = millis() - tempo;
    tempo_segundo = tempo_play / 1000;

    if (tempo_segundo <= 9) {
      lcd.setCursor(12, 1);
      lcd.print("  ");
      lcd.print(tempo_segundo);
    }

    if ((tempo_segundo > 9) && (tempo_segundo <= 99)) {
      lcd.setCursor(12, 1);
      lcd.print("  ");
      lcd.print(tempo_segundo);
    }

    if ((tempo_segundo > 99) && (tempo_segundo <= 999)) {
      lcd.setCursor(12, 1);
      lcd.print("  ");
      lcd.print(tempo_segundo);
    }

    if ((tempo_segundo > 999) && (tempo_segundo <= 9999)) {
      lcd.setCursor(12, 1);
      lcd.print(tempo_segundo);
    }

    if (estado_btnstop == LOW) {
      lcd.setCursor(0, 0);
      lcd.print("TEMPO (FINAL )");
      lcd.setCursor(0, 1);
      lcd.print("STOP!    ");
      controle = 2;
    }
  }
}
