#include <stdio.h>
#include "pico/stdlib.h"
#include "features/time.c"
#include "features/traffic-light.c"
#include "features/one-shot.c"


void menu() {
    printf("\n======= MENU =======\n");
    printf("1 - Semáforo (Atividade 1)\n");
    printf("2 - Temporizador de um Disparo (Atividade 2)\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    stdio_init_all();  
    int escolha;

    while (1) {
        menu();
        if (scanf("%d", &escolha) != 1) { 
            printf("Entrada inválida! Digite um numero valido\n");
            while (getchar() != '\n');  // Limpa buffer 
            continue;
        }

        switch (escolha) {
            case 1:
                printf("Iniciando Atividade 1: Semáforo\n");
                iniciarSemaforo();
                iniciarTemporizador();
                while (1) {
                    printf("Semáforo operando...\n");
                    sleep_ms(1000);
                }
                break;

            case 2:
                printf("Iniciando Atividade 2: Temporizador\n");
                configurarBotao();
                while (1) {
                    printf("Aguardando o botão...\n");
                    sleep_ms(1000);
                }
                break;

            case 0:
                printf("Encerrando programa...\n");
                return 0;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    }
}
