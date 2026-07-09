# Aula 02 — RFID

## Objetivo

Aprender a utilizar a tecnologia RFID (Radio Frequency Identification) para identificar cartões ou tags eletrônicas e integrá-la a uma interface gráfica desenvolvida em Processing.

Nesta aula foi desenvolvido um sistema de controle de acesso capaz de identificar uma tag RFID, enviar os dados ao computador através da comunicação serial e exibir as informações em uma aplicação gráfica.

---

## Conteúdos estudados

- RFID
- Leitor RFID RC522
- Comunicação SPI
- Comunicação Serial
- Processing
- Interface Gráfica (GUI)
- Integração entre Hardware e Software
- Identificação eletrônica

---

## Componentes utilizados

- Arduino Uno
- Módulo RFID RC522
- Cartão RFID / Tag RFID
- Protoboard
- Jumpers
- Cabo USB
- Computador

---

## Projeto desenvolvido

### Sistema de Controle de Acesso com RFID

Foi desenvolvido um sistema capaz de identificar cartões RFID utilizando o módulo RC522.

Quando uma tag é aproximada do leitor:

- o Arduino realiza a leitura do identificador único (UID);
- o UID é enviado ao computador através da comunicação serial;
- uma aplicação desenvolvida em Processing recebe essas informações e as apresenta em uma interface gráfica.

O projeto demonstra como integrar dispositivos físicos e aplicações desktop para implementar sistemas básicos de autenticação e controle de acesso.

---

## Tecnologias utilizadas

- Arduino IDE
- Processing
- Linguagem C/C++
- Linguagem Java (Processing)
- Comunicação SPI
- Comunicação Serial

---

## Estrutura dos arquivos

```text
Aula-02-RFID/
├── README.md
├── rfid_arduino.ino
└── rfid_processing.pde
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização do módulo RFID RC522
- Comunicação SPI
- Leitura de tags RFID
- Comunicação Serial entre Arduino e computador
- Desenvolvimento de interfaces gráficas utilizando Processing
- Integração entre hardware e software
- Desenvolvimento de sistemas de autenticação

---

## Dependências

Este projeto utiliza as bibliotecas:

- MFRC522
- SPI
- Processing Serial

É necessário instalar essas bibliotecas antes da compilação e execução do projeto.

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Controle de acesso
- Fechaduras eletrônicas
- Controle de presença
- Identificação de usuários
- Sistemas de autenticação
- Automação residencial
- Internet das Coisas (IoT)
- Sistemas embarcados

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
