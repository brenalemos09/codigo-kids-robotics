# Aula 17 — Controle do Tempo

## Objetivo

Aprender a utilizar a função `millis()` para medir intervalos de tempo sem depender exclusivamente da função `delay()`, desenvolvendo um cronômetro digital com interface em display LCD.

Nesta aula foram explorados conceitos fundamentais de temporização, interfaces homem-máquina (HMI) e controle por botões.

---

## Conteúdos estudados

- Temporização com `millis()`
- Display LCD I2C
- Biblioteca `LiquidCrystal_I2C`
- Botões (Push Button)
- Contagem de tempo
- Variáveis do tipo `unsigned long`
- Interface homem-máquina (HMI)
- Estruturas condicionais (`if`)

---

## Componentes utilizados

- Arduino Uno
- Display LCD 16x2 com interface I2C
- 2 Botões (Play e Stop)
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Cronômetro Digital

Foi desenvolvido um cronômetro digital utilizando um display LCD e dois botões.

O sistema funciona da seguinte forma:

- o botão **PLAY** inicia a contagem do tempo;
- o display LCD exibe continuamente o tempo decorrido em segundos;
- o botão **STOP** interrompe a contagem e mantém o tempo final exibido no display.

Toda a contagem é realizada utilizando a função `millis()`, permitindo medir o tempo decorrido desde o início da execução sem utilizar atrasos bloqueantes para a contagem.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Biblioteca LiquidCrystal_I2C

---

## Estrutura dos arquivos

```text
Aula-17-Controle-do-Tempo/
├── README.md
└── Aula017.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização da função `millis()`
- Manipulação de variáveis `unsigned long`
- Desenvolvimento de cronômetros digitais
- Criação de interfaces utilizando display LCD
- Controle do sistema por botões
- Desenvolvimento de aplicações embarcadas baseadas em eventos
- Organização da lógica de temporização

---

## Dependências

Este projeto utiliza a biblioteca:

- **LiquidCrystal_I2C**

Caso ela não esteja instalada na Arduino IDE, será necessário adicioná-la antes da compilação do projeto.

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Cronômetros digitais
- Temporizadores industriais
- Equipamentos laboratoriais
- Sistemas embarcados em tempo real
- Automação industrial
- Dispositivos IoT
- Interfaces homem-máquina (HMI)

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
