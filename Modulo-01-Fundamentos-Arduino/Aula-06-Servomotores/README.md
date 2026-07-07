# Aula 06 — Servomotores

## Objetivo

Aprender a controlar um servomotor utilizando a biblioteca `Servo.h`, integrando entradas digitais e atuadores para simular o funcionamento de uma cancela automática.

Nesta aula foram explorados conceitos de controle de posição angular, utilização de bibliotecas e integração entre sensores e atuadores.

---

## Conteúdos estudados

- Servomotores
- Biblioteca `Servo.h`
- Entradas digitais
- Botão (Push Button)
- Controle de posição angular
- Acionamento de LEDs
- Estruturas condicionais (`if`)
- Função `digitalRead()`
- Função `digitalWrite()`

---

## Componentes utilizados

- Arduino Uno
- Servomotor
- Botão (Push Button)
- 2 LEDs
- Resistores
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Cancela Automática

Foi desenvolvido um sistema que simula o funcionamento de uma cancela automática.

Quando o botão está em um estado, o servomotor permanece na posição de **90°**, indicando a cancela aberta, enquanto o LED azul permanece aceso.

Ao alterar o estado do botão, o servomotor gira para **180°**, simulando o fechamento da cancela, acendendo o LED vermelho para indicar que a passagem está bloqueada.

O projeto demonstra a integração entre dispositivos de entrada, atuadores e indicadores visuais.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Biblioteca Servo.h

---

## Estrutura dos arquivos

```text
Aula-06-Servomotores/
├── README.md
└── Aula006.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização da biblioteca `Servo.h`
- Controle de posição de servomotores
- Integração entre botões e atuadores
- Controle de LEDs para indicação de estados
- Desenvolvimento de sistemas automatizados
- Aplicação de lógica condicional em projetos embarcados

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
