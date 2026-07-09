# Aula 06 — Carro de Energia Solar

## Objetivo

Aprender a utilizar um sensor de luminosidade (LDR) para controlar automaticamente o funcionamento de um robô móvel, simulando o comportamento de um veículo alimentado por energia solar.

Nesta aula foi desenvolvido um sistema onde o robô permanece em funcionamento apenas quando há luminosidade suficiente, utilizando a intensidade da luz como condição para movimentação.

---

## Conteúdos estudados

- Sensor de luminosidade (LDR)
- Entradas analógicas
- Leitura de sensores (`analogRead()`)
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Estruturas condicionais (`if`)
- Automação baseada em sensores

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Sensor LDR
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Carro de Energia Solar

Foi desenvolvido um robô móvel que utiliza um sensor LDR para detectar a intensidade da luz ambiente.

O Arduino realiza continuamente a leitura do sensor e toma decisões automaticamente:

- quando a luminosidade está acima do limite configurado, o robô permanece em movimento;
- quando a luminosidade é insuficiente, os motores são desligados e o robô permanece parado.

Embora o projeto utilize um sensor LDR em vez de um painel solar real, ele simula o comportamento de um veículo cujo funcionamento depende da disponibilidade de energia proveniente da luz.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-06-Carro-de-Energia-Solar/
├── README.md
└── Aula006.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores de luminosidade
- Leitura de entradas analógicas
- Controle automático de motores DC
- Integração entre sensores e atuadores
- Desenvolvimento de sistemas reativos ao ambiente
- Aplicação de lógica condicional em robótica
- Automação baseada em condições ambientais

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs autônomos
- Agricultura inteligente
- Sistemas de energia renovável
- Veículos solares
- Automação residencial
- Monitoramento ambiental
- Dispositivos IoT alimentados por energia solar

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
