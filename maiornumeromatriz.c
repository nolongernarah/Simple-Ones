#include <stdio.h>

int main(void) {

    int matrizA[3][4] = {

        {3, 8, 16, 19},
        {4, 5, 10, 20},
       {70, 80, 90, 100}
    };
    int maior = matrizA[0][0];
    int linhamaior = 0;
    int colunamaior = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrizA[i][j] > maior) {
                maior = matrizA[i][j];
                linhamaior = i;
                colunamaior = j;
            }
        }
    }

    printf("O maior numero da Matriz 3X4 e %d, encontrado na linha %d, coluna %d", maior, linhamaior, colunamaior);
    return 0;

}