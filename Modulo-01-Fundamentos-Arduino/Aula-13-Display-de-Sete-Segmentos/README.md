# Aula 13 — Display de Sete Segmentos

## Objetivo

Aprender o funcionamento de um display de sete segmentos e controlar a exibição de números utilizando o Arduino.

Nesta aula foi desenvolvido um sistema que utiliza um potenciômetro para selecionar e exibir os números de **0 a 9** em um display de sete segmentos.

---

## Conteúdos estudados

- Display de sete segmentos
- Entradas analógicas
- Potenciômetro
- Conversão Analógico-Digital (ADC)
- Função `map()`
- Estrutura `switch-case`
- Funções em C/C++
- Controle de saídas digitais

---

## Componentes utilizados

- Arduino Uno
- Display de sete segmentos
- Potenciômetro
- Resistores
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Contador Digital

Foi desenvolvido um contador digital utilizando um display de sete segmentos.

O Arduino realiza continuamente a leitura do potenciômetro e converte seu valor para um intervalo entre **0 e 9** utilizando a função `map()`.

Cada número é exibido no display através do acionamento individual dos segmentos, utilizando funções específicas para cada dígito (`acende0()` até `acende9()`).

A seleção do número é realizada por meio da estrutura `switch-case`, tornando o código mais organizado e de fácil manutenção.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-13-Display-de-Sete-Segmentos/
├── README.md
└── Aula013.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Funcionamento de displays de sete segmentos
- Controle individual dos segmentos do display
- Utilização da função `map()`
- Organização do código utilizando funções
- Aplicação da estrutura `switch-case`
- Conversão de sinais analógicos em informações visuais
- Desenvolvimento de interfaces eletrônicas simples

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Relógios digitais
- Painéis eletrônicos
- Contadores industriais
- Elevadores
- Medidores eletrônicos
- Equipamentos laboratoriais
- Interfaces homem-máquina (HMI)

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
