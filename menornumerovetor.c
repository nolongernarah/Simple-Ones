#include <stdio.h>

int main(void) {
    int numeros[6];

    printf("Digite 6 numeros separados por espaco:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numeros[i]);
    }

    int menor = numeros[0];
    int posicao_menor = 0;

    for (int i = 0; i < 6; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
            posicao_menor = i;
        }

    }
    printf("O menor numero e: %d\n", menor);
    printf("Ele esta na posicao (indice): %d\n", posicao_menor);

    return 0;
}