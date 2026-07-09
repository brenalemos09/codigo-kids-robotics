# Aula 14 — Detectando Obstáculos

## Objetivo

Aprender a utilizar um sensor de obstáculos infravermelho para permitir que um robô móvel detecte objetos à sua frente e execute automaticamente uma manobra de desvio.

Nesta aula foi desenvolvido um sistema em que o robô monitora continuamente o ambiente e altera sua trajetória sempre que identifica um obstáculo.

---

## Conteúdos estudados

- Sensor de Obstáculos Infravermelho (IR)
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Entradas digitais
- Estruturas condicionais (`if`)
- Desenvolvimento de algoritmos de desvio de obstáculos
- Robótica autônoma

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Sensor Infravermelho para Obstáculos
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Sistema Automático de Desvio de Obstáculos

Foi desenvolvido um robô móvel capaz de detectar obstáculos utilizando um sensor infravermelho.

Durante o funcionamento, o Arduino monitora continuamente o estado do sensor.

Quando um obstáculo é detectado, o robô executa automaticamente uma sequência de ações:

1. Para imediatamente.
2. Dá marcha à ré.
3. Gira para alterar sua direção.
4. Retoma o movimento para frente.

Caso nenhum obstáculo seja encontrado, o robô continua seu deslocamento normalmente.

Esse comportamento simula um algoritmo básico de navegação autônoma utilizado em plataformas robóticas.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-14-Detectando-Obstaculos/
├── README.md
└── Aula014.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores infravermelhos
- Detecção automática de obstáculos
- Controle de motores DC utilizando Ponte H
- Desenvolvimento de algoritmos de navegação
- Programação de sequências automáticas de movimento
- Integração entre sensores e atuadores
- Desenvolvimento de robôs autônomos

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs autônomos
- Aspiradores robóticos
- AGVs (Automated Guided Vehicles)
- Robôs industriais
- Veículos inteligentes
- Sistemas embarcados
- Robótica educacional

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
