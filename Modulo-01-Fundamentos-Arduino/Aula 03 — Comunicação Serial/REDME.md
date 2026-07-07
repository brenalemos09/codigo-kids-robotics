# Aula 03 — Comunicação Serial

## Objetivo

Aprender a utilizar a Comunicação Serial para permitir a troca de informações entre o computador e o Arduino por meio do Monitor Serial da Arduino IDE.

Nesta aula foi desenvolvido um sistema onde comandos enviados pelo computador controlam diferentes LEDs conectados ao Arduino.

---

## Conteúdos estudados

- Comunicação Serial
- Monitor Serial
- Porta Serial
- Entrada de dados pelo computador
- Estruturas condicionais (`if`)
- Variáveis do tipo `char`
- Função `Serial.begin()`
- Função `Serial.available()`
- Função `Serial.read()`
- Função `Serial.println()`
- Controle de saídas digitais

---

## Componentes utilizados

- Arduino Uno
- Protoboard
- 4 LEDs
- Resistores
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Controle de LEDs via Monitor Serial

Foi desenvolvido um sistema onde o usuário envia comandos pelo Monitor Serial da Arduino IDE.

Cada número enviado ativa um LED diferente:

| Comando | Ação |
|---------|------|
| 0 | Acende o LED 1 |
| 1 | Acende o LED 2 |
| 2 | Acende o LED 3 |
| 3 | Acende o LED 4 |

Após receber o comando, o Arduino também envia uma confirmação de volta ao Monitor Serial, demonstrando a comunicação bidirecional entre o computador e a placa.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Comunicação Serial (UART)

---

## Estrutura dos arquivos

```text
Aula-03-Comunicacao-Serial/
├── README.md
└── Aula003.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Configuração da Comunicação Serial
- Utilização do Monitor Serial
- Envio e recebimento de dados
- Leitura de caracteres enviados pelo computador
- Controle de múltiplos LEDs
- Manipulação de variáveis do tipo `char`
- Desenvolvimento de sistemas interativos utilizando comunicação serial

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
