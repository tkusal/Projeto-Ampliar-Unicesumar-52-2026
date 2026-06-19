/*
    Escreva um programa que receba 4 notas de um aluno e as informações dele (Nome, Idade).
    O programa deverá informar na tela o nome do aluno, a idade e a média das notas.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[50];
    int idade;
    float notas[4];
    float media;
} DADOS;

int main() {
    setlocale (LC_ALL, "Portuguese");

    DADOS aluno;

    printf("Informe o nome: ");
    fgets( aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome [ strcspn (aluno.nome, "\n") ] = '\0';

    printf("Informe a idade: ");
    scanf("%d", &aluno.idade);
    getchar();

    aluno.media = 0;

    for (int i = 0; i < 4; i++) {
        printf("Informe a nota %d: ", i+1);
        scanf("%f", &aluno.notas[i]);

        aluno.media += aluno.notas[i];
    }
    getchar();

    aluno.media /= 4;

    printf("Nome: %s \nIdade: %d anos \nMédia: %.2f \n", aluno.nome, aluno.idade, aluno.media);

    if (aluno.media >= 7) {
        printf("Status: Aprovado.");
    } else {
        printf("Status: Reprovado.");
    }

    return 0;
}