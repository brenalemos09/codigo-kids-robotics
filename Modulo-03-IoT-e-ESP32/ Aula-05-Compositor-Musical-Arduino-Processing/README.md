# Aula 05 — Compositor Musical com Arduino e Processing

## Objetivo

Desenvolver um sistema capaz de criar e reproduzir melodias utilizando uma interface gráfica construída em Processing e um Arduino responsável pela geração dos sons através de um buzzer.

Nesta aula foi explorada a comunicação serial entre Processing e Arduino, permitindo que notas musicais selecionadas pelo usuário fossem enviadas em tempo real ao microcontrolador para reprodução.

---

## Conteúdos estudados

- Comunicação Serial entre Processing e Arduino
- Envio e recebimento de dados pela porta serial
- Desenvolvimento de interfaces gráficas no Processing
- Manipulação de imagens na interface
- Utilização de tabelas CSV para armazenamento de frequências musicais
- Organização de notas musicais em estruturas de dados
- Reprodução de sons utilizando a função `tone()`
- Gravação e reprodução de sequências musicais
- Manipulação de eventos de mouse
- Estruturas condicionais e de repetição

---

## Componentes utilizados

### Hardware

- Arduino
- Buzzer (alto-falante piezoelétrico)
- Cabo USB

### Software

- Arduino IDE
- Processing IDE

---

## Projeto desenvolvido

Foi desenvolvido um compositor musical interativo.

A interface construída em Processing simula o braço de um instrumento de cordas. Conforme o usuário movimenta e clica com o mouse sobre as posições disponíveis, a aplicação identifica automaticamente a nota correspondente.

Cada nota é enviada pela comunicação serial ao Arduino no formato:

```
frequência;tempo
```

O Arduino recebe esses dados e utiliza a função `tone()` para reproduzir o som através do buzzer.

Além da reprodução em tempo real, a aplicação permite:

- gravar notas;
- registrar a duração de cada nota;
- apagar a última nota;
- limpar toda a composição;
- inserir intervalos (pausas);
- reproduzir toda a sequência criada.

Os valores das notas musicais são carregados automaticamente a partir de um arquivo CSV, facilitando a manutenção e expansão do projeto.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C++
- Processing
- Biblioteca Serial do Processing
- Comunicação Serial (UART)
- Arquivos CSV
- Manipulação de imagens

---

## Estrutura dos arquivos

```text
Aula-05-Compositor-Musical-Arduino-Processing/

├── README.md
│
├── playback/
│   ├── playback.ino
│   └── pitches.h
│
└── Compositor/
    ├── Compositor.pde
    ├── Guitar.pde
    ├── Back.png
    ├── data.CSV
    ├── HarryPotter.txt
    ├── index.txt
    └── Compositor.rar
```

### playback.ino

Responsável pela comunicação serial com o computador e reprodução das notas utilizando o buzzer.

### pitches.h

Arquivo auxiliar contendo definições relacionadas às frequências das notas (biblioteca de apoio).

### Compositor.pde

Implementa toda a interface gráfica, captura das interações do usuário, comunicação serial e gerenciamento da composição musical.

### Guitar.pde

Responsável pela representação gráfica do braço do instrumento e pelo mapeamento das posições para as notas musicais.

### data.CSV

Tabela contendo o mapeamento entre índices, nomes das notas e suas respectivas frequências em Hertz.

### Back.png

Imagem utilizada como plano de fundo da interface.

### HarryPotter.txt

Arquivo de texto presente no projeto, possivelmente utilizado como exemplo de composição musical.

### index.txt

Arquivo auxiliar utilizado pelo projeto.

### Compositor.rar

Arquivo compactado contendo uma versão do projeto.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos importantes sobre:

- comunicação entre aplicações desktop e microcontroladores;
- transmissão de dados pela porta serial;
- desenvolvimento de interfaces gráficas com Processing;
- manipulação de listas e estruturas de dados;
- utilização de arquivos CSV como fonte de dados;
- sincronização entre software e hardware;
- reprodução de áudio utilizando Arduino;
- organização modular de projetos.

---

## Dependências

### Arduino

- Biblioteca padrão do Arduino
- Função `tone()`

### Processing

- `processing.serial.*`

Não foram identificadas bibliotecas externas adicionais.

---

## Aplicações práticas

Os conceitos desta aula podem ser utilizados em projetos como:

- instrumentos musicais digitais;
- interfaces homem-máquina (HMI);
- sistemas interativos educacionais;
- controladores MIDI personalizados;
- jogos musicais;
- painéis de controle industriais;
- aplicações de IoT com interfaces gráficas;
- prototipagem rápida de sistemas embarcados.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
