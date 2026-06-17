/*
    Escreva um algoritmo que leia um nome e escreva-o na tela.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[20];

    printf("Informe seu nome: ");
    fgets( nome, sizeof(nome), stdin);
    nome[ strcspn( nome, "\n") ] = '\0';

    printf("O nome é %s e essa pessoa é brasileira.", nome);

    return 0;
}