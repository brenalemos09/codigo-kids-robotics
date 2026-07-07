# Aula 18 — Circuito Integrado

## Objetivo

Aprender a utilizar um circuito integrado de deslocamento de bits (Shift Register) para controlar um display de sete segmentos utilizando menos portas digitais do Arduino.

Nesta aula foi desenvolvido um contador digital capaz de incrementar e decrementar números através de botões, utilizando comunicação serial paralela com um registrador de deslocamento.

---

## Conteúdos estudados

- Circuito Integrado (Shift Register)
- Display de sete segmentos
- Registrador de deslocamento
- Função `shiftOut()`
- Controle por botões
- Debounce utilizando `millis()`
- Estrutura `switch-case`
- Vetores (Arrays)

---

## Componentes utilizados

- Arduino Uno
- Display de sete segmentos
- Shift Register (74HC595)
- 2 Botões (Incremento e Decremento)
- Resistores
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Contador Digital

Foi desenvolvido um contador digital utilizando um display de sete segmentos controlado por um circuito integrado 74HC595.

O sistema permite:

- incrementar a contagem utilizando um botão;
- decrementar a contagem utilizando outro botão;
- exibir continuamente os números de **0 a 9** no display.

Para otimizar o uso das portas do Arduino, o display é controlado por meio da função `shiftOut()`, responsável por enviar os dados ao registrador de deslocamento.

Além disso, foi implementado um sistema simples de debounce utilizando a função `millis()`, evitando múltiplas leituras causadas pelo acionamento dos botões.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-18-Circuito-Integrado/
├── README.md
└── Aula018.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização do circuito integrado 74HC595
- Controle de displays utilizando registradores de deslocamento
- Comunicação serial utilizando `shiftOut()`
- Organização de dados utilizando arrays
- Implementação de debounce com `millis()`
- Controle de displays de sete segmentos
- Desenvolvimento de interfaces eletrônicas mais eficientes

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Painéis eletrônicos
- Contadores industriais
- Equipamentos médicos
- Sistemas embarcados
- Automação industrial
- Interfaces homem-máquina (HMI)
- Projetos de IoT com expansão de portas digitais

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
