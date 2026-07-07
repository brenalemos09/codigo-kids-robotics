# Aula 02 — Controle de LEDs

## Objetivo

Aprender o funcionamento das entradas e saídas digitais do Arduino por meio do acionamento de um LED utilizando um botão físico.

Nesta aula foram explorados conceitos fundamentais da eletrônica e da programação embarcada, incluindo leitura de entradas digitais, controle de saídas e manipulação de estados lógicos.

---

## Conteúdos estudados

- Entradas digitais
- Saídas digitais
- Botão (Push Button)
- LED
- Estrutura condicional (`if`)
- Variáveis booleanas
- Função `digitalRead()`
- Função `digitalWrite()`
- Função `pinMode()`
- Debounce utilizando `delay()`

---

## Componentes utilizados

- Arduino Uno
- Protoboard
- LED
- Botão (Push Button)
- Resistores
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Controle de LEDs

Foi desenvolvido um sistema onde um botão controla o estado de um LED.

Sempre que o botão é pressionado:

- se o LED estiver desligado, ele acende;
- se o LED estiver ligado, ele apaga.

O projeto utiliza uma variável booleana para armazenar o estado atual do LED e alterná-lo a cada acionamento do botão.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-02-Controle-de-LEDs/
├── README.md
└── Aula002.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Controle de entradas e saídas digitais
- Leitura de botões
- Acionamento de LEDs
- Manipulação de variáveis booleanas
- Utilização de estruturas condicionais
- Implementação de debounce simples
- Organização de projetos utilizando Arduino IDE

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
