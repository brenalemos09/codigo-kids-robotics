# Aula 10 — Sensor de Som

## Objetivo

Aprender a utilizar um sensor de som para detectar ruídos no ambiente e controlar automaticamente o movimento de um robô móvel.

Nesta aula foi desenvolvido um sistema capaz de interpretar a intensidade sonora captada pelo sensor e acionar os motores do robô quando um nível mínimo de som é detectado.

---

## Conteúdos estudados

- Sensor de Som
- Entradas analógicas
- Leitura de sensores (`analogRead()`)
- Motores DC
- Ponte H (Driver de Motores)
- Controle PWM
- Comunicação Serial
- Estruturas condicionais (`if`)
- Automação baseada em sensores

---

## Componentes utilizados

- Arduino Uno
- Chassi robótico
- 2 Motores DC
- Driver de Motores (Ponte H)
- Sensor de Som
- Fonte de alimentação
- Protoboard
- Jumpers
- Cabo USB

---

## Projeto desenvolvido

### Carro Sonoro

Foi desenvolvido um robô móvel capaz de responder automaticamente à presença de sons no ambiente.

O Arduino realiza continuamente a leitura do sensor de som e monitora a intensidade do sinal analógico recebido.

Quando o valor ultrapassa o limite definido no programa, o robô inicia seu deslocamento para frente em velocidade máxima durante um curto intervalo de tempo.

Na ausência de sons acima do limite estabelecido, os motores permanecem desligados, mantendo o robô parado.

Durante toda a execução, os valores lidos pelo sensor são exibidos no Monitor Serial para facilitar a calibração e o acompanhamento do funcionamento do sistema.

---

## Tecnologias utilizadas

- Arduino IDE
- Linguagem C/C++
- Arduino Uno

---

## Estrutura dos arquivos

```text
Aula-10-Sensor-de-Som/
├── README.md
└── Aula010.ino
```

---

## Aprendizados

Ao concluir esta aula, foram desenvolvidas as seguintes competências:

- Utilização de sensores de som
- Leitura de sinais analógicos
- Controle automático de motores DC
- Integração entre sensores e atuadores
- Desenvolvimento de sistemas embarcados reativos
- Utilização da Comunicação Serial para monitoramento
- Automação baseada em eventos sonoros

---

## Aplicações práticas

Os conceitos desta aula são utilizados em:

- Robôs ativados por voz ou som
- Sistemas de monitoramento acústico
- Automação residencial
- Dispositivos inteligentes
- Sistemas de segurança
- Robótica educacional
- Sistemas embarcados interativos

---

## Autor

**Brena Vitória Aguiar Lemos**

Estudante de Ciência da Computação — UNIFOR

GitHub: https://github.com/brenalemos09
