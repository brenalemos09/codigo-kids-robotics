# Aula 04 — RTC

## Objetivo

Aprender a utilizar um módulo RTC (Real Time Clock) para manter data e hora em tempo real, integrando o Arduino a uma interface gráfica desenvolvida em Processing.

Nesta aula foi desenvolvido um sistema capaz de obter informações de data e horário a partir do módulo RTC e apresentá-las em tempo real em uma aplicação desktop.

---

## Conteúdos estudados

- RTC (Real Time Clock)
- Módulo DS1307 / DS3231
- Comunicação I²C
- Biblioteca RTClib
- Comunicação Serial
- Processing
- Interface Gráfica (GUI)
- Data e Hora em Tempo Real

---

## Componentes utilizados

- Arduino Uno
- Módulo RTC
- Protoboard
- Jumpers
- Cabo USB
- Computador

---

## Projeto desenvolvido

### Relógio em Tempo Real

Foi desenvolvido um sistema capaz de obter informações de data e hora diretamente de um módulo RTC conectado ao Arduino.

O Arduino realiza a leitura contínua do relógio em tempo real e envia essas informações ao computador através da comunicação serial.

Uma aplicação desenvolvida em Processing recebe os dados e os apresenta em uma interface gráfica, permitindo acompanhar em tempo real:

- Hora
- Minutos
- Segundos
- Data

O projeto demonstra como integrar dispositivos de hardware responsáveis pela marcação precisa do tempo com aplicações gráficas executadas no computador.

---

## Tecnologias utilizadas

- Arduino IDE
- Processing
- Linguagem C/C++
- Linguagem Java (Processing)
- Comunicação Serial
- Comunicação I²C

---

## Estrutura dos arquivos

```text
Aula-04-RTC/
├── README.md
├── projeto_aula_rtc.ino
└── projeto_aula_rtc_2.pde
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de módulos RTC
- Comunicação I²C
- Manipulação de data e hora
- Comunicação Serial
- Desenvolvimento de interfaces gráficas utilizando Processing
- Integração entre hardware e software
- Desenvolvimento de aplicações de monitoramento em tempo real

---

## Dependências

Este projeto utiliza as bibliotecas:

- RTClib
- Wire
- Processing Serial

Caso não estejam instaladas, será necessário adicioná-las antes da compilação e execução do projeto.

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Relógios inteligentes
- Sistemas de controle de ponto
- Automação residencial
- Data loggers
- Monitoramento industrial
- Internet das Coisas (IoT)
- Sistemas embarcados
- Sistemas supervisórios

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
