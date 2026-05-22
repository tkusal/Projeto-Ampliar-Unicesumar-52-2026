/*
    Receba um programa onde a pessoa vai informar o salário dela e o
    programa deverá informar se é maior ou igual ou abaixo do salário mínimo.

    Salário mínimo: R$ 1.621,00
*/

#include <stdio.h>

int main() {
    float salario;

    printf("Informe seu salário: ");
    scanf("%f", &salario);

    if (salario >= 1621.00) {
        printf("Seu salário é maior ou igual ao salário mínimo.");
    } else {
        printf("Seu salário está abaixo do salário mínimo.");
    }

    return 0;
}