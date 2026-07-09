# Aula 09 — Controlador RGB com Processing

## Objetivo

Desenvolver uma interface gráfica utilizando Processing para controlar, em tempo real, as cores de um LED RGB conectado ao Arduino por meio da comunicação USB.

Nesta aula foi explorada a integração entre Processing e Arduino utilizando a biblioteca Firmata, permitindo controlar saídas PWM diretamente pela interface gráfica.

---

## Conteúdos estudados

- Integração entre Processing e Arduino
- Biblioteca Arduino para Processing (Firmata)
- Controle de portas PWM
- Comunicação via USB
- Desenvolvimento de interfaces gráficas
- Manipulação de eventos do mouse
- Controle de cores RGB
- Atualização visual em tempo real

---

## Componentes utilizados

### Hardware

- Arduino
- LED RGB
- Resistores
- Protoboard
- Cabos jumper
- Cabo USB

### Software

- Arduino IDE
- Processing IDE

---

## Projeto desenvolvido

Foi desenvolvido um controlador gráfico para um LED RGB.

A interface criada no Processing apresenta três barras deslizantes (sliders), correspondentes aos canais de cor:

- Vermelho (Red)
- Verde (Green)
- Azul (Blue)

Ao clicar sobre qualquer uma das barras, o usuário altera a intensidade da respectiva cor. O Processing envia imediatamente os valores ao Arduino utilizando a biblioteca Firmata, que realiza a escrita PWM nas portas digitais conectadas ao LED RGB.

Além disso, a aplicação exibe uma pré-visualização da cor resultante em uma esfera, permitindo visualizar em tempo real a mistura das três componentes RGB.

---

## Tecnologias utilizadas

- Arduino IDE
- Processing IDE
- Linguagem C++
- Processing (Java)
- Comunicação USB
- PWM (Pulse Width Modulation)
- Biblioteca Arduino para Processing (Firmata)

---

## Estrutura dos arquivos

```text
Aula-09-Controlador-RGB-com-Processing/

├── README.md
└── code_aula_09_processing.pde
```

- **code_aula_09_processing.pde:** implementa toda a interface gráfica, realiza a comunicação com o Arduino e controla a intensidade das cores do LED RGB utilizando saídas PWM.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos sobre:

- controle de dispositivos físicos através de interfaces gráficas;
- utilização da biblioteca Arduino para Processing;
- manipulação de sinais PWM;
- mistura de cores no padrão RGB;
- desenvolvimento de aplicações interativas;
- integração entre software desktop e hardware embarcado.

---

## Dependências

### Processing

- `processing.serial.*`
- `cc.arduino.*` (Arduino/Firmata)

### Arduino

O Arduino deve estar executando o firmware **StandardFirmata**, permitindo que o Processing controle diretamente suas portas digitais.

---

## Aplicações práticas

Os conceitos desta aula podem ser utilizados em:

- sistemas de iluminação inteligente;
- automação residencial;
- interfaces para IoT;
- controle de LEDs RGB;
- prototipagem de produtos eletrônicos;
- painéis de controle industriais;
- interfaces homem-máquina (HMI);
- projetos de computação física.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
