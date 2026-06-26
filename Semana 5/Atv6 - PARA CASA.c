/*
    Escreva um programa em C que receba 5 números inteiros.
    O programa deverá apresentar na tela os 5 números em ordem decrescente.

    //Bubble Sort
*/

#include <stdio.h>

int main () {
    int aux, numeros[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o %do. numero: ", i+1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4-i; j++) {
            if (numeros[j] < numeros[j+1]) {
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
