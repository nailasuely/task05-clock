#include "pico/stdlib.h"
#include "pico/time.h"

// GPIOs dos LEDs e do botão
const uint ledAzul = 11;
const uint ledVermelho = 12;
const uint ledVerde = 13;
const uint botao = 5;

volatile bool cicloAtivo = false;
static volatile uint32_t last_time = 0; // Para debounce

int64_t desligarVerde(alarm_id_t id, void *user_data);
int64_t desligarVermelho(alarm_id_t id, void *user_data);
int64_t desligarAzul(alarm_id_t id, void *user_data);

void iniciarSequencia() {
    if (cicloAtivo) return;  

    cicloAtivo = true;

    gpio_put(ledAzul, 1);
    gpio_put(ledVermelho, 1);
    gpio_put(ledVerde, 1);

    add_alarm_in_ms(3000, desligarVerde, NULL, false);
}

int64_t desligarVerde(alarm_id_t id, void *user_data) {
    gpio_put(ledVerde, 0);
    add_alarm_in_ms(3000, desligarVermelho, NULL, false);
    return 0;  
}

int64_t desligarVermelho(alarm_id_t id, void *user_data) {
    gpio_put(ledVermelho, 0);
    add_alarm_in_ms(3000, desligarAzul, NULL, false);
    return 0;  
}

int64_t desligarAzul(alarm_id_t id, void *user_data) {
    gpio_put(ledAzul, 0);
    cicloAtivo = false;  
    return 0; 
}

void gpio_irq_handler(uint gpio, uint32_t events) {
    uint32_t current_time = to_us_since_boot(get_absolute_time());

    if (current_time - last_time > 200000) { 
        last_time = current_time;
        iniciarSequencia();
    }
}

void configurarBotao() {
    gpio_init(ledAzul);
    gpio_init(ledVermelho);
    gpio_init(ledVerde);
    gpio_init(botao);

    gpio_set_dir(ledAzul, GPIO_OUT);
    gpio_set_dir(ledVermelho, GPIO_OUT);
    gpio_set_dir(ledVerde, GPIO_OUT);
    gpio_set_dir(botao, GPIO_IN);
    gpio_pull_up(botao);

    gpio_set_irq_enabled_with_callback(botao, GPIO_IRQ_EDGE_FALL, true, &gpio_irq_handler);
}
