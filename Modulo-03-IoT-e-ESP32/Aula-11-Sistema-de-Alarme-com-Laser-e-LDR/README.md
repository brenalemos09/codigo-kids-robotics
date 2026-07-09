# Aula 11 — Sistema de Alarme com Laser e LDR

## Objetivo

Desenvolver um sistema de alarme utilizando um sensor LDR e um módulo laser, monitorando continuamente a incidência de luz e apresentando o estado do sistema em uma interface gráfica criada no Processing.

Nesta aula foi explorada a comunicação bidirecional entre Arduino e Processing, permitindo tanto o envio de dados do sensor quanto o recebimento de comandos pela porta serial.

---

## Conteúdos estudados

- Comunicação Serial bidirecional
- Sensor LDR
- Módulo Laser
- Leitura de entradas analógicas (`analogRead`)
- Desenvolvimento de interfaces gráficas
- Manipulação de imagens no Processing
- Monitoramento em tempo real
- Envio de comandos do Processing para o Arduino
- Sistemas de detecção e alarme

---

## Componentes utilizados

### Hardware

- Arduino
- Sensor LDR (Fotoresistor)
- Módulo Laser
- Resistores
- Protoboard
- Cabos jumper
- Cabo USB

### Software

- Arduino IDE
- Processing IDE

---

## Projeto desenvolvido

Foi desenvolvido um sistema de alarme baseado na interrupção de um feixe de laser.

O Arduino mantém o laser ativo e realiza leituras contínuas do sensor LDR, enviando os valores pela comunicação serial ao computador.

O Processing recebe essas informações e exibe uma interface gráfica indicando o estado do sistema através de animações, imagens e indicadores visuais.

Além da leitura dos dados, a interface também envia comandos ao Arduino para ligar ou desligar o laser, demonstrando uma comunicação serial bidirecional entre hardware e software.

Essa arquitetura simula o funcionamento de sistemas de segurança utilizados em residências, empresas e aplicações industriais.

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
Aula-11-Sistema-de-Alarme-com-Laser-e-LDR/

├── README.md
├── sketch_oct17a/
│   └── sketch_oct17a.ino
└── sketch_241018b/
    ├── sketch_241018b.pde
    └── data/
        ├── Alarm.png
        ├── AlarmEnabled.png
        └── AlarmDisabled.png
```

- **sketch_oct17a.ino:** realiza a leitura do LDR, controla o módulo laser e comunica-se com o Processing pela porta serial.
- **sketch_241018b.pde:** implementa a interface gráfica responsável pelo monitoramento e envio de comandos ao Arduino.
- **Alarm.png, AlarmEnabled.png e AlarmDisabled.png:** imagens utilizadas para representar visualmente o estado do sistema.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos sobre:

- sensores ópticos;
- utilização de LDR para detecção de luminosidade;
- comunicação serial bidirecional;
- integração entre hardware e interface gráfica;
- monitoramento em tempo real;
- desenvolvimento de sistemas de segurança embarcados.

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

- sistemas de alarme residencial;
- barreiras eletrônicas;
- controle de acesso;
- monitoramento de ambientes;
- automação predial;
- segurança industrial;
- projetos de IoT voltados à detecção de eventos.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
