/*
    Escreva um programa que receba a categoria da CNH de uma pessoa.
    Baseado na categoria, o programa deverá informar qual tipo de veículo a pessoa pode dirigir.

    Categoria A = Moto
    Categoria B = Carro
    Categoria C = Caminhões pequenos
    Categoria D = Ônibus
    Categoria E = Carretas
*/

#include <stdio.h>

int main() {
    char categoria;

    printf("Informe a categoria da sua CNH: ");
    scanf("%c", &categoria);

    if (categoria == 'A' || categoria == 'a') {
        printf("Pode dirigir motos.");
    } else if (categoria == 'B') {
        printf("Pode dirigir carros.");
    } else if (categoria == 'C') {
        printf("Pode dirigir caminhões pequenos.");
    } else if (categoria == 'D') {
        printf("Pode dirigir ônibus.");
    } else if (categoria == 'E') {
        printf("Pode dirigir carretas.");
    } else {
        printf("A categoria informada é inválida.");
    }

    /*
    switch (categoria) {
        case 'A':
            printf("Pode dirigir motos.");
            break;
        case 'B':
            printf("Pode dirigir carros.");
            break;
        case 'C':
            printf("Pode dirigir caminhões pequenos.");
            break;
        case 'D':
            printf("Pode dirigir ônibus.");
            break;
        case 'E':
            printf("Pode dirigir carretas.");
            break;
        default:
            printf("A categoria informada é inválida.");
            break;
    }
    */

    return 0;
}