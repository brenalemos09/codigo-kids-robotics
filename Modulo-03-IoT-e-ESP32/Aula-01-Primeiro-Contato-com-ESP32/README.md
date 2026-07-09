# Aula 01 — Primeiro Contato com ESP32

## Objetivo

Compreender a integração entre software e hardware utilizando o Processing e o Arduino, desenvolvendo uma interface gráfica capaz de controlar dispositivos físicos em tempo real através da comunicação serial.

Nesta aula foi desenvolvido um painel gráfico que permite ligar e desligar LEDs diretamente pelo computador.

---

## Conteúdos estudados

- Processing
- Interface Gráfica (GUI)
- Comunicação Serial
- Integração entre computador e Arduino
- Controle de LEDs
- Eventos de mouse
- Biblioteca Arduino para Processing
- Desenvolvimento de aplicações desktop

---

## Componentes utilizados

- Arduino Uno
- 3 LEDs
- Resistores
- Protoboard
- Jumpers
- Cabo USB
- Computador

---

## Projeto desenvolvido

### Painel de Controle de LEDs

Foi desenvolvida uma aplicação gráfica utilizando a linguagem **Processing**, capaz de controlar LEDs conectados ao Arduino.

A interface apresenta três botões circulares representando os LEDs:

- Azul
- Amarelo
- Vermelho

Ao clicar sobre cada botão, a aplicação envia comandos ao Arduino por meio da biblioteca Arduino para Processing, alterando o estado do LED correspondente.

Além do acionamento físico dos LEDs, a interface também modifica as cores dos botões, oferecendo um retorno visual ao usuário.

O projeto demonstra uma integração entre uma aplicação desktop e um sistema embarcado em tempo real.

---

## Tecnologias utilizadas

- Processing
- Arduino IDE
- Linguagem Java (Processing)
- Linguagem C/C++
- Comunicação Serial

---

## Estrutura dos arquivos

```text
Aula-01-Primeiro-Contato-com-ESP32/
├── README.md
└── controle_leds.pde
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Desenvolvimento de interfaces gráficas utilizando Processing
- Comunicação Serial entre computador e Arduino
- Controle de hardware através de software
- Programação orientada a eventos
- Manipulação de interface gráfica
- Integração entre aplicações desktop e sistemas embarcados
- Desenvolvimento de aplicações interativas

---

## Dependências

Este projeto utiliza as bibliotecas:

- Processing Serial
- Arduino for Processing (Firmata)

É necessário instalar essas bibliotecas no Processing antes da execução do projeto.

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Interfaces Homem-Máquina (HMI)
- Sistemas Supervisórios
- Automação Industrial
- Painéis de Controle
- Monitoramento em Tempo Real
- Internet das Coisas (IoT)
- Sistemas Embarcados

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
