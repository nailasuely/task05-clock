#include "pico/time.h"

extern void alternarSemaforo();

bool callback(struct repeating_timer *t) {
    alternarSemaforo();
    return true;
}

void iniciarTemporizador() {
    static struct repeating_timer timer;
    add_repeating_timer_ms(3000, callback, NULL, &timer);
}
