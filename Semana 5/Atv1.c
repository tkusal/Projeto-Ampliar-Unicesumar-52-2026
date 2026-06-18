#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    int idade;
    float nota;
} tipoALUNO;

int main() {
    tipoALUNO estudante;

    printf("Informe o nome do aluno: ");
    fgets(estudante.nome, sizeof(estudante.nome), stdin);
    estudante.nome[ strcspn (estudante.nome, "\n") ] = '\0';

    printf("Informe a idade: ");
    scanf("%d", &estudante.idade);

    printf("Informe a nota: ");
    scanf("%f", &estudante.nota);

    printf("Nome = %s \n", estudante.nome);
    printf("Idade = %d \n", estudante.idade);
    printf("Nota = %.2f", estudante.nota);

    return 0;
}