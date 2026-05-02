#include <stdio.h>
#include <stdlib.h>

int main(void) {

    system("chcp 65001 > nul");

    int senhaDigitada = 0;
    int senhaCorreta = 2026;
    int tentativas = 1;
    int limite = 3;

    while (senhaDigitada != senhaCorreta && tentativas <= limite) {

        printf(" Tentativa %d de %d - Digite a sua senha: ", tentativas, limite);
        scanf("%d", &senhaDigitada);

        if (senhaDigitada == senhaCorreta) {
            printf("\nAcesso liberado!\n");
        } else {
            if (tentativas < limite) {
                printf("Acesso negado! Tente novamente.\n\n ");
            } else {
                printf("\nConta bloqueada! Tentativa de limites excedido.\n");
            }
        }

        tentativas++;
    }

    return 0;

}