# Aula 14 — LCD

## Objetivo

Aprender a utilizar um display LCD com comunicação I2C para exibir informações em tempo real, desenvolvendo um sistema de monitoramento de temperatura com configuração de limite de alarme.

Nesta aula foram integrados sensores, display LCD, botões, LED e buzzer para criar uma interface embarcada interativa.

---

## Conteúdos estudados

- Display LCD 20x4 com interface I2C
- Biblioteca `LiquidCrystal_I2C`
- Sensor de temperatura LM35
- Conversão Analógico-Digital (ADC)
- Botões (Push Button)
- Comunicação I2C
- Acionamento de buzzer
- Controle de LEDs
- Interface homem-máquina (HMI)

---

## Componentes utilizados

- Arduino Uno
- Display LCD 20x4 I2C
- Sensor de temperatura LM35
- 2 botões (Push Button)
- LED
- Buzzer
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Controlador de Temperatura

Foi desenvolvido um sistema de monitoramento de temperatura utilizando um sensor LM35 e um display LCD I2C.

O sistema realiza continuamente a leitura da temperatura ambiente e apresenta as informações no display LCD.

Além disso, dois botões permitem ao usuário configurar a temperatura máxima permitida (setpoint). Quando a temperatura medida ultrapassa esse limite:

- o LED é acionado;
- o buzzer emite um alerta sonoro;
- o sistema informa continuamente a temperatura monitorada.

O projeto simula o funcionamento de um controlador de temperatura utilizado em ambientes industriais e sistemas automatizados.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Biblioteca LiquidCrystal_I2C

---

## Estrutura dos arquivos

```text
Aula-14-LCD/
├── README.md
└── Aula014.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de displays LCD com interface I2C
- Leitura de sensores analógicos
- Configuração de parâmetros por meio de botões
- Desenvolvimento de interfaces homem-máquina (HMI)
- Acionamento de alarmes visuais e sonoros
- Integração entre sensores, display e atuadores
- Desenvolvimento de sistemas embarcados interativos

---

## Dependências

Este projeto utiliza a biblioteca:

- **LiquidCrystal_I2C**

Caso ela não esteja instalada na Arduino IDE, será necessário adicioná-la antes da compilação do projeto.

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Termostatos digitais
- Estufas automatizadas
- Incubadoras
- Sistemas HVAC
- Automação industrial
- Monitoramento ambiental
- Dispositivos IoT com interface local

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
