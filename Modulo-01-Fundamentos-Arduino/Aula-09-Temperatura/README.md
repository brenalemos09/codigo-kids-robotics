# Aula 09 — Temperatura

## Objetivo

Aprender a utilizar um sensor de temperatura LM35 para monitorar a temperatura do ambiente em tempo real e indicar diferentes faixas de temperatura utilizando LEDs.

Nesta aula foi desenvolvido um sistema capaz de realizar a leitura da temperatura por meio de uma biblioteca específica, exibindo os valores no Monitor Serial e sinalizando visualmente cada condição.

---

## Conteúdos estudados

- Sensor de temperatura LM35
- Entradas analógicas
- Comunicação Serial
- Biblioteca MakerRobotics028KY
- Estruturas condicionais (`if`)
- Monitoramento em tempo real
- Controle de LEDs

---

## Componentes utilizados

- Arduino Uno
- Sensor de temperatura LM35
- LED azul
- LED amarelo
- LED vermelho
- Resistores
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Termômetro Digital

Foi desenvolvido um sistema de monitoramento de temperatura utilizando o sensor LM35.

O Arduino realiza continuamente a leitura da temperatura e indica a faixa medida por meio de LEDs:

| Temperatura | Indicação |
|-------------|-----------|
| Abaixo de 27°C | LED azul aceso |
| Entre 27°C e 29°C | LEDs azul e vermelho acesos |
| Acima de 29°C | LEDs azul, vermelho e amarelo acesos |

Além da indicação visual, o valor da temperatura é exibido no Monitor Serial em tempo real.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Biblioteca MakerRobotics028KY

---

## Estrutura dos arquivos

```text
Aula-09-Temperatura/
├── README.md
├── Aula009.ino
└── Biblioteca_MakerRobotics028KY/
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores de temperatura
- Leitura de sinais analógicos
- Monitoramento contínuo de variáveis físicas
- Comunicação Serial para depuração
- Utilização de bibliotecas externas
- Desenvolvimento de sistemas de monitoramento ambiental
- Integração entre sensores e atuadores

---

## Dependências

Este projeto utiliza a biblioteca:

- **MakerRobotics028KY**

Caso ela não esteja instalada na Arduino IDE, será necessário adicioná-la antes da compilação do projeto.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
