/*
    Escreva um algotirmo em C que receba a idade de 10 pessoas e informe
    quem é a pessoa mais velha, quem é a pessoa mais nova e se essas pessoas são maior de idade ou
    menor de idade.
*/

#include <stdio.h>

int main() {
    int idades[10];

    for (int i = 0; i < 10; i++) {
        printf("Informe a idade %d: ", i+1);
        scanf("%d", &idades[i]);
    }

    int maisVelho = idades[0], maisNovo = idades[0];

    for (int i = 1; i < 10; i++) {
        if (idades[i] > maisVelho) {
            maisVelho = idades[i];
        }
        if (idades[i] < maisNovo) {
            maisNovo = idades[i];
        }
    }
    
    printf("\nO mais velho tem %d anos e é ", maisVelho);
    if (maisVelho >= 18) {
        printf("maior de idade.\n");
    } else {
        printf("menor de idade.\n");
    }
    printf("\nO mais novo tem %d anos e é ", maisNovo);
    if (maisNovo >= 18) {
        printf("maior de idade.\n");
    } else {
        printf("menor de idade.\n");
    }

    return 0;
}