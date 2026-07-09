# Aula 15 — Off Road

## Objetivo

Aprender a utilizar um sensor de inclinação para detectar mudanças na posição do robô e controlar automaticamente sua movimentação em terrenos inclinados.

Nesta aula foi desenvolvido um sistema capaz de identificar a inclinação do robô e acionar os motores somente quando uma determinada condição é detectada.

---

## Conteúdos estudados

- Sensor de Inclinação (Tilt Switch)
- Entradas digitais
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Comunicação Serial
- Estruturas condicionais (`if`)
- Robótica móvel

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Sensor de Inclinação (Tilt Switch)
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Carro Off Road

Foi desenvolvido um robô móvel capaz de detectar alterações na inclinação do terreno utilizando um sensor de inclinação.

O Arduino monitora continuamente o estado do sensor.

Quando a inclinação é detectada:

- os motores são acionados em velocidade máxima;
- o robô inicia seu deslocamento automaticamente.

Quando o sensor indica ausência de inclinação:

- os motores são desligados;
- o robô permanece parado.

O Monitor Serial é utilizado para acompanhar em tempo real o estado do sensor durante os testes.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-15-Off-Road/
├── README.md
└── Aula015.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores de inclinação
- Leitura de entradas digitais
- Controle de motores DC utilizando Ponte H
- Controle PWM
- Integração entre sensores e atuadores
- Desenvolvimento de sistemas embarcados reativos
- Monitoramento de sensores utilizando Comunicação Serial

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs para terrenos irregulares
- Veículos off-road autônomos
- Robôs exploradores
- Sistemas de monitoramento de inclinação
- Equipamentos industriais
- Robótica móvel
- Sistemas embarcados inteligentes

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
