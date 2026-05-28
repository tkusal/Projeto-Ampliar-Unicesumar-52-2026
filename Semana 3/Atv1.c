/*
    Escreva um programa que exiba na tela a contagem regressiva de 20 até 0.
*/

#include <stdio.h>

int main() {

    for (int i = 20 ; i >= 0 ; i = i-1 ) // i-=1    i--
    {
        printf("%d ", i);
    }

    return 0;
}