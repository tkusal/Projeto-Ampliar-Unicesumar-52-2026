#include <stdio.h>
#include <string.h>

struct FUNCIONARIO {
    char nome[50];
    int idade;
    float salario;
};

int main() {
    struct FUNCIONARIO colaborador[3];

    for (int i = 0; i < 3; i++) {
        printf("Informe o nome do funcionário: ");
        fgets(colaborador[i].nome, sizeof(colaborador[i].nome), stdin);
        colaborador[i].nome[ strcspn (colaborador[i].nome, "\n") ] = '\0';

        printf("Informe a idade: ");
        scanf("%d", &colaborador[i].idade);
        getchar();

        printf("Informe o salário: ");
        scanf("%f", &colaborador[i].salario);
        getchar();
    }

    for (int i = 0; i < 3; i++) {
        printf("Nome = %s \n", colaborador[i].nome);
        printf("Idade = %d \n", colaborador[i].idade);
        printf("Salário = %.2f \n", colaborador[i].salario);
        printf("------------------\n");
    }

    return 0;
}