/*
    Escreva um algoritmo que leia 5 números inteiro e depois escreva-os na tela.
*/

#include <stdio.h>

int main() {
    int numeros[5];

    for (int i = 0; i < 5; i++) {
        printf("Informe um número: ");
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}