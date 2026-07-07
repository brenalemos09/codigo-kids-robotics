# Aula 19 — Funções

## Objetivo

Aprender a organizar o código utilizando funções, tornando os programas mais legíveis, reutilizáveis e fáceis de manter.

Nesta aula foi desenvolvido um seletor de cores para um LED RGB, onde cada cor é controlada por uma função específica.

---

## Conteúdos estudados

- Funções em C/C++
- Organização de código
- Reutilização de código
- LED RGB
- PWM (Pulse Width Modulation)
- Potenciômetro
- Entradas analógicas (`analogRead()`)
- Saídas PWM (`analogWrite()`)

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

### Seletor de Cores

Foi desenvolvido um sistema capaz de alterar automaticamente a cor de um LED RGB utilizando um potenciômetro.

O Arduino realiza continuamente a leitura da posição do potenciômetro e, de acordo com o intervalo identificado, chama uma função responsável por configurar uma cor específica no LED RGB.

Cada função representa uma cor diferente, tornando o código mais organizado e facilitando futuras modificações.

As cores implementadas foram:

- Vermelho
- Verde
- Azul
- Gold
- Indigo
- Amarelo
- Ciano
- Pink

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-19-Funcoes/
├── README.md
└── Aula019.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Organização de programas utilizando funções
- Modularização de código
- Reutilização de lógica de programação
- Controle de LEDs RGB utilizando PWM
- Leitura de potenciômetros
- Desenvolvimento de programas mais limpos e escaláveis
- Aplicação de boas práticas de programação embarcada

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Desenvolvimento de firmware
- Sistemas embarcados
- Automação residencial
- Interfaces homem-máquina (HMI)
- Dispositivos IoT
- Desenvolvimento de bibliotecas
- Projetos de software escaláveis

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
