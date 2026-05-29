/*
    Escreva um programa que leia 10 números inteiros.
    O programa deverá informar qual o maior e qual o menor número.
*/

#include <stdio.h>

int main() {
    int numero, maior = 0, menor = 0;

    for (int i = 1 ; i < 11 ; i++) {
        printf("Digite o número: ");
        scanf("%d", &numero);

        /*
            if (i == 1) {
                maior = numero;
                menor = numero;
            }
        */

        if (numero > maior || maior == 0) {
            maior = numero;
        }

        if (numero < menor || menor == 0) {
            menor = numero;
        }
    }

    printf("Maior valor = %d \nMenor valor = %d", maior, menor);

    return 0;
}