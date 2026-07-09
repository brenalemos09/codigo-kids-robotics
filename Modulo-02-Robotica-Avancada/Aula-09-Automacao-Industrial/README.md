# Aula 09 — Automação Industrial

## Objetivo

Aprender a utilizar sensores infravermelhos para desenvolver um sistema de navegação automática, aplicando conceitos utilizados em automação industrial e robótica móvel.

Nesta aula foi desenvolvido um robô capaz de interpretar informações de múltiplos sensores e tomar decisões automaticamente para controlar sua direção de deslocamento.

---

## Conteúdos estudados

- Sensores infravermelhos (IR)
- Automação Industrial
- Robótica móvel
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Leitura de múltiplos sensores
- Tomada de decisão
- Estruturas condicionais (`if`)

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- 3 Sensores Infravermelhos (IR)
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Sistema de Navegação Automática

Foi desenvolvido um sistema capaz de controlar automaticamente o deslocamento de um robô utilizando três sensores infravermelhos.

Durante a execução, o Arduino realiza continuamente a leitura dos sensores e decide qual movimento executar:

- seguir em frente;
- virar à esquerda;
- virar à direita;
- parar o robô.

As decisões são tomadas de acordo com a combinação dos sinais recebidos pelos sensores, simulando a lógica utilizada em sistemas automatizados presentes na indústria.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-09-Automacao-Industrial/
├── README.md
└── Aula009.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Integração de múltiplos sensores infravermelhos
- Desenvolvimento de lógica para tomada de decisão
- Controle de motores DC utilizando Ponte H
- Controle de direção em robôs móveis
- Automação baseada em sensores
- Programação de sistemas embarcados reativos
- Desenvolvimento de aplicações de automação industrial

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Linhas de produção automatizadas
- Robôs seguidores de trajetória
- AGVs (Automated Guided Vehicles)
- Robôs industriais
- Centros logísticos
- Automação industrial
- Sistemas embarcados inteligentes

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
