# Aula 02 — Carro de Teste

## Objetivo

Aprender a controlar os movimentos de um robô móvel utilizando dois motores DC e uma Ponte H, implementando comandos básicos de navegação como avanço, ré, curva à esquerda e curva à direita.

Nesta aula foi desenvolvido um carro robótico capaz de executar automaticamente uma sequência de movimentos, demonstrando o controle independente de cada motor.

---

## Conteúdos estudados

- Motores DC
- Ponte H (Driver de Motores)
- Controle de direção
- Controle PWM
- Movimento diferencial
- Funções em C/C++
- Controle de velocidade
- Temporização com `delay()`

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Rodas
- Fonte de alimentação
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Primeiro Robô Móvel

Foi desenvolvido um robô móvel capaz de executar automaticamente uma sequência de movimentos.

Durante a execução, o robô realiza as seguintes ações:

1. Avança para frente.
2. Anda em marcha à ré.
3. Realiza uma curva à direita.
4. Realiza uma curva à esquerda.

O controle dos motores é realizado por meio de uma Ponte H, enquanto a velocidade é ajustada utilizando sinais PWM aplicados aos pinos de habilitação do driver.

Este projeto representa o primeiro contato com o controle de movimentação de robôs utilizando Arduino.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-02-Carro-de-Teste/
├── README.md
└── Aula002.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Controle de dois motores DC
- Utilização de uma Ponte H
- Controle de velocidade utilizando PWM
- Desenvolvimento de funções para movimentação
- Controle de direção de robôs móveis
- Organização de código para sistemas embarcados
- Programação de sequências automáticas de movimento

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs móveis
- Robôs seguidores de linha
- Veículos autônomos
- Plataformas robóticas
- Automação logística
- Robótica educacional
- Sistemas embarcados para controle de movimento

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
