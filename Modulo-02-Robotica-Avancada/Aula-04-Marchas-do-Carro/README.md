# Aula 04 — Marchas do Carro

## Objetivo

Aprender a controlar diferentes velocidades de um robô móvel utilizando PWM, simulando o funcionamento de um sistema de marchas semelhante ao utilizado em veículos automotores.

Nesta aula foi desenvolvido um sistema onde um botão inicia o movimento do robô e outro botão altera a velocidade de deslocamento por meio de diferentes níveis de potência aplicados aos motores.

---

## Conteúdos estudados

- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Controle de velocidade
- Simulação de marchas
- Botões (Push Button)
- Estrutura `switch-case`
- Estruturas condicionais (`if`)
- Controle de motores

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- 2 Botões (Start e Marcha)
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Sistema de Marchas

Foi desenvolvido um sistema capaz de controlar a velocidade de um robô móvel utilizando diferentes níveis de PWM.

O funcionamento ocorre da seguinte forma:

- o botão **Start** inicia ou interrompe o movimento do robô;
- o botão **Marcha** alterna entre seis níveis de velocidade;
- cada marcha corresponde a um valor específico de PWM aplicado aos motores.

As velocidades simulam o comportamento de um sistema de transmissão, permitindo observar a influência do PWM na velocidade dos motores DC.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-04-Marchas-do-Carro/
├── README.md
└── Aula004.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Controle de velocidade utilizando PWM
- Aplicação da estrutura `switch-case`
- Controle de motores DC por Ponte H
- Desenvolvimento de sistemas com múltiplos estados
- Integração entre botões e motores
- Simulação de transmissão por marchas
- Organização de código para robótica móvel

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs móveis
- Veículos autônomos
- Carrinhos robóticos
- Plataformas AGV (Automated Guided Vehicle)
- Automação industrial
- Robótica educacional
- Sistemas embarcados para controle de movimento

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
