#include "pico/stdlib.h"

// GPIOs do semáforo (BitDogLab)
const uint pinoVermelho = 13;
const uint pinoAmarelo = 12;
const uint pinoVerde = 11;

static int estado = 0;

void iniciarSemaforo() {
    gpio_init(pinoVermelho);
    gpio_init(pinoAmarelo);
    gpio_init(pinoVerde);

    gpio_set_dir(pinoVermelho, GPIO_OUT);
    gpio_set_dir(pinoAmarelo, GPIO_OUT);
    gpio_set_dir(pinoVerde, GPIO_OUT);

    gpio_put(pinoVermelho, 1);
    gpio_put(pinoAmarelo, 0);
    gpio_put(pinoVerde, 0);
}

//para simular amarelo na placa
/*
void alternarSemaforo() {
    if (estado == 0) {  // Vermelho
        gpio_put(pinoVermelho, 1);
        gpio_put(pinoAmarelo, 0); // Amarelo não existe, desligado
        gpio_put(pinoVerde, 0);
        estado = 1;
    } 
    else if (estado == 1) {  // Amarelo (Vermelho + Verde)
        gpio_put(pinoVermelho, 1);
        gpio_put(pinoVerde, 1);
        gpio_put(pinoAmarelo, 0); // Azul OFF
        estado = 2;
    } 
    else {  // Verde
        gpio_put(pinoVermelho, 0);
        gpio_put(pinoVerde, 1);
        gpio_put(pinoAmarelo, 0); // Azul OFF
        estado = 0;
    }
}
*/