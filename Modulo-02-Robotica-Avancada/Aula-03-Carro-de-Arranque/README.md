# Aula 03 — Carro de Arranque

## Objetivo

Aprender a controlar o acionamento de um robô móvel utilizando um botão de partida, simulando o funcionamento de sistemas de arranque presentes em veículos e equipamentos automatizados.

Nesta aula foi desenvolvido um sistema onde o robô permanece parado até receber um comando de início por meio de um botão físico.

---

## Conteúdos estudados

- Motores DC
- Ponte H (Driver de Motores)
- Controle de partida
- Botão (Push Button)
- Entradas digitais
- Controle PWM
- Estruturas condicionais (`if`)
- Temporização com `delay()`

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Botão (Push Button)
- Fonte de alimentação
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Controle de Partida do Robô

Foi desenvolvido um sistema de partida para um robô móvel.

Inicialmente, o robô permanece completamente parado, aguardando o acionamento do botão de início.

Quando o botão é pressionado:

- os motores são ativados na velocidade máxima;
- o robô desloca-se para frente durante cinco segundos;
- após esse período, os motores são desligados automaticamente.

O projeto demonstra como utilizar entradas digitais para controlar o início e o término de um processo automatizado.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-03-Carro-de-Arranque/
├── README.md
└── Aula003.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Controle de motores DC utilizando Ponte H
- Acionamento de robôs por botão
- Leitura de entradas digitais
- Controle de velocidade utilizando PWM
- Desenvolvimento de rotinas de partida automática
- Aplicação de lógica condicional em sistemas embarcados
- Integração entre sensores de entrada e atuadores

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs móveis
- Sistemas de partida automática
- Equipamentos industriais
- Esteiras automatizadas
- Máquinas agrícolas
- Sistemas embarcados de controle
- Automação industrial

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
