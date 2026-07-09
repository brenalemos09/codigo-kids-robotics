# Aula 18 — Controle Serial do Arduino com Python

## Objetivo

Desenvolver uma aplicação em Python capaz de controlar dispositivos conectados ao Arduino através da comunicação serial, permitindo o acionamento remoto de LEDs por comandos enviados via terminal.

Nesta aula foram explorados conceitos de comunicação serial entre Python e Arduino, integração entre software desktop e sistemas embarcados e controle bidirecional de dispositivos físicos.

---

## Conteúdos estudados

- Comunicação Serial (UART)
- Integração entre Python e Arduino
- Biblioteca PySerial
- Entrada de dados pelo terminal
- Envio de comandos pela porta serial
- Leitura de comandos no Arduino
- Controle de LEDs
- Leitura de botões
- Estruturas condicionais
- Desenvolvimento de aplicações embarcadas integradas

---

## Componentes utilizados

### Hardware

- ESP8266/Arduino
- 2 LEDs
- 2 Botões (Push Buttons)
- Resistores
- Protoboard
- Cabos jumper
- Cabo USB

### Software

- Arduino IDE
- Python 3
- Biblioteca PySerial

---

## Projeto desenvolvido

Foi desenvolvido um sistema de comunicação serial entre um programa em Python e um microcontrolador.

A aplicação Python estabelece conexão com a porta serial e permite ao usuário enviar comandos digitados no terminal.

Os comandos disponíveis são:

- **w1** → alterna o estado do LED 1;
- **w2** → alterna o estado do LED 2;
- **q** → encerra a aplicação.

No microcontrolador, o programa recebe os caracteres enviados pelo computador e altera o estado correspondente dos LEDs.

Além do controle remoto, o sistema também permite acionar os LEDs através de botões físicos conectados ao dispositivo, demonstrando uma integração entre comandos locais e comandos enviados pelo computador.

---

## Tecnologias utilizadas

- Arduino IDE
- Python 3
- Linguagem C++
- PySerial
- Comunicação Serial (UART)

---

## Estrutura dos arquivos

```text
Aula-18-Controle-Serial-Arduino-com-Python/

├── README.md
├── Arduino/
│   └── serial_read.ino
└── Python/
    └── code_aula_22.py
```

- **serial_read.ino:** realiza a leitura dos comandos recebidos pela porta serial e controla os LEDs, além de monitorar os botões físicos.
- **code_aula_22.py:** estabelece a comunicação serial utilizando a biblioteca PySerial e envia os comandos digitados pelo usuário ao microcontrolador.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos sobre:

- comunicação serial entre Python e Arduino;
- utilização da biblioteca PySerial;
- integração entre aplicações desktop e sistemas embarcados;
- envio e recepção de comandos em tempo real;
- controle remoto de dispositivos físicos;
- sincronização entre hardware e software.

---

## Dependências

### Python

- `pyserial`

Instalação:

```bash
pip install pyserial
```

### Arduino

- Biblioteca padrão do Arduino.

---

## Aplicações práticas

Os conceitos desta aula podem ser utilizados em:

- automação residencial;
- controle remoto de dispositivos eletrônicos;
- sistemas supervisórios;
- interfaces homem-máquina (HMI);
- monitoramento industrial;
- prototipagem de dispositivos IoT;
- integração entre aplicações desktop e sistemas embarcados;
- desenvolvimento de ferramentas de teste para hardware.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
