#include <stdio.h>
int soma_diagonal_secundaria(int m[3][3]) {
    int soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i + j == 2) {
                soma += m[i][j];
            }
        }
    }
    return soma;
}
int main(void) {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int resultado = soma_diagonal_secundaria(matriz);
    printf("A soma da diagonal secundaria e: %d\n", resultado);
    
    return 0;
}