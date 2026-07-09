# Aula 12 — Sensor de Estacionamento

## Objetivo

Aprender a utilizar um sensor ultrassônico para medir distâncias e desenvolver um sistema capaz de realizar uma manobra automática de estacionamento em um robô móvel.

Nesta aula foi desenvolvido um robô que identifica um espaço disponível e executa uma sequência de movimentos para simular uma baliza automática.

---

## Conteúdos estudados

- Sensor Ultrassônico HC-SR04
- Medição de distância
- Biblioteca `Ultrasonic`
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Temporização com `delay()`
- Sequenciamento de movimentos
- Automação de manobras

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Sensor Ultrassônico HC-SR04
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Sistema de Estacionamento Automático

Foi desenvolvido um robô capaz de realizar uma simulação de estacionamento automático.

O sensor ultrassônico monitora continuamente a distância entre o robô e os obstáculos ao seu redor.

Quando o sistema identifica um espaço suficiente para estacionar, o Arduino executa automaticamente uma sequência de movimentos previamente programada:

1. Avança.
2. Vira à esquerda.
3. Realiza marcha à ré.
4. Vira à direita.
5. Avança para alinhar o veículo.
6. Finaliza a manobra parando completamente.

Essa sequência simula o funcionamento básico de assistentes automáticos de estacionamento presentes em veículos modernos.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Biblioteca Ultrasonic

---

## Estrutura dos arquivos

```text
Aula-12-Sensor-de-Estacionamento/
├── README.md
└── Aula012.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores ultrassônicos
- Medição de distância em tempo real
- Controle de motores DC utilizando Ponte H
- Desenvolvimento de algoritmos sequenciais
- Programação de manobras automáticas
- Integração entre sensores e atuadores
- Desenvolvimento de sistemas embarcados autônomos

---

## Dependências

Este projeto utiliza a biblioteca:

- **Ultrasonic**

Caso ela não esteja instalada na Arduino IDE, será necessário adicioná-la antes da compilação do projeto.

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Assistentes de estacionamento
- Veículos autônomos
- Sistemas ADAS (Advanced Driver Assistance Systems)
- Robôs móveis
- AGVs (Automated Guided Vehicles)
- Robótica industrial
- Sistemas embarcados inteligentes

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
