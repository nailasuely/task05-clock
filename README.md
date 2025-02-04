<h1 align="center">
  <br>
    <img width="300px" src="https://github.com/nailasuely/task05-clock/blob/main/src/logo.png">
  <br>
  Capítulo 5 - Clock e Temporizadores
  <br>
</h1>
<div align="center">

<h4 align="center">Projeto da Residência Tecnológica em Sistemas Embarcados </h4>

<p align="center">
<div align="center">

[![MIT License](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/nailasuely/task05-clock/blob/main/LICENSE)


> Este projeto tem como objetivo utilizar o Raspberry Pi Pico W para implementar sistemas de temporização 
com **temporizadores periódicos** e **temporizadores de um disparo (one-shot)**. Então, foram desenvolvidas
duas atividades: um **semáforo automático** e um **controle de LEDs acionado por botão**.
> 
## Download do repositório
<p align="center">
  
 ``` gh repo clone nailasuely/task05-clock ```
</p>


</div>
</div>

<details open="open">
<summary>Sumário</summary>

- [📌 Requisitos](#-requisitos)
- [🔧 Componentes Utilizados](#-componentes-utilizados)
- [📂 Estrutura do Projeto](#-estrutura-do-projeto)
- [⚙️ Funcionalidades](#%EF%B8%8F-funcionalidades)
  - [📍 Atividade 1: Semáforo com Temporizador Periódico](#-atividade-1-semáforo-com-temporizador-periódico)
  - [📍 Atividade 2: Controle de LEDs com Temporizador One Shot](#-atividade-2-controle-de-leds-com-temporizador-one-shot)
- [🚀 Como Executar](#-como-executar)
  - [✅ Pré-requisitos](#-pré-requisitos)
  - [📌 Passos para Execução](#-passos-para-execução)
- [🎥 Vídeo Demonstração](#-vídeo-demonstração)
- [👩‍💻 Autora](#-autora)

</details>

![---](https://github.com/nailasuely/task05-clock/blob/main/src/prancheta.png)

## 📌 Requisitos

- Implementação no **Raspberry Pi Pico W** utilizando a **Pico SDK**.
- Uso dos **temporizadores** `add_repeating_timer_ms()` e `add_alarm_in_ms()`.
- Simulação no **Wokwi** e **BitDogLab**.
- Mensagens no **monitor serial** a cada segundo.
- Código estruturado em **módulos separados**.
- Utilização de **LEDs e botões** para controle.

![---](https://github.com/nailasuely/task05-clock/blob/main/src/prancheta.png)

## 🔧 Componentes Utilizados
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

## 📂 Estrutura do Projeto
- **main.c**: Inicializa o sistema e permite escolher entre as atividades.
- **semaforo.c**: Controla o semáforo com `add_repeating_timer_ms()`.
- **one-shot.c**: Controla os LEDs com `add_alarm_in_ms()`, ativados por botão.
- **time.c**: Gerencia temporizadores e callbacks.  

![---](https://github.com/nailasuely/task05-clock/blob/main/src/prancheta.png)

## ⚙️ Funcionalidades

### 📍 Atividade 1: Semáforo com Temporizador Periódico  
O semáforo alterna entre os LEDs vermelho, amarelo e verde a cada **3 segundos**.
A lógica usa a função `add_repeating_timer_ms()`.

### 📍 Atividade 2: Controle de LEDs com Temporizador One Shot  
O sistema aciona os LEDs ao pressionar um **botão** (GPIO 5):  
1. **Todos os LEDs acendem**  
2. Após **3 segundos**, os LEDs vão se apagando um a um.
O botão só pode ser acionado novamente quando todos os LEDs estiverem apagados.

![---](https://github.com/nailasuely/task05-clock/blob/main/src/prancheta.png)

## 🚀 Como Executar  

### ✅ Pré-requisitos  
- **VS Code** com ambiente do **Pico SDK** configurado  
- **CMake** instalado  
- **Simulador Wokwi** e **BitDogLab** integrados  
- **Placa Raspberry Pi Pico W** (caso execute em hardware real)  

### 📌 Passos para Execução  
1. Clone o repositório:  
   ```sh
   git clone https://github.com/nailasuely/task05-clock.git
   cd task05-clock ```
2. Compile e suba o código para o Pico W ou execute no simulador Wokwi.

## 🎥 Vídeo de Demonstração
[Link]()

![---](https://github.com/nailasuely/task05-clock/blob/main/src/prancheta.png)

## 👩‍💻 Autora

<table>
  <tr>
    <td align="center">
      <a href="https://github.com/nailasuely" target="_blank">
        <img src="https://avatars.githubusercontent.com/u/98486996?v=4" width="100px;" alt=""/>
      </a>
      <br /><sub><b> Naila Suele </b></sub>
    </td>

</table>


