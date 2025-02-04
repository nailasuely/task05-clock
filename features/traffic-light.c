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

void alternarSemaforo() {
    if (estado == 0) {  
        gpio_put(pinoVermelho, 0);
        gpio_put(pinoAmarelo, 1);
        estado = 1;
    } 
    else if (estado == 1) {  
        gpio_put(pinoAmarelo, 0);
        gpio_put(pinoVerde, 1);
        estado = 2;
    } 
    else {  
        gpio_put(pinoVerde, 0);
        gpio_put(pinoVermelho, 1);
        estado = 0;
    }
}
