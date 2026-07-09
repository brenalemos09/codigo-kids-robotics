# Aula 08 — Monitor de Batimentos Cardíacos com Arduino e Processing

## Objetivo

Desenvolver uma aplicação capaz de realizar a leitura de dados analógicos enviados pelo Arduino e exibi-los em uma interface gráfica desenvolvida no Processing, simulando um monitor de batimentos cardíacos (BPM).

Nesta aula foi explorada a comunicação serial entre Arduino e Processing, permitindo transformar dados de sensores em uma visualização gráfica em tempo real.

---

## Conteúdos estudados

- Comunicação Serial entre Arduino e Processing
- Leitura de entradas analógicas (`analogRead`)
- Conversão e tratamento de dados
- Desenvolvimento de interfaces gráficas
- Manipulação de imagens no Processing
- Animações em tempo real
- Representação gráfica utilizando arcos (`arc`)
- Mapeamento de valores com `map()`
- Atualização dinâmica da interface

---

## Componentes utilizados

### Hardware

- Arduino
- Sensor analógico (entrada A0)
- Cabo USB

### Software

- Arduino IDE
- Processing IDE

---

## Projeto desenvolvido

Foi desenvolvido um monitor gráfico que simula a exibição da frequência cardíaca (BPM).

O Arduino realiza leituras contínuas da entrada analógica A0, processa os valores e os envia pela porta serial ao computador.

No Processing, esses dados são recebidos em tempo real e utilizados para atualizar uma interface gráfica composta por:

- indicador circular preenchido conforme o valor recebido;
- exibição numérica do valor medido;
- animação central simulando os batimentos;
- ícone ilustrativo de coração;
- indicação da unidade BPM.

O projeto demonstra como transformar dados provenientes de sensores físicos em uma interface visual dinâmica.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C++
- Processing
- Comunicação Serial (UART)
- Manipulação de imagens
- Programação gráfica

---

## Estrutura dos arquivos

```text
Aula-08-Monitor-Batimentos-Cardiacos-Processing/

├── README.md
├── arduino_code_aula_08.ino
├── code_aula_08.pde
└── co.png
```

- **arduino_code_aula_08.ino:** realiza a leitura da entrada analógica e envia os dados pela comunicação serial.
- **code_aula_08.pde:** cria toda a interface gráfica e interpreta os dados recebidos do Arduino.
- **co.png:** imagem utilizada na interface para representar o coração.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos sobre:

- integração entre hardware e software;
- aquisição de dados de sensores;
- visualização de informações em tempo real;
- comunicação serial entre aplicações;
- construção de dashboards gráficos utilizando Processing;
- manipulação de elementos gráficos e animações.

---

## Dependências

### Arduino

- Biblioteca padrão do Arduino.

### Processing

- `processing.serial.*`

Não foram utilizadas bibliotecas externas adicionais.

---

## Aplicações práticas

Os conceitos desta aula podem ser aplicados em:

- monitoramento de sensores;
- dashboards para IoT;
- sistemas de telemetria;
- monitoramento industrial;
- dispositivos médicos embarcados;
- aplicações de saúde digital;
- interfaces para Smart Devices.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
