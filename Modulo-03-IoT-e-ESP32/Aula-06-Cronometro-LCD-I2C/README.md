# Aula 06 — Cronômetro com Display LCD I2C

## Objetivo

Desenvolver um cronômetro utilizando um display LCD 16x2 com comunicação I2C, exibindo a contagem do tempo em segundos e informando quando o contador é finalizado.

Nesta aula foi explorada a utilização de bibliotecas para comunicação I2C, controle de displays LCD e atualização dinâmica de informações na tela.

---

## Conteúdos estudados

- Comunicação I2C
- Utilização de display LCD 16x2
- Biblioteca `LiquidCrystal_I2C`
- Estruturas de repetição (`for`)
- Atualização dinâmica do display
- Manipulação do cursor do LCD
- Temporização com `delay()`
- Exibição de mensagens em tempo real

---

## Componentes utilizados

### Hardware

- ESP32
- Display LCD 16x2 com módulo I2C
- Cabo USB

### Software

- Arduino IDE

---

## Projeto desenvolvido

Foi desenvolvido um cronômetro simples que realiza uma contagem crescente de segundos.

Ao iniciar o programa, o display LCD é inicializado e a iluminação de fundo é ativada. Em seguida, um laço de repetição incrementa o valor do tempo, atualizando a tela a cada segundo.

Durante a execução são exibidas as informações:

- título do cronômetro;
- tempo transcorrido em segundos.

Ao término da contagem, o display é limpo e apresenta a mensagem indicando que o cronômetro foi finalizado.

> **Observação:** no código disponibilizado há um pequeno erro de digitação na variável utilizada no laço (`t` em vez de `temp`), impedindo a compilação exatamente como está. A documentação descreve o objetivo e a lógica implementada no projeto, sem alterar o código original.

---

## Tecnologias utilizadas

- ESP32
- Arduino IDE
- Linguagem C++
- Comunicação I2C
- Biblioteca LiquidCrystal_I2C

---

## Estrutura dos arquivos

```text
Aula-06-Cronometro-LCD-I2C/

├── README.md
└── programacaoESP.ino
```

### programacaoESP.ino

Implementa toda a lógica do cronômetro, incluindo:

- inicialização do display LCD;
- configuração da comunicação I2C;
- atualização do contador;
- exibição das mensagens;
- encerramento da contagem.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos sobre:

- utilização de displays LCD com interface I2C;
- redução da quantidade de conexões físicas utilizando barramento I2C;
- atualização dinâmica de informações em displays;
- controle da posição do cursor;
- temporização utilizando `delay()`;
- construção de cronômetros simples utilizando estruturas de repetição.

---

## Dependências

### Arduino

- `LiquidCrystal_I2C`

Não foram identificadas bibliotecas externas além da biblioteca utilizada para controle do display LCD.

---

## Aplicações práticas

Os conceitos desta aula podem ser aplicados em:

- cronômetros digitais;
- temporizadores industriais;
- painéis de monitoramento;
- interfaces para sistemas embarcados;
- automação residencial;
- projetos de IoT com exibição local de informações;
- equipamentos eletrônicos que necessitam apresentar tempo de operação.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
