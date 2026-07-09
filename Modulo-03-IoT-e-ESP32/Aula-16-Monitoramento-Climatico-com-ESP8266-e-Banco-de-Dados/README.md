# Aula 16 — Monitoramento Climático com ESP8266 e Banco de Dados

## Objetivo

Desenvolver um sistema de monitoramento climático utilizando o ESP8266 para coletar dados de sensores e enviá-los para um servidor, armazenando as informações em um banco de dados para posterior consulta e análise.

Nesta aula foram explorados conceitos de Internet das Coisas (IoT), integração entre dispositivos embarcados, PHP, MySQL e armazenamento persistente de dados.

---

## Conteúdos estudados

- ESP8266
- Internet das Coisas (IoT)
- Comunicação HTTP
- Envio de dados para servidor
- Linguagem PHP
- Banco de Dados MySQL
- Modelagem de tabelas SQL
- Armazenamento de dados de sensores
- Exportação de dados em CSV
- Integração entre hardware e aplicações web

---

## Componentes utilizados

### Hardware

- ESP8266
- Sensor de temperatura e umidade
- Cabos jumper
- Cabo USB

### Software

- Arduino IDE
- Servidor Web (Apache/XAMPP ou similar)
- PHP
- MySQL

---

## Projeto desenvolvido

Foi desenvolvido um sistema completo de monitoramento climático baseado em IoT.

O ESP8266 realiza a leitura dos dados do sensor e envia periodicamente as informações para um servidor web utilizando requisições HTTP.

No servidor, um script PHP recebe os dados enviados pelo microcontrolador e os armazena em um banco de dados MySQL.

Além do armazenamento, o projeto disponibiliza:

- estrutura da tabela em SQL para criação do banco de dados;
- arquivo CSV contendo registros de exemplo;
- script PHP responsável pela comunicação entre o ESP8266 e o banco de dados.

Esse projeto representa uma arquitetura típica de aplicações IoT, onde dispositivos embarcados coletam informações do ambiente e as enviam para armazenamento centralizado.

---

## Tecnologias utilizadas

- ESP8266
- Arduino IDE
- Linguagem C++
- Wi-Fi
- HTTP
- PHP
- MySQL
- SQL
- CSV

---

## Estrutura dos arquivos

```text
Aula-16-Monitoramento-Climatico-com-ESP8266-e-Banco-de-Dados/

├── README.md
├── PROGRAMACAO.ino
├── clima.php
├── clima.sql
└── clima.csv
```

- **PROGRAMACAO.ino:** realiza a leitura do sensor e envia os dados ao servidor web via HTTP.
- **clima.php:** recebe os dados enviados pelo ESP8266 e realiza a gravação no banco de dados.
- **clima.sql:** contém a estrutura da tabela utilizada no MySQL.
- **clima.csv:** apresenta um conjunto de dados exportados para análise ou backup.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos sobre:

- comunicação entre ESP8266 e servidores web;
- envio de dados utilizando requisições HTTP;
- integração entre sistemas embarcados e bancos de dados;
- utilização de PHP como camada de comunicação;
- modelagem de tabelas em MySQL;
- persistência de dados em aplicações IoT;
- organização de arquiteturas cliente-servidor.

---

## Dependências

### Arduino

- ESP8266WiFi
- ESP8266HTTPClient

### Servidor

- PHP
- MySQL ou MariaDB

---

## Aplicações práticas

Os conceitos desta aula podem ser utilizados em:

- estações meteorológicas inteligentes;
- monitoramento ambiental remoto;
- agricultura de precisão;
- cidades inteligentes (Smart Cities);
- monitoramento industrial;
- sistemas de telemetria;
- dashboards IoT;
- coleta e armazenamento de dados em nuvem.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
