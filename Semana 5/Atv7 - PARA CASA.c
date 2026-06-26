/*
    Escreva um programa em C que consista no seguinte menu:
    [1] Cadastrar Funcionário
    [2] Alterar Salário
    [3] Alterar Cargo
    [4] Sair

    Regras:
    1. Funcionário possui Nome, Salário e Cargo
    2. O programa só poderá ser encerrado quando o usuário escolher a opção 4 do menu.
    3. O programa deverá permitir a inclusão de ATÉ 10 funcionários, ou seja,
    pode ser 1 apenas ou mais (limite de 10).
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define MAX_FUNC 10

typedef struct
{
    char nome[20], cargo[20];
    int matricula;
    float salario;
} DADOS_FUNC;

int main () {
    setlocale(LC_ALL, "Portuguese");

    DADOS_FUNC funcionarios[MAX_FUNC];
    int opcao, qt_func = 0, busca_matricula;
    system("clear");

    do {
        printf("======== MENU =========\n"
                "[1] Cadastrar Funcionário\n"
                "[2] Alterar Salário\n"
                "[3] Alterar Cargo\n"
                "[4] Sair\n"
                "Escolha uma das opções acima: ");
        scanf("%d", &opcao);
        getchar();
        system("clear");

        switch (opcao) {
            case 1:
                if (qt_func >= 10) {
                    printf(">> Não é permitido o cadastro de mais funcionários. <<\n\n");
                } else {
                    printf("Informe o nome do funcionário: ");
                    fgets(funcionarios[qt_func].nome, sizeof(funcionarios[qt_func].nome), stdin);
                    funcionarios[qt_func].nome [ strcspn(funcionarios[qt_func].nome, "\n") ] = '\0';
                    system("clear");

                    printf("Informe o cargo de %s: ", funcionarios[qt_func].nome);
                    fgets(funcionarios[qt_func].cargo, sizeof(funcionarios[qt_func].cargo), stdin);
                    funcionarios[qt_func].cargo [ strcspn(funcionarios[qt_func].cargo, "\n") ] = '\0';
                    system("clear");

                    printf("Informe o salário de %s: ", funcionarios[qt_func].nome);
                    scanf("%f",&funcionarios[qt_func].salario);
                    getchar();
                    system("clear");

                    funcionarios[qt_func].matricula = 10000+qt_func;

                    qt_func++;
                }
                break;
            case 2:
                do {
                    printf("Qual a matricula do funcionário que você deseja alterar o salário? ");
                    scanf("%d", &busca_matricula);
                    getchar();
                    system("clear");

                    if (busca_matricula < 10000) {
                        printf("A matricula informada é inválida. Tente novamente. \n");
                    }

                }while(busca_matricula < 10000);

                for (int i = 0; i < qt_func; i++) {
                    if (busca_matricula == funcionarios[i].matricula) {
                        float temp;
                        printf("Qual o novo salário do funcionário %s? ", funcionarios[i].nome);
                        scanf("%f", &temp);
                        getchar();
                        system("clear");
                        printf(">> O salário de %s foi alterado de %.2f para %.2f. << \n\n", funcionarios[i].nome, funcionarios[i].salario, temp);
                        funcionarios[i].salario = temp;
                        busca_matricula = -100;
                        continue;
                    }
                }

                if (busca_matricula != -100 ) {
                    printf(">> A matricula informada não foi localizada. <<\n\n");
                }

                break;
            case 3:
                do {
                    printf("Qual a matricula do funcionário que você deseja alterar o salário? ");
                    scanf("%d", &busca_matricula);
                    getchar();
                    system("clear");

                    if (busca_matricula < 10000) {
                        printf("A matricula informada é inválida. Tente novamente. \n");
                    }

                }while(busca_matricula < 10000);

                for (int i = 0; i < qt_func; i++) {
                    if (busca_matricula == funcionarios[i].matricula) {
                        char novo_cargo[20];
                        printf("Qual o novo cargo do funcionário %s? ", funcionarios[i].nome);
                        fgets(novo_cargo, sizeof(novo_cargo), stdin);
                        novo_cargo [ strcspn (novo_cargo, "\n")] = '\0';
                        system("clear");

                        printf(">> O cargo de %s foi alterado de %s para %s. << \n\n", funcionarios[i].nome, funcionarios[i].cargo, novo_cargo);
                        strcpy (funcionarios[i].cargo, novo_cargo);
                        //strcpy(novo_cargo, "joao");
                        busca_matricula = -100;
                        continue;
                    }
                }

                if (busca_matricula != -100 ) {
                    printf(">> A matricula informada não foi localizada. <<\n\n");
                }

                break;
            case 4:
                printf("Encerrando o sistema...");
                return 0;
            default:
                printf(">> Opção inválida. Tente novamente. << \n\n");
        }

    } while(1);

}