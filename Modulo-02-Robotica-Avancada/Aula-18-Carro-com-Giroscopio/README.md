# Aula 18 — Carro com Giroscópio

## Objetivo

Aprender a utilizar um sensor giroscópio/acelerômetro (MPU6050) para identificar a inclinação de um robô móvel e controlar automaticamente sua movimentação de acordo com sua orientação.

Nesta aula foi desenvolvido um sistema capaz de interpretar os dados de aceleração dos eixos X e Y e tomar decisões de movimento com base na posição do robô.

---

## Conteúdos estudados

- MPU6050
- Giroscópio
- Acelerômetro
- Comunicação I²C
- Biblioteca Wire
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Leitura de sensores inerciais
- Sistemas embarcados

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Sensor MPU6050
- Protoboard
- Jumpers
- Fonte de alimentação
- Cabo USB

---

## Projeto desenvolvido

### Carro com Giroscópio

Foi desenvolvido um robô móvel equipado com um sensor MPU6050, responsável por medir a aceleração e a inclinação do sistema.

A comunicação entre o Arduino e o sensor ocorre através do protocolo I²C utilizando a biblioteca `Wire`.

Durante a execução, o Arduino realiza continuamente a leitura dos eixos X e Y do acelerômetro.

De acordo com os valores obtidos:

- quando a inclinação no eixo Y ultrapassa o limite configurado, o robô inicia seu deslocamento;
- quando a inclinação no eixo X atinge o valor definido, os motores são desligados e o robô permanece parado.

O projeto demonstra como sensores inerciais podem ser utilizados para controlar dispositivos robóticos de forma dinâmica.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno
- Comunicação I²C
- Biblioteca Wire

---

## Estrutura dos arquivos

```text
Aula-18-Carro-com-Giroscopio/
├── README.md
└── Aula018.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização do sensor MPU6050
- Comunicação I²C utilizando a biblioteca `Wire`
- Leitura de acelerômetros e giroscópios
- Controle de motores DC utilizando Ponte H
- Desenvolvimento de sistemas embarcados baseados em sensores inerciais
- Integração entre sensores e atuadores
- Aplicação de lógica de controle baseada na orientação do robô

---

## Dependências

Este projeto utiliza a biblioteca:

- **Wire** (biblioteca padrão da Arduino IDE)

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Drones
- Robôs autônomos
- Sistemas de estabilização
- Veículos inteligentes
- Equipamentos industriais
- Dispositivos IoT
- Sistemas embarcados de navegação
- Controle de movimento

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
