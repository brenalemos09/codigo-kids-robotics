# Aula 20 — Carro Bluetooth

## Objetivo

Aprender a controlar um robô móvel por meio da comunicação Bluetooth, permitindo enviar comandos remotamente a partir de um smartphone ou outro dispositivo compatível.

Nesta aula foi desenvolvido um sistema em que o Arduino recebe comandos pela comunicação serial proveniente de um módulo Bluetooth e os converte em movimentos do robô.

---

## Conteúdos estudados

- Comunicação Bluetooth
- Comunicação Serial (UART)
- Recepção de comandos
- Manipulação de Strings
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Sistemas embarcados sem fio

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Módulo Bluetooth (HC-05/HC-06)
- Smartphone
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Carro Controlado por Bluetooth

Foi desenvolvido um robô móvel capaz de receber comandos enviados por um dispositivo conectado via Bluetooth.

Os comandos são transmitidos pela comunicação serial e interpretados pelo Arduino para controlar a movimentação do robô.

Os comandos implementados são:

| Comando | Movimento |
|----------|-----------|
| `f` | Frente |
| `b` | Ré |
| `l` | Esquerda |
| `r` | Direita |
| Qualquer outro comando | Parar |

O sistema utiliza comunicação serial para receber os caracteres enviados pelo módulo Bluetooth e executa a ação correspondente em tempo real.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Comunicação Serial (UART)
- Bluetooth HC-05 / HC-06

---

## Estrutura dos arquivos

```text
Aula-20-Carro-Bluetooth/
├── README.md
└── Aula020.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Comunicação Bluetooth entre dispositivos
- Utilização da interface Serial (UART)
- Recepção e interpretação de comandos remotos
- Controle de motores DC utilizando Ponte H
- Desenvolvimento de sistemas embarcados sem fio
- Integração entre smartphone e Arduino
- Desenvolvimento de aplicações de robótica móvel

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs controlados por smartphone
- Veículos autônomos com controle manual
- Automação residencial
- Internet das Coisas (IoT)
- Sistemas embarcados sem fio
- Plataformas robóticas
- Equipamentos controlados remotamente

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
