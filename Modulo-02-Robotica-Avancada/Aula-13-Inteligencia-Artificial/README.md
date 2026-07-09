# Aula 13 — Inteligência Artificial

## Objetivo

Aplicar conceitos de percepção do ambiente utilizando um sensor ultrassônico e um servomotor, permitindo que um robô móvel detecte obstáculos e altere o posicionamento do sensor para ampliar sua capacidade de observação.

Nesta aula foi desenvolvido um sistema que simula um comportamento inteligente, no qual o robô identifica obstáculos próximos e movimenta automaticamente o sensor ultrassônico para analisar o ambiente.

---

## Conteúdos estudados

- Sensor Ultrassônico HC-SR04
- Servomotor
- Biblioteca `Servo`
- Biblioteca `Ultrasonic`
- Medição de distância
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Sistemas embarcados inteligentes

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Sensor Ultrassônico HC-SR04
- Servomotor
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Robô com Sensor Direcionável

Foi desenvolvido um robô móvel equipado com um sensor ultrassônico instalado sobre um servomotor.

Enquanto o robô se desloca para frente, o sensor mede continuamente a distância até possíveis obstáculos.

Quando um objeto é detectado a uma distância inferior ao limite configurado, o servomotor altera automaticamente o posicionamento do sensor ultrassônico, permitindo ampliar o campo de visão e preparar o robô para futuras decisões de navegação.

Embora a movimentação do robô permaneça simples, o projeto demonstra uma importante evolução na percepção do ambiente, simulando comportamentos utilizados em robôs inteligentes.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Biblioteca Servo
- Biblioteca Ultrasonic

---

## Estrutura dos arquivos

```text
Aula-13-Inteligencia-Artificial/
├── README.md
└── Aula013.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores ultrassônicos
- Controle de servomotores
- Medição de distância em tempo real
- Integração entre sensores e atuadores
- Desenvolvimento de sistemas embarcados reativos
- Ampliação do campo de percepção do robô
- Introdução a conceitos de robótica inteligente

---

## Dependências

Este projeto utiliza as bibliotecas:

- **Servo**
- **Ultrasonic**

Caso não estejam instaladas na Arduino IDE, será necessário adicioná-las antes da compilação do projeto.

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs autônomos
- Veículos inteligentes
- Sistemas de inspeção
- Robôs exploradores
- Navegação autônoma
- Sistemas embarcados inteligentes
- Plataformas robóticas com visão ampliada

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
