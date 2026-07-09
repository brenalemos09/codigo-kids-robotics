# Aula 10 — Monitor de Temperatura e Umidade com Arduino e Processing

## Objetivo

Desenvolver um sistema capaz de monitorar temperatura e umidade em tempo real utilizando Arduino e uma interface gráfica construída no Processing.

Nesta aula foi explorada a comunicação serial entre Arduino e Processing para aquisição, transmissão e visualização de dados ambientais.

---

## Conteúdos estudados

- Comunicação Serial entre Arduino e Processing
- Monitoramento de sensores ambientais
- Leitura de temperatura e umidade
- Desenvolvimento de dashboards gráficos
- Manipulação de imagens no Processing
- Atualização de dados em tempo real
- Exibição de informações em interface gráfica
- Conversão e apresentação de valores numéricos

---

## Componentes utilizados

### Hardware

- Arduino
- Sensor de temperatura e umidade
- Cabo USB

### Software

- Arduino IDE
- Processing IDE

---

## Projeto desenvolvido

Foi desenvolvido um monitor ambiental capaz de exibir, em tempo real, os valores de temperatura e umidade capturados pelo Arduino.

O Arduino realiza a leitura do sensor e transmite os dados pela comunicação serial ao computador.

No Processing, essas informações são interpretadas e apresentadas em uma interface gráfica composta por:

- indicador de temperatura;
- indicador de umidade;
- imagens ilustrativas para cada medição;
- atualização automática dos valores recebidos.

O projeto demonstra como transformar dados provenientes de sensores físicos em um painel gráfico de monitoramento, aproximando-se de aplicações reais de Internet das Coisas (IoT).

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C++
- Processing
- Comunicação Serial (UART)
- Programação Gráfica

---

## Estrutura dos arquivos

```text
Aula-10-Monitor-de-Temperatura-e-Umidade/

├── README.md
├── sketch_oct15a/
│   └── sketch_oct15a.ino
└── sketch_241015b/
    ├── sketch_241015b.pde
    └── data/
        ├── Hum.png
        └── Temp.png
```

- **sketch_oct15a.ino:** realiza a leitura do sensor e envia os dados pela porta serial.
- **sketch_241015b.pde:** implementa a interface gráfica responsável por exibir as medições recebidas.
- **Hum.png:** imagem utilizada para representar a umidade.
- **Temp.png:** imagem utilizada para representar a temperatura.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos sobre:

- aquisição de dados de sensores ambientais;
- comunicação serial entre Arduino e Processing;
- construção de dashboards em tempo real;
- manipulação de imagens em interfaces gráficas;
- monitoramento de variáveis físicas;
- integração entre hardware e software.

---

## Dependências

### Arduino

- Biblioteca padrão do Arduino.
- Biblioteca do sensor de temperatura e umidade (quando utilizada pelo hardware).

### Processing

- `processing.serial.*`

---

## Aplicações práticas

Os conceitos desta aula podem ser utilizados em:

- estações meteorológicas;
- monitoramento de ambientes;
- automação residencial;
- agricultura de precisão;
- estufas inteligentes;
- salas climatizadas;
- sistemas de IoT;
- monitoramento industrial.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
