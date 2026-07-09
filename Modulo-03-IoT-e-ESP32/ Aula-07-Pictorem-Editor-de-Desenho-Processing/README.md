# Aula 07 — Pictorem: Editor de Desenho com Processing

## Objetivo

Desenvolver uma aplicação gráfica utilizando Processing para criação de desenhos digitais, permitindo ao usuário controlar propriedades como transparência, cores e espessura do pincel por meio de uma interface interativa.

Nesta aula foram explorados conceitos de desenvolvimento de interfaces gráficas, manipulação de eventos do mouse e desenho em tempo real.

---

## Conteúdos estudados

- Desenvolvimento de interfaces gráficas (GUI)
- Programação orientada a eventos
- Manipulação do mouse
- Desenho em tempo real
- Sistema de cores RGB
- Transparência (Alpha)
- Vetores utilizando `PVector`
- Renderização de formas geométricas
- Organização da interface gráfica
- Controle de propriedades do pincel

---

## Componentes utilizados

### Hardware

- Computador

### Software

- Processing IDE

---

## Projeto desenvolvido

Foi desenvolvido um pequeno editor de desenho chamado **Pictorem**.

A aplicação cria uma área de desenho onde o usuário pode pintar utilizando o mouse enquanto controla diversas propriedades do pincel através de um menu localizado na parte inferior da janela.

Entre os recursos implementados estão:

- ajuste da transparência;
- controle individual dos canais de cor (Red, Green e Blue);
- criação de um novo desenho;
- ajuste do tamanho do pincel;
- interface gráfica construída inteiramente em Processing.

A seleção das opções ocorre por meio da interação do mouse com botões circulares desenhados na interface, sendo utilizada a classe `PVector` para calcular a distância entre o cursor e cada botão.

---

## Tecnologias utilizadas

- Processing IDE
- Linguagem Java (Processing)
- Programação Gráfica
- Interface baseada em eventos

---

## Estrutura dos arquivos

```text
Aula-07-Pictorem-Editor-de-Desenho-Processing/

├── README.md
└── pictorem/
    └── pictorem.pde
```

### pictorem.pde

Arquivo principal da aplicação, responsável por:

- criação da janela gráfica;
- renderização da interface;
- desenho dos botões;
- controle das propriedades do pincel;
- manipulação das cores RGB;
- ajuste da transparência;
- processamento dos eventos do mouse.

---

## Aprendizados

Durante esta aula foram desenvolvidos conhecimentos importantes sobre:

- construção de interfaces gráficas;
- desenvolvimento de aplicações interativas;
- manipulação de eventos do mouse;
- utilização de vetores (`PVector`);
- controle de cores no padrão RGB;
- utilização de transparência em elementos gráficos;
- organização de interfaces utilizando primitivas gráficas do Processing.

---

## Dependências

### Processing

O projeto utiliza apenas os recursos nativos da linguagem Processing, não sendo necessárias bibliotecas externas.

---

## Aplicações práticas

Os conceitos apresentados podem ser utilizados em projetos como:

- aplicativos de desenho;
- softwares educacionais;
- ferramentas de anotação gráfica;
- interfaces homem-máquina (HMI);
- prototipação de interfaces;
- sistemas de edição gráfica;
- aplicações multimídia;
- desenvolvimento de jogos e softwares interativos.

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub:

https://github.com/brenalemos09
