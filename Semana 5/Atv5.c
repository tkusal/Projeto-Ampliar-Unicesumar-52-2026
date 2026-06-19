/*
    Escreva um programa em C que faça o cadastro de um funcionário.
    O funcionário tem: Nome, Idade, Salário e Endereço. Porém, o endereço é formado por Rua,
    Número e Bairro.

    O programa deverá escrever na tela o nome do funcionário e o endereço completo dele.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char rua[50], bairro[20];
    int numero;
} ENDERECO;

typedef struct {
    char nome[50];
    int idade;
    float salario;
    ENDERECO endereco;
} CADASTRO;

int main() {
    setlocale(LC_ALL, "Portuguese");

    CADASTRO funcionario;

    printf("Informe o nome: ");
    fgets( funcionario.nome, sizeof(funcionario.nome), stdin);
    funcionario.nome[strcspn(funcionario.nome , "\n")] = '\0';

    printf("Informe a rua do endereço: ");
    fgets(funcionario.endereco.rua, sizeof(funcionario.endereco.rua), stdin);
    funcionario.endereco.rua[strcspn(funcionario.endereco.rua, "\n")] = '\0';

    printf("Informe o número do endereço: ");
    scanf("%d", &funcionario.endereco.numero);
    getchar();

    printf("Informe o bairro: ");
    fgets(funcionario.endereco.bairro, sizeof(funcionario.endereco.bairro), stdin);
    funcionario.endereco.bairro[strcspn(funcionario.endereco.bairro, "\n")] = '\0';

    printf("Informe a idade: ");
    scanf("%d", &funcionario.idade);
    getchar();

    printf("Informe o salario: ");
    scanf("%f", &funcionario.salario);
    getchar();

    printf("\nNome: %s \n", funcionario.nome);
    printf("Endereço: %s, %d - %s\n", funcionario.endereco.rua, funcionario.endereco.numero, funcionario.endereco.bairro);
    printf("Idade: %d anos \nSalario: R$%.2f", funcionario.idade, funcionario.salario);

    return 0;
}