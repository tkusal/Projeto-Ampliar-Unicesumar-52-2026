/*
    Escreva um algortimo que exiba na tela os valores de uma matriz 3x3.
*/

#include <stdio.h>

int main() {
    float matrizTeste[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Informe o valor [%d][%d]:", i, j);
            scanf("%f", &matrizTeste[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("Linha %d: ", i);
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", matrizTeste[i][j]);
        }
        printf("\n");
    }

    return 0;
}