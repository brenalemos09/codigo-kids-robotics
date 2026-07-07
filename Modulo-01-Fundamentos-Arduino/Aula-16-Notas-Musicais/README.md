# Aula 16 — Notas Musicais

## Objetivo

Aprender a gerar notas musicais utilizando um buzzer e botões, desenvolvendo um pequeno piano eletrônico com o Arduino.

Nesta aula foram explorados conceitos de geração de frequências sonoras, leitura de entradas digitais e interação entre o usuário e o hardware.

---

## Conteúdos estudados

- Buzzer
- Geração de frequências sonoras
- Notas musicais
- Botões (Push Button)
- Entradas digitais
- Controle de LEDs
- Estruturas condicionais (`if`)
- Temporização com `delayMicroseconds()`

---

## Componentes utilizados

- Arduino Uno
- Buzzer
- 3 Botões (Push Button)
- 3 LEDs
- Resistores
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Piano Eletrônico

Foi desenvolvido um piano eletrônico simples utilizando três botões.

Cada botão representa uma nota musical diferente:

| Botão | Frequência aproximada | LED |
|-------|-----------------------|-----|
| Botão A | 264 Hz | LED 1 |
| Botão B | 297 Hz | LED 2 |
| Botão C | 330 Hz | LED 3 |

Ao pressionar um botão, o Arduino gera a frequência correspondente no buzzer enquanto acende o LED associado, proporcionando um retorno visual e sonoro ao usuário.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-16-Notas-Musicais/
├── README.md
└── Aula016.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Geração de notas musicais utilizando um buzzer
- Leitura de múltiplas entradas digitais
- Controle simultâneo de LEDs e sons
- Desenvolvimento de interfaces interativas
- Utilização de temporização em microssegundos
- Aplicação de lógica condicional em sistemas embarcados

---

## Aplicações práticas

Os conceitos desta aula podem ser utilizados em:

- Instrumentos musicais eletrônicos
- Interfaces sonoras
- Sistemas embarcados interativos
- Robótica educacional
- Jogos eletrônicos
- Dispositivos de feedback sonoro

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
