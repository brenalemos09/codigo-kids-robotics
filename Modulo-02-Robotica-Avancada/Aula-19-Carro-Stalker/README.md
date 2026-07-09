# Aula 19 — Carro Stalker

## Objetivo

Aprender a utilizar um sensor infravermelho para desenvolver um robô móvel capaz de detectar a presença de um objeto e responder automaticamente ao estímulo, simulando um comportamento de perseguição.

Nesta aula foi desenvolvido um sistema simples em que o robô permanece monitorando o ambiente e inicia seu deslocamento quando um objeto é detectado pelo sensor.

---

## Conteúdos estudados

- Sensor Infravermelho (IR)
- Detecção de objetos
- Entradas digitais
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Estruturas condicionais (`if`)
- Sistemas embarcados reativos

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Sensor Infravermelho (IR)
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Carro Stalker

Foi desenvolvido um robô móvel capaz de detectar a presença de um objeto utilizando um sensor infravermelho.

O sistema realiza continuamente a leitura do sensor IR.

O funcionamento ocorre da seguinte forma:

- quando um objeto é detectado pelo sensor, o robô inicia seu deslocamento para frente;
- quando o objeto deixa de ser detectado, os motores são desligados e o robô permanece parado.

Esse comportamento simula um robô seguidor simples, capaz de reagir automaticamente à presença de um alvo.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-19-Carro-Stalker/
├── README.md
└── Aula019.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores infravermelhos
- Leitura de entradas digitais
- Controle de motores DC utilizando Ponte H
- Controle de velocidade utilizando PWM
- Desenvolvimento de sistemas embarcados reativos
- Integração entre sensores e atuadores
- Programação de robôs seguidores

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs seguidores
- Robôs de inspeção
- Plataformas robóticas
- Sistemas de monitoramento
- Automação industrial
- Robótica educacional
- Sistemas embarcados inteligentes

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
