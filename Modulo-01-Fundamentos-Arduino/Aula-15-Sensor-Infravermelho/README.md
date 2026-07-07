# Aula 15 — Sensor Infravermelho

## Objetivo

Aprender a utilizar um receptor infravermelho (IR) para receber comandos de um controle remoto e executar diferentes ações no Arduino.

Nesta aula foi desenvolvido um sistema que identifica os botões pressionados no controle remoto e aciona LEDs correspondentes às direções selecionadas.

---

## Conteúdos estudados

- Sensor infravermelho (IR Receiver)
- Controle remoto infravermelho
- Biblioteca `IRremote`
- Decodificação de sinais IR
- Estrutura `switch-case`
- Comunicação Serial
- Controle de LEDs

---

## Componentes utilizados

- Arduino Uno
- Receptor infravermelho (IR Receiver)
- Controle remoto infravermelho
- 5 LEDs
- Resistores
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Sistema de Controle Remoto

Foi desenvolvido um sistema capaz de receber comandos enviados por um controle remoto infravermelho.

Cada botão pressionado aciona um LED específico, simulando as direções de um controle:

| Botão | Ação |
|-------|------|
| 2 | LED Superior |
| 8 | LED Inferior |
| 4 | LED Esquerdo |
| 6 | LED Direito |
| 5 | LED Central |

Além do acionamento dos LEDs, o Arduino exibe no Monitor Serial o comando recebido, permitindo acompanhar o funcionamento do sistema em tempo real.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Biblioteca IRremote

---

## Estrutura dos arquivos

```text
Aula-15-Sensor-Infravermelho/
├── README.md
└── Aula015.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de receptores infravermelhos
- Decodificação de sinais enviados por controles remotos
- Uso da biblioteca `IRremote`
- Controle de múltiplos dispositivos utilizando um único controlador
- Aplicação da estrutura `switch-case`
- Comunicação Serial para depuração
- Desenvolvimento de interfaces sem fio para sistemas embarcados

---

## Dependências

Este projeto utiliza a biblioteca:

- **IRremote**

Caso ela não esteja instalada na Arduino IDE, será necessário adicioná-la antes da compilação do projeto.

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Automação residencial
- Controles remotos para equipamentos eletrônicos
- Sistemas de acesso
- Robótica móvel
- Casas inteligentes (Smart Home)
- Dispositivos IoT
- Automação industrial

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
