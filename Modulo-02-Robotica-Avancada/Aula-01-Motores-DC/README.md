# Aula 01 — Motores DC

## Objetivo

Aprender a controlar a velocidade de um motor de corrente contínua (Motor DC) utilizando PWM (Pulse Width Modulation), compreendendo o funcionamento de drivers de potência e o controle proporcional de velocidade.

Nesta aula foi desenvolvido um sistema onde um potenciômetro controla, em tempo real, a velocidade de rotação de um motor DC.

---

## Conteúdos estudados

- Motores DC
- Controle PWM
- Ponte H (Driver de Motor)
- Entradas analógicas
- Função `analogRead()`
- Função `analogWrite()`
- Função `map()`
- Comunicação Serial

---

## Componentes utilizados

- Arduino Uno
- Motor DC
- Driver de Motor (Ponte H)
- Potenciômetro
- Protoboard
- Jumpers
- Fonte de alimentação
- Cabo USB

---

## Projeto desenvolvido

### Controle de Velocidade de Motor DC

Foi desenvolvido um controlador de velocidade para um motor DC.

O sistema realiza continuamente a leitura da posição de um potenciômetro e converte o valor analógico (0–1023) para um nível de PWM (0–255) utilizando a função `map()`.

Esse valor é aplicado ao driver do motor por meio da função `analogWrite()`, permitindo controlar suavemente a velocidade de rotação do motor.

Durante a execução, os valores de PWM são exibidos no Monitor Serial para facilitar o acompanhamento do funcionamento do sistema.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-01-Motores-DC/
├── README.md
└── Aula001.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Controle de motores DC utilizando PWM
- Utilização da função `map()`
- Conversão de sinais analógicos
- Controle proporcional de velocidade
- Integração entre potenciômetro e motor
- Comunicação Serial para monitoramento
- Utilização de drivers de motores (Ponte H)

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs móveis
- Esteiras industriais
- Ventiladores inteligentes
- Bombas de água
- Automação industrial
- Veículos autônomos
- Sistemas embarcados
- Internet das Coisas (IoT)

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
