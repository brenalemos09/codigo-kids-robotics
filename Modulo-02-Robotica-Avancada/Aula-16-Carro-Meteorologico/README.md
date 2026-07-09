# Aula 16 — Carro Meteorológico

## Objetivo

Aprender a integrar sensores ambientais a um robô móvel, permitindo realizar o monitoramento de temperatura e umidade enquanto o veículo percorre um ambiente.

Nesta aula foi desenvolvido um robô meteorológico capaz de coletar dados ambientais utilizando um sensor DHT11 e exibir as informações em um display LCD I2C, além de disponibilizá-las pelo Monitor Serial.

---

## Conteúdos estudados

- Sensor DHT11
- Temperatura
- Umidade relativa do ar
- Display LCD I2C
- Comunicação Serial
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Temporização com `millis()`
- Monitoramento ambiental

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Sensor DHT11
- Display LCD I2C
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Carro Meteorológico

Foi desenvolvido um robô móvel capaz de realizar o monitoramento das condições climáticas do ambiente.

O sistema utiliza um sensor DHT11 para medir:

- Temperatura ambiente;
- Umidade relativa do ar.

As informações coletadas são atualizadas periodicamente e apresentadas em um display LCD I2C, além de serem enviadas ao Monitor Serial para acompanhamento em tempo real.

Enquanto realiza as medições, o robô executa uma sequência de deslocamentos, simulando um veículo de inspeção ambiental capaz de coletar dados em diferentes locais.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Biblioteca DHT
- Biblioteca LiquidCrystal_I2C

---

## Estrutura dos arquivos

```text
Aula-16-Carro-Meteorologico/
├── README.md
└── Aula016.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização do sensor DHT11
- Medição de temperatura e umidade
- Utilização de displays LCD I2C
- Comunicação Serial
- Controle de motores DC utilizando Ponte H
- Atualização periódica utilizando `millis()`
- Integração entre sensores ambientais e robótica móvel

---

## Dependências

Este projeto utiliza as bibliotecas:

- **DHT**
- **LiquidCrystal_I2C**

Caso elas não estejam instaladas na Arduino IDE, será necessário adicioná-las antes da compilação do projeto.

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Estações meteorológicas móveis
- Agricultura de precisão
- Monitoramento ambiental
- Smart Cities
- Internet das Coisas (IoT)
- Robôs de inspeção
- Sistemas embarcados para coleta de dados

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
