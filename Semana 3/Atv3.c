/*
    Escreva um algoritmo que aumente o salário de uma usuário até que chegue em R$10.000,00
*/

#include <stdio.h>

int main() {
    float salario = 16021.00;

    do {
        salario = salario + (salario * 0.1);
        printf("Salário = %.2f  \n", salario);
    } while (salario < 10000.00);

    return 0;
}