/*
    Escreva um algotimo que aprsente o seguinte menu pro usuário:

    [1] Soma
    [2] Subtração
    [3] Divisão
    [4] Multiplicação
    [5] Sair

    - O programa deverá executar a operação entre 2 números reais que o usuário escolher e apresentar
    o resultado na tela
    - O programa só poderá ser finalizado quando o usuário escolher a opção de [5] Sair
*/

#include <stdio.h>

int main() {
    float num1, num2;
    int opc;

    do {
        printf("\n[1] Soma \n"
               "[2] Subtração \n"
               "[3] Divisão \n"
               "[4] Multiplicação \n"
               "[5] Sair \n"
               "Qual opção deseja? ");
        scanf("%d", &opc);

        if (opc >= 1 && opc <= 4) {
            printf("Informe o primeiro número: ");
            scanf("%f", &num1);
            printf("Informe o segundo número: ");
            scanf("%f", &num2);
        }

        switch(opc) {
            case 1:
                printf("%.1f + %.1f = %.1f\n", num1, num2, num1+num2);
                break;
            case 2:
                printf("%.1f - %.1f = %.1f\n", num1, num2, num1-num2);
                break;
            case 3:
                printf("%.1f / %.1f = %.1f\n", num1, num2, num1/num2);
                break;
            case 4:
                printf("%.1f * %.1f = %.1f\n", num1, num2, num1*num2);
                break;
            case 5:
                return 0;
            default:
                printf("Opção inválida.\n");

        }

    } while (1);

}