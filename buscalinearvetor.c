#include <stdio.h>

int main(void) {

    int vetor[10] = {5, 12, 7, 21, 12, 8, 3, 12, 45, 9};
    int numerobusca;
    int encontrado = 0;


    printf("Digite um numero para buscar no vetor: ");
    scanf("%d", &numerobusca);

    for (int i = 0; i < 10; i++) {
        if (numerobusca == vetor[i]) {
            encontrado = 1;
            printf("O numero %d esta no vetor, na posicao %d\n", numerobusca, i);
        }
    }

    if (encontrado == 0) {
        printf("Numero nao encontrado no sistema.\n");
    }

    return 0;
}