# Aula 17 — Carro Magnético

## Objetivo

Aprender a utilizar um sensor magnético para controlar automaticamente o deslocamento de um robô móvel, permitindo que ele reaja à presença de um campo magnético.

Nesta aula foi desenvolvido um sistema onde um sensor magnético detecta a aproximação de um ímã e controla o acionamento dos motores do robô.

---

## Conteúdos estudados

- Sensor Magnético (Hall Effect / Reed Switch)
- Entradas digitais
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Estruturas condicionais (`if`)
- Automação baseada em sensores
- Robótica móvel

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Sensor Magnético
- Ímã
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Carro Magnético

Foi desenvolvido um robô móvel capaz de responder à presença de um campo magnético.

O Arduino realiza continuamente a leitura do sensor magnético.

O funcionamento ocorre da seguinte forma:

- quando um campo magnético é detectado, o robô inicia seu deslocamento para frente;
- quando o campo magnético deixa de ser detectado, os motores são desligados e o robô permanece parado.

Esse projeto demonstra como sensores magnéticos podem ser utilizados como dispositivos de acionamento sem contato físico, aumentando a confiabilidade de sistemas embarcados.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-17-Carro-Magnetico/
├── README.md
└── Aula017.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores magnéticos
- Leitura de entradas digitais
- Controle de motores DC utilizando Ponte H
- Desenvolvimento de sistemas embarcados reativos
- Integração entre sensores e atuadores
- Automação baseada em eventos
- Aplicação de sensores sem contato

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Sistemas de segurança
- Sensores de abertura de portas
- Controle de posição
- Robôs móveis
- Automação industrial
- Equipamentos inteligentes
- Sistemas embarcados

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
