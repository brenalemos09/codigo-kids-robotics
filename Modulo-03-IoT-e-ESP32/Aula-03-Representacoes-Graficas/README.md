# Aula 03 — Representações Gráficas

## Objetivo

Aprender a representar dados de sensores em uma interface gráfica desenvolvida em Processing, permitindo o monitoramento em tempo real de informações coletadas pelo Arduino.

Nesta aula foi desenvolvido um sistema capaz de ler temperatura e umidade através de um sensor DHT11 e apresentar essas informações em uma interface gráfica personalizada.

---

## Conteúdos estudados

- Sensor DHT11
- Temperatura
- Umidade relativa do ar
- Comunicação Serial
- Processing
- Interface Gráfica (GUI)
- Representação visual de dados
- Monitoramento em tempo real

---

## Componentes utilizados

- Arduino Uno
- Sensor DHT11
- Protoboard
- Jumpers
- Cabo USB
- Computador

---

## Projeto desenvolvido

### Monitoramento Gráfico de Temperatura e Umidade

Foi desenvolvido um sistema de monitoramento ambiental utilizando um sensor DHT11 conectado ao Arduino.

O Arduino realiza continuamente a leitura dos valores de:

- Temperatura
- Umidade relativa do ar

Esses dados são enviados ao computador através da comunicação serial.

Uma aplicação desenvolvida em Processing recebe as informações e as apresenta em uma interface gráfica personalizada, permitindo o acompanhamento em tempo real das condições ambientais.

Além da interface, o projeto utiliza imagens e fontes personalizadas para melhorar a experiência visual do usuário.

---

## Tecnologias utilizadas

- Arduino IDE
- Processing
- Linguagem C/C++
- Linguagem Java (Processing)
- Comunicação Serial

---

## Estrutura dos arquivos

```text
Aula-03-Representacoes-Graficas/
├── README.md
├── DHT.ino
├── DHT11.pde
├── Back.png
└── data/
    └── Calibri-48.vlw
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização do sensor DHT11
- Comunicação Serial entre Arduino e computador
- Desenvolvimento de interfaces gráficas utilizando Processing
- Visualização de dados em tempo real
- Integração entre hardware e software
- Desenvolvimento de dashboards simples
- Monitoramento ambiental

---

## Dependências

Este projeto utiliza as bibliotecas:

- DHT
- Processing Serial

Também utiliza recursos gráficos:

- Back.png
- Fonte Calibri-48.vlw

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Dashboards IoT
- Monitoramento ambiental
- Estações meteorológicas
- Agricultura inteligente
- Smart Cities
- Automação residencial
- Sistemas supervisórios
- Sistemas embarcados conectados

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
