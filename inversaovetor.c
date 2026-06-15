#include <stdio.h>

int main(void) {

    int vetor[5] = {1, 2, 3 ,4 ,5};

    printf("Vetor invertido: ");
    for (int i = 4; i >= 0; i--) {

        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}