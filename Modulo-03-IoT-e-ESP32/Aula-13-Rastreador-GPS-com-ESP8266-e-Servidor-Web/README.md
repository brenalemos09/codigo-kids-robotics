# Aula 13 — Rastreador GPS com ESP8266 e Servidor Web

## Objetivo

Desenvolver um sistema de rastreamento utilizando um módulo GPS conectado ao ESP8266, disponibilizando as coordenadas geográficas em uma página web acessível pela rede Wi-Fi.

Nesta aula foram explorados conceitos de Internet das Coisas (IoT), comunicação com módulos GPS, criação de servidores web embarcados e integração entre dispositivos conectados.

---

## Conteúdos estudados

- ESP8266
- Internet das Coisas (IoT)
- Comunicação serial com módulo GPS
- Biblioteca TinyGPS++
- Conexão Wi-Fi
- Criação de servidor HTTP
- Desenvolvimento de páginas HTML embarcadas
- Leitura de latitude e longitude
- Data e hora via GPS
- Integração com Google Maps

---

## Componentes utilizados

### Hardware

- ESP8266
- Módulo GPS NEO-6M
- Cabos jumper
- Cabo USB

### Software

- Arduino IDE

---

## Projeto desenvolvido

Foi desenvolvido um rastreador GPS utilizando um ESP8266 conectado a um módulo NEO-6M.

O ESP8266 conecta-se a uma rede Wi-Fi e inicia um servidor HTTP na porta 80. Simultaneamente, recebe continuamente os dados enviados pelo módulo GPS através da comunicação serial.

Quando um dispositivo acessa o endereço IP do ESP8266 pelo navegador, é exibida uma página web contendo:

- latitude;
- longitude;
- data;
- horário obtido via satélite;
- link direto para visualização da localização no Google Maps.

O projeto demonstra como criar uma aplicação completa de IoT, combinando aquisição de dados, conectividade sem fio e disponibilização das informações em uma interface web.

---

## Tecnologias utilizadas

- ESP8266
- Arduino IDE
- Linguagem C++
- Wi-Fi
- HTTP
- HTML
- TinyGPS++
- SoftwareSerial

---

## Estrutura dos arquivos

```text
Aula-13-Rastreador-GPS-com-ESP8266-e-Servidor-Web/

├── README.md
└── modulo_gps.ino
```

- **modulo_gps.ino:** implementa a conexão Wi-Fi, leitura dos dados do módulo GPS, criação do servidor HTTP e geração dinâmica da página web com as informações de localização.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos sobre:

- comunicação entre ESP8266 e módulo GPS;
- criação de servidores web embarcados;
- desenvolvimento de aplicações IoT;
- interpretação de coordenadas geográficas;
- utilização da biblioteca TinyGPS++;
- integração entre hardware, rede Wi-Fi e interface web;
- geração dinâmica de páginas HTML.

---

## Dependências

- TinyGPS++
- SoftwareSerial
- ESP8266WiFi

---

## Aplicações práticas

Os conceitos desta aula podem ser utilizados em:

- rastreamento de veículos;
- monitoramento de frotas;
- dispositivos de localização em tempo real;
- logística inteligente;
- agricultura de precisão;
- monitoramento de ativos;
- sistemas de emergência;
- soluções de Internet das Coisas (IoT).

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
