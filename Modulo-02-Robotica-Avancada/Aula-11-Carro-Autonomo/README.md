# Aula 11 — Carro Autônomo

## Objetivo

Aprender a utilizar um sensor ultrassônico para permitir que um robô móvel detecte obstáculos e tome decisões automaticamente, tornando seu deslocamento autônomo.

Nesta aula foi desenvolvido um robô capaz de medir continuamente a distância até obstáculos e alterar sua direção quando um objeto é detectado à sua frente.

---

## Conteúdos estudados

- Sensor Ultrassônico
- Medição de distância
- Biblioteca `Ultrasonic`
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Estruturas condicionais (`if`)
- Estruturas de repetição (`while`)
- Robótica autônoma

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

### Carro Autônomo

Foi desenvolvido um robô móvel capaz de navegar de forma autônoma utilizando um sensor ultrassônico.

O sistema mede continuamente a distância entre o robô e os obstáculos posicionados à sua frente.

O funcionamento ocorre da seguinte forma:

- quando não há obstáculos próximos (distância superior a 15 cm), o robô segue em frente;
- ao detectar um obstáculo a menos de 15 cm, o robô altera automaticamente sua direção até encontrar um caminho livre.

Toda a tomada de decisão ocorre em tempo real, utilizando as informações fornecidas pelo sensor ultrassônico.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Biblioteca Ultrasonic

---

## Estrutura dos arquivos

```text
Aula-11-Carro-Autonomo/
├── README.md
└── Aula011.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores ultrassônicos
- Medição de distância em tempo real
- Controle automático de robôs móveis
- Desenvolvimento de algoritmos de navegação
- Integração entre sensores e motores
- Tomada de decisão baseada em distância
- Programação de sistemas embarcados autônomos

---

## Dependências

Este projeto utiliza a biblioteca:

- **Ultrasonic**

Caso ela não esteja instalada na Arduino IDE, será necessário adicioná-la antes da compilação do projeto.

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Veículos autônomos
- Robôs móveis
- Robôs aspiradores
- AGVs (Automated Guided Vehicles)
- Robótica industrial
- Sistemas de prevenção de colisões
- Navegação autônoma
- Sistemas embarcados inteligentes

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
