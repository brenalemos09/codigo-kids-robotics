# Aula 20 — Criação de Jogos

## Objetivo

Aplicar conceitos de lógica de programação, estruturas de repetição, arrays, geração de números aleatórios e interação com hardware para desenvolver um jogo da memória utilizando Arduino.

Nesta aula foram integrados LEDs, botões e um buzzer para criar um jogo eletrônico capaz de gerar sequências aleatórias que devem ser reproduzidas pelo jogador.

---

## Conteúdos estudados

- Arrays (Vetores)
- Estruturas de repetição (`for`)
- Estruturas condicionais (`if`)
- Geração de números aleatórios (`random()`)
- Função `randomSeed()`
- Controle de LEDs
- Leitura de botões
- Buzzer
- Organização de funções
- Desenvolvimento de jogos embarcados

---

## Componentes utilizados

- Arduino Uno
- 3 LEDs
- 3 Botões (Push Button)
- Buzzer
- Resistores
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Jogo da Memória

Foi desenvolvido um jogo eletrônico inspirado no clássico **Genius (Simon Game)**.

O funcionamento ocorre em etapas:

1. O Arduino gera uma sequência aleatória de LEDs e sons.
2. O jogador observa a sequência.
3. Em seguida, deve reproduzir corretamente a ordem utilizando os botões.
4. A cada rodada a sequência aumenta de tamanho.
5. Caso o jogador pressione um botão incorreto, o sistema executa uma animação de erro e reinicia a partida.

Toda a lógica do jogo é controlada por funções específicas responsáveis pela geração da sequência, reprodução dos sinais, leitura das jogadas e validação das respostas.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-20-Criacao-de-Jogos/
├── README.md
└── Aula020.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de arrays para armazenamento de dados
- Geração de sequências aleatórias
- Desenvolvimento de algoritmos baseados em estados
- Organização de programas utilizando funções
- Controle simultâneo de LEDs, botões e buzzer
- Desenvolvimento de jogos embarcados
- Aplicação de lógica de programação para interação com o usuário

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Jogos eletrônicos
- Interfaces homem-máquina (HMI)
- Sistemas embarcados interativos
- Robótica educacional
- Dispositivos de treinamento cognitivo
- Equipamentos eletrônicos com interação por sequência
- Desenvolvimento de firmware para dispositivos inteligentes

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
