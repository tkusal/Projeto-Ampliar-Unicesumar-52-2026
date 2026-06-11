/*
    Faça um programa que exiba na tela um cronometro de 2 minutos em contagem
    regressiva no molde de min:seg (2:00)

    DICA: FOR
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define minuto 5
#define segundo 59

int main() {

    for (int min = minuto; min >= 0; min--) {
        if (min == minuto) {
            system("clear");
            printf("%d:00\n", min);
            sleep(1);
            continue;
        }
        for (int seg = segundo; seg >= 0; seg--) {
            if (min == 0 && seg == 0) {
                system("clear");
                printf("O tempo acabou\n");
                break;
            }
            system("clear");
            printf("%d:%02d\n", min, seg);
            sleep(1);
        }
    }
    return 0;
}