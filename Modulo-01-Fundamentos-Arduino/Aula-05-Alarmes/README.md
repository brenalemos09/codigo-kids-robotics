# Aula 05 — Alarmes

## Objetivo

Aprender a utilizar um sensor detector de chamas para desenvolver um sistema de alarme capaz de identificar a presença de fogo e emitir um alerta sonoro.

Nesta aula foram explorados conceitos de leitura de sensores analógicos, monitoramento em tempo real e acionamento de dispositivos de saída.

---

## Conteúdos estudados

- Sensores analógicos
- Sensor detector de chamas
- Monitoramento em tempo real
- Leitura analógica (`analogRead()`)
- Estruturas condicionais (`if`)
- Acionamento de buzzer
- Comunicação Serial

---

## Componentes utilizados

- Arduino Uno
- Sensor detector de chamas (Flame Sensor)
- Buzzer
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Alarme Contra Incêndios

Foi desenvolvido um sistema de alarme capaz de monitorar continuamente um sensor detector de chamas.

Quando o sensor identifica uma intensidade acima do limite configurado, o Arduino:

- exibe a mensagem **"FOGO!!!"** no Monitor Serial;
- aciona um buzzer para emitir um alerta sonoro.

Enquanto nenhuma chama é detectada, o sistema permanece em monitoramento, indicando que o alarme continua ativo.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-05-Alarmes/
├── README.md
└── Aula005.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores analógicos
- Leitura de valores utilizando `analogRead()`
- Desenvolvimento de sistemas de monitoramento
- Acionamento de alarmes sonoros
- Comunicação entre sensores e atuadores
- Tomada de decisão baseada em leitura de sensores
- Desenvolvimento de aplicações voltadas à segurança eletrônica

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
