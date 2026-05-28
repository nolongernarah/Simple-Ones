#include <stdio.h>

void soma_matrizes (int a[3][3], int b[3][3], int c[3][3]){

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void imprimir_matriz(int a[3][3]) {

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}


int main() {

    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int b[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int c[3][3] = {0};

    soma_matrizes(a, b, c);

    printf("Matriz A:\n");
    imprimir_matriz(a);

    printf("Matriz B:\n");
    imprimir_matriz(b);

    printf("\nMatriz C (A + B):\n");
    imprimir_matriz(c);

    return 0;
}