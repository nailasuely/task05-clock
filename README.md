<h1 align="center">
  <br>
    <img width="300px" src="https://github.com/nailasuely/task05-clock/blob/main/src/logo.png">
  <br>
  Capítulo 5 - Clock e Temporizadores
  <br>
</h1>
<div align="center">
  
Este projeto tem como objetivo utilizar o Raspberry Pi Pico W para implementar sistemas de temporização 
com **temporizadores periódicos** e **temporizadores de um disparo (one-shot)**. Então, foram desenvolvidas
duas atividades: um **semáforo automático** e um **controle de LEDs acionado por botão**.
</div>

<details open="open">
<summary>Sumário</summary>
  
- [Requisitos](#requisitos)
- [Componentes Utilizados](#componentes-utilizados)
- [Estrutura do Projeto](#estrutura-do-projeto)
- [Funcionalidades](#funcionalidades)
  - [Atividade 1: Semáforo com Temporizador Periódico](#atividade-1-semáforo-com-temporizador-periódico)
  - [Atividade 2: Controle de LEDs com Temporizador One Shot](#atividade-2-controle-de-leds-com-temporizador-one-shot)
- [Como Executar](#como-executar)
  - [Pré-requisitos](#pré-requisitos)
  - [Passos para Execução](#passos-para-execução)
- [Vídeo Demonstração](#vídeo-de-demonstração)
- [Autora](#autora)

</details>

---

## 📌 **Requisitos**

- Implementação no **Raspberry Pi Pico W** utilizando a **Pico SDK**.
- Uso dos **temporizadores** `add_repeating_timer_ms()` e `add_alarm_in_ms()`.
- Simulação no **Wokwi** e **BitDogLab**.
- Mensagens no **monitor serial** a cada segundo.
- Código estruturado em **módulos separados**.
- Utilização de **LEDs e botões** para controle.

---

## 🔧 **Componentes Utilizados**
### Atividade 1 - Semáforo
- Raspberry Pi Pico W
- 3 LEDs (vermelho, amarelo e verde)
- 3 Resistores de 330Ω

### Atividade 2 - One Shot (Controle por Botão)
- Raspberry Pi Pico W
- 3 LEDs (azul, vermelho e verde)
- 1 Botão (Pushbutton)
- 3 Resistores de 330Ω

![---](https://github.com/nailasuely/task05-clock/blob/main/src/prancheta.png)

## 📂 **Estrutura do Projeto**
- **main.c**: Inicializa o sistema e permite escolher entre as atividades.
- **semaforo.c**: Controla o semáforo com `add_repeating_timer_ms()`.
- **one-shot.c**: Controla os LEDs com `add_alarm_in_ms()`, ativados por botão.
- **time.c**: Gerencia temporizadores e callbacks.  

---
