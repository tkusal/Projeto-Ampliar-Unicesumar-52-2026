/*
    Escreva um algoritmo que leia um nome e escreva-o na tela.
*/

#include <stdio.h>

int main() {
    char nome[20];

    printf("Informe seu nome: ");
    scanf("%19[^\n]s", nome);

    printf("Nome = %s", nome);

    return 0;
}