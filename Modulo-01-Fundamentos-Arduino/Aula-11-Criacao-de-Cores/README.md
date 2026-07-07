# Aula 11 — Criação de Cores

## Objetivo

Aprender a controlar um LED RGB utilizando sinais PWM, permitindo gerar diferentes cores a partir da combinação das intensidades dos LEDs vermelho, verde e azul.

Nesta aula foi desenvolvido um controlador de cores onde um potenciômetro seleciona diferentes combinações de cores automaticamente.

---

## Conteúdos estudados

- LED RGB
- PWM (Pulse Width Modulation)
- Saídas analógicas (`analogWrite()`)
- Entradas analógicas (`analogRead()`)
- Potenciômetro
- Mistura de cores RGB
- Controle de intensidade luminosa

---

## Componentes utilizados

- Arduino Uno
- LED RGB
- Potenciômetro
- Resistores
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Controlador RGB

Foi desenvolvido um sistema que utiliza um potenciômetro para alterar automaticamente as cores emitidas por um LED RGB.

O Arduino realiza a leitura contínua da posição do potenciômetro e, de acordo com o intervalo de valores identificado, ajusta a intensidade dos canais vermelho, verde e azul utilizando PWM (`analogWrite()`).

Com isso, diferentes combinações de cores são produzidas, demonstrando o funcionamento da mistura aditiva de cores utilizada em dispositivos eletrônicos.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-11-Criacao-de-Cores/
├── README.md
└── Aula011.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Controle de LEDs RGB
- Utilização de PWM para controle de intensidade
- Leitura de potenciômetros utilizando `analogRead()`
- Manipulação de saídas PWM com `analogWrite()`
- Mistura aditiva de cores RGB
- Desenvolvimento de interfaces visuais utilizando hardware

---

## Aplicações práticas

Os conceitos desta aula são amplamente utilizados em:

- Iluminação inteligente
- Automação residencial
- Interfaces homem-máquina (HMI)
- Dispositivos IoT
- Sistemas de sinalização
- Efeitos visuais em robótica

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
