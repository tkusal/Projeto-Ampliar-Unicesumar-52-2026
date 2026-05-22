/*
    Escreva um programa em C que receba 2 notas e calcule a média.
*/

#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Escreva um nota: ");
    scanf("%f", &nota1);
    printf("Escreva outra nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) /2 ;

    printf("A media é: \n%.2f", media);

    return 0;
}