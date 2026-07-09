# Aula 05 — Sistema Binário

## Objetivo

Compreender como comandos digitais podem ser utilizados para controlar o movimento de um robô móvel, explorando a lógica binária aplicada aos motores DC por meio de uma Ponte H.

Nesta aula foi desenvolvido um sistema em que diferentes botões representam comandos distintos de movimentação, permitindo controlar o deslocamento do robô para frente, à direita e à esquerda.

---

## Conteúdos estudados

- Sistema binário
- Entradas digitais
- Saídas digitais
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Botões (Push Button)
- Estruturas condicionais (`if`)
- Controle de direção

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- 3 Botões (Frente, Direita e Esquerda)
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Controle Direcional do Robô

Foi desenvolvido um sistema que permite controlar a direção de um robô móvel utilizando três botões.

Cada botão representa um comando específico:

| Botão | Movimento |
|--------|-----------|
| Frente | Avança em linha reta |
| Direita | Gira para a direita |
| Esquerda | Gira para a esquerda |

Ao pressionar qualquer botão, o Arduino envia sinais digitais para a Ponte H, acionando os motores conforme a direção desejada. Após três segundos de movimento, o robô é parado automaticamente.

O projeto demonstra como combinações de sinais digitais (níveis lógico alto e baixo) controlam o sentido de rotação dos motores, princípio fundamental utilizado em robótica móvel.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-05-Sistema-Binario/
├── README.md
└── Aula005.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Controle direcional de motores DC
- Aplicação de lógica binária em sistemas embarcados
- Utilização da Ponte H para inversão do sentido de rotação
- Leitura de múltiplas entradas digitais
- Desenvolvimento de funções para movimentação do robô
- Integração entre botões e atuadores
- Organização de código para robótica móvel

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs móveis
- Veículos autônomos
- Plataformas robóticas
- AGVs (Automated Guided Vehicles)
- Automação industrial
- Robótica educacional
- Sistemas embarcados para controle de direção

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
