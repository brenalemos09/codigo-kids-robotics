# Aula 10 — Luminosidade

## Objetivo

Aprender a utilizar um sensor de luminosidade (LDR) para detectar a intensidade da luz ambiente e controlar automaticamente dispositivos de saída utilizando o Arduino.

Nesta aula foi desenvolvido um sistema capaz de identificar a presença ou ausência de luz e sinalizar o estado por meio de LEDs e mensagens no Monitor Serial.

---

## Conteúdos estudados

- Sensor de luminosidade (LDR)
- Entradas analógicas
- Conversão Analógico-Digital (ADC)
- Monitoramento de luminosidade
- Estruturas condicionais (`if`)
- Comunicação Serial
- Controle de LEDs

---

## Componentes utilizados

- Arduino Uno
- Sensor LDR (Light Dependent Resistor)
- LED azul
- LED vermelho
- Resistores
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Sistema Automático de Iluminação

Foi desenvolvido um sistema que monitora continuamente a intensidade da luz ambiente utilizando um sensor LDR.

De acordo com o valor lido pelo sensor:

- quando há luminosidade suficiente, o LED azul é acionado e o Monitor Serial informa **"Luz detectada"**;
- quando a luminosidade é baixa, o LED vermelho é acionado e o Monitor Serial informa **"Luz não detectada"**.

Esse tipo de solução é amplamente utilizado em sistemas automáticos de iluminação e automação residencial.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-10-Luminosidade/
├── README.md
└── Aula010.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores LDR
- Leitura de entradas analógicas com `analogRead()`
- Desenvolvimento de sistemas de monitoramento de luminosidade
- Controle automático de dispositivos de saída
- Comunicação Serial para monitoramento do sistema
- Aplicação de lógica condicional em sistemas embarcados

---

## Aplicações práticas

Os conceitos desta aula podem ser utilizados em:

- Iluminação automática residencial
- Iluminação pública inteligente
- Agricultura de precisão
- Automação predial
- Sistemas de economia de energia
- Dispositivos IoT para monitoramento ambiental

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
