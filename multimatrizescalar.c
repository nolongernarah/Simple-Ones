#include <stdio.h>
void multiplicar_matriz(int m[3][3], int escalar) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m[i][j] *= escalar;
        }
    }
}

int main(void) {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int numero = 2;

    multiplicar_matriz(matriz, numero);

    printf("Matriz multiplicada por %d:\n", numero);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}