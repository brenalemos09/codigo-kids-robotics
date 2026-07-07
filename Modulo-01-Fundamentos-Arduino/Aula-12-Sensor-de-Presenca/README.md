# Aula 12 — Sensor de Presença

## Objetivo

Aprender a utilizar um sensor de presença para detectar movimento no ambiente e acionar dispositivos de alerta, desenvolvendo um sistema simples de monitoramento utilizando o Arduino.

Nesta aula foram explorados conceitos de sensores, monitoramento em tempo real, acionamento de alarmes e sinalização visual.

---

## Conteúdos estudados

- Sensor de presença
- Entradas analógicas
- Leitura de sensores (`analogRead()`)
- Acionamento de buzzer
- Controle de LEDs
- Estruturas condicionais (`if`)
- Comunicação Serial
- Sistemas de monitoramento

---

## Componentes utilizados

- Arduino Uno
- Sensor de presença
- LED azul
- LED vermelho
- Buzzer
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Alarme de Movimento

Foi desenvolvido um sistema de monitoramento capaz de detectar a presença de pessoas ou objetos utilizando um sensor de presença.

Quando o sensor identifica movimento:

- o LED azul é acionado;
- o buzzer emite um alerta sonoro;
- o Monitor Serial exibe a mensagem **"Atenção! Presença detectada"**.

Na ausência de movimento:

- o LED vermelho permanece aceso;
- o buzzer permanece desligado;
- o Monitor Serial informa **"Monitorando o Ambiente"**.

O projeto simula o funcionamento básico de um sistema de segurança eletrônico.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-12-Sensor-de-Presenca/
├── README.md
└── Aula012.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores de presença
- Leitura de entradas analógicas
- Desenvolvimento de sistemas de monitoramento
- Acionamento de alarmes sonoros
- Controle de LEDs para indicação de estados
- Comunicação Serial para acompanhamento do sistema
- Integração entre sensores e atuadores

---

## Aplicações práticas

Os conceitos desta aula podem ser aplicados em:

- Sistemas de alarme residencial
- Automação predial
- Monitoramento de ambientes
- Controle de acesso
- Segurança patrimonial
- Dispositivos IoT para detecção de movimento

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
