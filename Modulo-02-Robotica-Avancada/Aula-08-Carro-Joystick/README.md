# Aula 08 — Carro Joystick

## Objetivo

Aprender a controlar um robô móvel utilizando um módulo Joystick analógico, permitindo comandar seus movimentos em tempo real por meio dos eixos X e Y, além de utilizar o botão integrado para interromper o movimento.

Nesta aula foi desenvolvido um sistema que interpreta as posições do joystick e converte essas informações em comandos de direção para um robô controlado por motores DC.

---

## Conteúdos estudados

- Joystick Analógico
- Entradas analógicas
- Entradas digitais
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Leitura dos eixos X e Y
- Controle de direção
- Sistemas embarcados interativos

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Módulo Joystick
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Controle do Robô por Joystick

Foi desenvolvido um robô móvel controlado por um joystick analógico.

O Arduino realiza continuamente a leitura dos eixos X e Y do joystick para determinar a direção do movimento.

Os comandos implementados foram:

| Ação no Joystick | Movimento |
|------------------|-----------|
| Eixo X para frente | Avançar |
| Eixo X para trás | Ré |
| Eixo Y para esquerda | Virar à esquerda |
| Eixo Y para direita | Virar à direita |
| Botão do joystick | Parar |

Os motores são controlados por uma Ponte H, enquanto a velocidade permanece configurada em potência máxima através do PWM.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-08-Carro-Joystick/
├── README.md
└── Aula008.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de joysticks analógicos
- Leitura de entradas analógicas com `analogRead()`
- Leitura de entradas digitais
- Controle de motores DC utilizando Ponte H
- Controle de direção de robôs móveis
- Integração entre dispositivos de entrada e atuadores
- Desenvolvimento de sistemas embarcados interativos

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs teleoperados
- Carrinhos robóticos
- Drones
- Veículos autônomos em modo manual
- Plataformas robóticas
- Simuladores
- Equipamentos de controle industrial

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
