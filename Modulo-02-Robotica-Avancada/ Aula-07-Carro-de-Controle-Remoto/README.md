# Aula 07 — Carro de Controle Remoto

## Objetivo

Aprender a controlar um robô móvel utilizando um controle remoto infravermelho (IR), permitindo comandar seus movimentos sem contato físico.

Nesta aula foi desenvolvido um sistema capaz de interpretar comandos enviados por um controle remoto e convertê-los em movimentos do robô, simulando o funcionamento de veículos controlados remotamente.

---

## Conteúdos estudados

- Comunicação infravermelha (IR)
- Biblioteca `IRremote`
- Receptor IR
- Controle remoto
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Estrutura `switch-case`
- Desenvolvimento de robôs móveis

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Receptor Infravermelho (IR Receiver)
- Controle Remoto IR
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Carro Controlado por Infravermelho

Foi desenvolvido um robô móvel capaz de responder aos comandos enviados por um controle remoto infravermelho.

Os principais comandos implementados foram:

| Botão | Movimento |
|--------|-----------|
| ▲ (2) | Frente |
| ▼ (8) | Ré |
| ◄ (4) | Esquerda |
| ► (6) | Direita |
| ● (5) | Parar |

O Arduino interpreta os códigos enviados pelo controle remoto utilizando a biblioteca **IRremote** e aciona os motores através da Ponte H, permitindo controlar completamente a movimentação do robô.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Biblioteca IRremote

---

## Estrutura dos arquivos

```text
Aula-07-Carro-de-Controle-Remoto/
├── README.md
└── Aula007.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Comunicação por infravermelho (IR)
- Utilização da biblioteca `IRremote`
- Controle remoto de robôs móveis
- Interpretação de códigos enviados por controles remotos
- Controle de motores DC utilizando Ponte H
- Integração entre sensores e atuadores
- Desenvolvimento de sistemas embarcados sem fio

---

## Dependências

Este projeto utiliza a biblioteca:

- **IRremote**

Caso ela não esteja instalada na Arduino IDE, será necessário adicioná-la antes da compilação do projeto.

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs controlados remotamente
- Carrinhos robóticos
- Veículos autônomos com controle manual
- Automação residencial
- Robótica educacional
- Sistemas embarcados
- Equipamentos controlados por infravermelho

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
