# Aula 12 — Jogo da Cobrinha com Joystick

## Objetivo

Desenvolver uma versão do clássico jogo da cobrinha (Snake) utilizando Processing como interface gráfica e um joystick conectado ao Arduino como dispositivo de controle.

Nesta aula foi explorada a integração entre hardware e software para controlar um jogo em tempo real por meio da comunicação serial entre Arduino e Processing.

---

## Conteúdos estudados

- Comunicação Serial entre Arduino e Processing
- Leitura de joystick analógico
- Controle de direção utilizando eixos X e Y
- Desenvolvimento de jogos 2D
- Programação orientada a eventos
- Reprodução de sons e músicas
- Manipulação de imagens
- Detecção de colisões
- Lógica de pontuação
- Atualização gráfica em tempo real

---

## Componentes utilizados

### Hardware

- Arduino
- Módulo Joystick Analógico
- Cabo USB

### Software

- Arduino IDE
- Processing IDE

---

## Projeto desenvolvido

Foi desenvolvido um jogo da cobrinha (Snake) controlado por um joystick conectado ao Arduino.

O Arduino realiza a leitura contínua dos eixos analógicos do joystick e envia essas informações para o Processing através da comunicação serial.

O Processing interpreta os comandos recebidos e controla a movimentação da cobra na tela, implementando toda a lógica do jogo, incluindo:

- movimentação da cobrinha;
- coleta de alimentos;
- aumento do tamanho da cobra;
- sistema de pontuação;
- detecção de colisões;
- telas de menu;
- reprodução de efeitos sonoros;
- músicas de fundo durante a execução.

O projeto apresenta uma experiência bastante próxima de um jogo completo, integrando hardware, interface gráfica, áudio e lógica de programação.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C++
- Processing
- Comunicação Serial (UART)
- Programação Gráfica
- Áudio no Processing

---

## Estrutura dos arquivos

```text
Aula-12-Jogo-da-Cobrinha-com-Joystick/

├── README.md
├── arduino_code/
│   └── arduino_joystick/
│       └── arduino_joystick.ino
└── processing_code/
    ├── snake_joystick/
    │   ├── snake_joystick.pde
    │   ├── menu.png
    │   ├── apple_eat_2.wav
    │   └── menu_song_2.mp3
    └── snake_joystick2/
        ├── snake_joystick2.pde
        ├── menu.png
        ├── apple_eat.wav
        ├── apple_eat_2.wav
        ├── game_song.mp3
        ├── menu_song.mp3
        ├── menu_song_2.mp3
        └── song.mp3
```

- **arduino_joystick.ino:** realiza a leitura do joystick e envia os comandos ao computador.
- **snake_joystick.pde:** primeira versão do jogo.
- **snake_joystick2.pde:** versão aprimorada do jogo com recursos adicionais.
- **Arquivos PNG:** utilizados na interface gráfica.
- **Arquivos WAV e MP3:** responsáveis pelos efeitos sonoros e músicas de fundo.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos sobre:

- integração entre joystick e Arduino;
- comunicação serial aplicada a jogos;
- desenvolvimento de jogos 2D no Processing;
- programação orientada a eventos;
- manipulação de áudio e imagens;
- lógica de movimentação e colisão;
- gerenciamento de estados do jogo (menu, partida e encerramento).

---

## Dependências

### Arduino

- Biblioteca padrão do Arduino.

### Processing

- `processing.serial.*`
- Biblioteca de áudio do Processing (Sound/Minim, conforme configuração do projeto).

---

## Aplicações práticas

Os conceitos desta aula podem ser utilizados em:

- desenvolvimento de jogos;
- interfaces homem-máquina (HMI);
- prototipagem de controles físicos;
- simuladores;
- sistemas embarcados interativos;
- aplicações educacionais;
- projetos de computação física e entretenimento.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
