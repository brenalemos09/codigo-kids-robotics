# Aula 07 — Entradas e Saídas Analógicas

## Objetivo

Aprender a utilizar as entradas analógicas do Arduino para controlar a posição de um servomotor em tempo real, compreendendo a conversão de sinais analógicos em valores utilizáveis pela programação.

Nesta aula foi desenvolvido um sistema que permite controlar o ângulo de um servomotor por meio de um potenciômetro.

---

## Conteúdos estudados

- Entradas analógicas
- Conversão Analógico-Digital (ADC)
- Potenciômetro
- Servomotores
- Biblioteca `Servo.h`
- Função `analogRead()`
- Função `map()`
- Comunicação Serial
- Controle de posição angular

---

## Componentes utilizados

- Arduino Uno
- Servomotor
- Potenciômetro
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Controle de Cancela

Foi desenvolvido um sistema onde a posição de um servomotor é controlada por um potenciômetro.

O Arduino realiza continuamente a leitura da entrada analógica, converte os valores de **0 a 1023** para um intervalo de **0° a 180°** utilizando a função `map()` e posiciona o servomotor de acordo com o valor obtido.

Além disso, o ângulo calculado é exibido no Monitor Serial para acompanhamento em tempo real.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Biblioteca Servo.h

---

## Estrutura dos arquivos

```text
Aula-07-Entradas-e-Saidas-Analogicas/
├── README.md
└── Aula007.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Leitura de entradas analógicas
- Conversão de valores utilizando a função `map()`
- Controle preciso de servomotores
- Integração entre sensores e atuadores
- Monitoramento utilizando o Monitor Serial
- Desenvolvimento de aplicações com controle proporcional

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
