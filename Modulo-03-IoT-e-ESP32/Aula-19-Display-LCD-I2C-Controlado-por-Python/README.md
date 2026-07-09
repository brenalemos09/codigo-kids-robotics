# Aula 19 — Display LCD I2C Controlado por Python

## Objetivo

Desenvolver uma aplicação integrada entre Python e um microcontrolador utilizando comunicação serial para exibir mensagens em um display LCD 16x2 com interface I2C.

Nesta aula foram explorados conceitos de comunicação serial, manipulação de strings em Python e integração entre aplicações desktop e sistemas embarcados.

---

## Conteúdos estudados

- Comunicação Serial (UART)
- Integração entre Python e Arduino/ESP8266
- Biblioteca PySerial
- Display LCD 16x2 com interface I2C
- Biblioteca LiquidCrystal_I2C
- Manipulação de Strings em Python
- Métodos `len()`, `upper()`, `lower()`, `replace()`
- Fatiamento de Strings (Slicing)
- Entrada de dados pelo terminal

---

## Componentes utilizados

### Hardware

- ESP8266/Arduino
- Display LCD 16x2 I2C
- Cabos jumper
- Cabo USB

### Software

- Arduino IDE
- Python 3
- Biblioteca PySerial

---

## Projeto desenvolvido

Foi desenvolvido um sistema que permite controlar um display LCD diretamente a partir de uma aplicação escrita em Python.

Ao iniciar o programa, uma mensagem de boas-vindas é enviada ao display. Em seguida, o usuário digita uma palavra ou frase no terminal e escolhe uma operação para modificar esse texto.

As operações disponíveis são:

- Contagem de caracteres (`len`);
- Conversão para letras maiúsculas (`upper`);
- Conversão para letras minúsculas (`lower`);
- Fatiamento da string (slicing);
- Substituição de palavras (`replace`).

Após cada operação, o resultado é enviado pela comunicação serial ao microcontrolador, que recebe a mensagem e a exibe no display LCD em tempo real.

O projeto demonstra como integrar processamento de texto em Python com dispositivos físicos controlados por um microcontrolador.

---

## Tecnologias utilizadas

- Arduino IDE
- Python 3
- Linguagem C++
- PySerial
- Comunicação Serial (UART)
- I2C
- LiquidCrystal_I2C

---

## Estrutura dos arquivos

```text
Aula-19-Display-LCD-I2C-Controlado-por-Python/

├── README.md
├── Arduino/
│   └── aula_23.ino
└── Python/
    └── aula_23.py
```

- **aula_23.ino:** recebe mensagens pela porta serial e as apresenta no display LCD utilizando a comunicação I2C.
- **aula_23.py:** realiza a comunicação serial com o microcontrolador, permite a manipulação de textos e envia os resultados ao display.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos sobre:

- comunicação serial entre Python e Arduino;
- utilização de displays LCD I2C;
- manipulação de strings em Python;
- integração entre software desktop e hardware embarcado;
- desenvolvimento de aplicações interativas;
- utilização de bibliotecas para comunicação com dispositivos externos.

---

## Dependências

### Python

- `pyserial`

Instalação:

```bash
pip install pyserial
```

### Arduino

- `Wire`
- `LiquidCrystal_I2C`

---

## Aplicações práticas

Os conceitos desta aula podem ser utilizados em:

- painéis de informação embarcados;
- interfaces homem-máquina (HMI);
- automação residencial;
- sistemas industriais;
- terminais inteligentes;
- dispositivos IoT com exibição local;
- equipamentos de monitoramento;
- prototipagem de sistemas embarcados.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
