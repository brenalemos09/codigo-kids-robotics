# Aula 08 — Reagindo à Gravidade

## Objetivo

Aprender a utilizar um sensor de inclinação (Tilt Sensor) para detectar mudanças de posição, permitindo que o Arduino identifique quando um objeto está reto ou inclinado e responda com sinais visuais.

Nesta aula foram explorados conceitos de sensores digitais, tomada de decisão e monitoramento em tempo real.

---

## Conteúdos estudados

- Sensor de inclinação (Tilt Sensor)
- Entradas analógicas
- Monitoramento em tempo real
- Estruturas condicionais (`if`)
- Função `analogRead()`
- Controle de LEDs
- Comunicação Serial

---

## Componentes utilizados

- Arduino Uno
- Sensor de inclinação (Tilt Sensor)
- LED azul
- LED vermelho
- Resistores
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Detector de Inclinação

Foi desenvolvido um sistema capaz de identificar a posição do sensor de inclinação.

Quando o sensor permanece na posição reta:

- o LED azul é aceso;
- o Monitor Serial exibe a mensagem **"RETO!"**.

Quando o sensor detecta inclinação:

- o LED vermelho é aceso;
- o Monitor Serial exibe a mensagem **"INCLINADO!"**.

Esse tipo de aplicação é amplamente utilizado em sistemas de segurança, monitoramento de equipamentos e robótica.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-08-Reagindo-a-Gravidade/
├── README.md
└── Aula008.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores de inclinação
- Leitura de entradas analógicas
- Desenvolvimento de sistemas de monitoramento
- Controle de LEDs para indicação de estados
- Comunicação Serial para depuração
- Aplicação de lógica condicional em sistemas embarcados

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
