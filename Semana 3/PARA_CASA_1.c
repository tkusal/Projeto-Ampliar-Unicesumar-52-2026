/*
    Crie um programa que simule um sistema de login.
    - senha correta: 1234
    - O usuário pode tentar logar no máximo 5 vezes, após isso deverá encerar o progrando dizendo atingiu o limite.
    - A cada erro informe ao usuário.
    - Se acertar a senha, exiba "Bem-vindo ao sistema".
*/

#include <stdio.h>

#define senhaCorreta 1234
#define maximoTentativas 5

int main() {
    int senhaFornecida;

    for (int i = 1; i <= maximoTentativas; i++) {
        printf("Informe a senha: ");
        scanf("%d", &senhaFornecida);

        if (senhaFornecida == senhaCorreta) {
            printf("Bem-vindo ao sistema.");
            return 0;
        } else {
            printf("Senha inválida. Tente novamente.\nRestam %d tentantivas\n", maximoTentativas-i);
        }
    }

    printf("Você atingiu a quantidade de máxima de tentativas.");

    return 0;
}