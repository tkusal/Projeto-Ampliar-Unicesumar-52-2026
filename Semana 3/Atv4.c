/*
    Escreva um algoritmo em C que exiba na tela todos os números ímpares entre 53 e 98.
*/

#include <stdio.h>

int main() {
    int i;

    for (i = 53 ; i <=98 ; i++) {
        if (i % 2 != 0) {
            printf("%d \n", i);
        }
    }

    return 0;
}