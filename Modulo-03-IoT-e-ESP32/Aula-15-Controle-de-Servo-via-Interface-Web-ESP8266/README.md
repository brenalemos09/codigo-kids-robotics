# Aula 15 — Controle de Servomotor via Interface Web com ESP8266

## Objetivo

Desenvolver um sistema de controle remoto de um servomotor utilizando um ESP8266 como servidor web, permitindo ajustar o ângulo do servo diretamente pelo navegador por meio de uma interface web interativa.

Nesta aula foram explorados conceitos de Internet das Coisas (IoT), servidores HTTP embarcados, integração entre HTML/CSS e hardware, além do controle de atuadores através da rede Wi-Fi.

---

## Conteúdos estudados

- ESP8266
- Internet das Coisas (IoT)
- Conexão Wi-Fi
- Servidor HTTP embarcado
- Controle de Servomotor
- Biblioteca Servo
- Desenvolvimento de interfaces web
- HTML
- CSS
- Slider (Range Input)
- Requisições HTTP GET
- Controle remoto de atuadores

---

## Componentes utilizados

### Hardware

- ESP8266
- Servomotor
- Cabos jumper
- Cabo USB

### Software

- Arduino IDE
- Navegador Web

---

## Projeto desenvolvido

Foi desenvolvido um sistema de controle remoto para um servomotor utilizando um ESP8266 conectado à rede Wi-Fi.

Após conectar-se à rede, o ESP8266 inicia um servidor HTTP e disponibiliza uma interface web acessível por qualquer dispositivo conectado à mesma rede.

A interface apresenta um controle deslizante (slider), permitindo ao usuário selecionar um ângulo entre **0° e 180°**.

Sempre que o valor do slider é alterado, uma requisição HTTP é enviada ao ESP8266, que interpreta o valor recebido e posiciona o servomotor no ângulo correspondente.

Além do código embarcado, o projeto inclui uma versão separada da interface HTML e do arquivo CSS, facilitando o estudo da estrutura da página web.

---

## Tecnologias utilizadas

- ESP8266
- Arduino IDE
- Linguagem C++
- HTML5
- CSS3
- Wi-Fi
- HTTP
- Servo Library

---

## Estrutura dos arquivos

```text
Aula-15-Controle-de-Servo-via-Interface-Web-ESP8266/

├── README.md
├── programacao.ino
└── programacao/
    ├── index.html
    └── style.css
```

- **programacao.ino:** implementa o servidor web, conexão Wi-Fi, interpretação das requisições HTTP e controle do servomotor.
- **index.html:** interface web utilizada para controlar o servo através de um slider.
- **style.css:** responsável pela estilização da interface gráfica.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos sobre:

- criação de servidores web embarcados;
- controle remoto de atuadores;
- integração entre HTML, CSS e ESP8266;
- comunicação entre navegador e microcontrolador;
- utilização de requisições HTTP GET;
- controle de servomotores via rede Wi-Fi;
- desenvolvimento de aplicações IoT com interface web.

---

## Dependências

- ESP8266WiFi
- Servo

---

## Aplicações práticas

Os conceitos desta aula podem ser utilizados em:

- automação residencial;
- abertura automática de portas e portões;
- controle de persianas inteligentes;
- robótica;
- braços robóticos;
- sistemas de irrigação automatizados;
- dispositivos IoT com controle remoto;
- projetos de automação industrial.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
