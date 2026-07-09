# Aula 14 — Servidor Web ESP8266 com Monitoramento de Temperatura e Umidade

## Objetivo

Desenvolver um servidor web embarcado utilizando o ESP8266 para monitorar temperatura e umidade em tempo real através de um sensor DHT11, disponibilizando as informações em uma página HTML acessível pela rede Wi-Fi.

Nesta aula foram explorados conceitos de Internet das Coisas (IoT), criação de servidores HTTP embarcados e desenvolvimento de interfaces web para monitoramento de sensores.

---

## Conteúdos estudados

- ESP8266
- Internet das Coisas (IoT)
- Conexão Wi-Fi
- Servidor HTTP embarcado
- Biblioteca ESP8266WebServer
- Sensor DHT11
- Leitura de temperatura e umidade
- Geração dinâmica de páginas HTML
- Atualização automática da página (Auto Refresh)
- Estilização com CSS

---

## Componentes utilizados

### Hardware

- ESP8266
- Sensor DHT11
- Cabos jumper
- Cabo USB

### Software

- Arduino IDE

---

## Projeto desenvolvido

Foi desenvolvido um sistema de monitoramento ambiental utilizando um ESP8266 conectado a um sensor DHT11.

Após conectar-se à rede Wi-Fi, o ESP8266 inicializa um servidor HTTP na porta 80. Sempre que um cliente acessa o endereço IP do dispositivo pelo navegador, o microcontrolador realiza a leitura da temperatura e da umidade e gera dinamicamente uma página HTML contendo essas informações.

A página apresenta:

- temperatura em graus Celsius;
- umidade relativa do ar (%);
- atualização automática a cada dois segundos;
- layout estilizado para facilitar a visualização dos dados.

Além do código embarcado, o projeto também contém um exemplo de layout HTML e CSS desenvolvido separadamente, demonstrando a evolução da interface antes da incorporação ao código do ESP8266.

---

## Tecnologias utilizadas

- ESP8266
- Arduino IDE
- Linguagem C++
- HTML5
- CSS3
- HTTP
- Wi-Fi

---

## Estrutura dos arquivos

```text
Aula-14-Servidor-Web-ESP8266-com-Monitoramento-DHT11/

├── README.md
├── webServer2/
│   └── webServer2.ino
└── Layout/
    ├── Untitled-1.html
    └── estilo.css
```

- **webServer2.ino:** implementa toda a lógica do servidor web, conexão Wi-Fi, leitura do sensor DHT11 e geração dinâmica da página HTML.
- **Untitled-1.html:** versão do layout HTML desenvolvida para a interface web.
- **estilo.css:** arquivo de estilos utilizado na construção visual da página.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos sobre:

- criação de servidores web embarcados;
- leitura de sensores ambientais;
- integração entre hardware e aplicações web;
- geração dinâmica de páginas HTML;
- utilização do protocolo HTTP em dispositivos IoT;
- estilização de interfaces utilizando CSS;
- desenvolvimento de dashboards acessíveis via navegador.

---

## Dependências

- ESP8266WiFi
- ESP8266WebServer
- DHT

---

## Aplicações práticas

Os conceitos desta aula podem ser utilizados em:

- estações meteorológicas;
- monitoramento residencial;
- automação predial;
- agricultura de precisão;
- monitoramento de ambientes industriais;
- sistemas de climatização;
- dashboards IoT;
- dispositivos conectados à Internet para monitoramento remoto.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
