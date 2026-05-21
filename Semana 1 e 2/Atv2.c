/*
    Escreva um algoritmo em C que leia dois números e escreva o resultado da soma deles.
*/

#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Informe o primeiro número: ");
    scanf("%d", &numero1);
    printf("Informe o segundo número: ");
    scanf("%d", &numero2);

    int resultado = numero1 + numero2;
    printf("Soma = %d \n", resultado);

    printf("Soma = %d", numero1 + numero2);

    return 0;
}