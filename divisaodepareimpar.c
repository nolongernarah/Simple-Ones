#include <stdio.h>

int main () {

    int valores[10] = {14, 23, 45, 66, 78, 91, 8, 12, 33, 5};

    int pares[10];
    int impares[10];

    int contadorPares = 0;
    int contadorImpares = 0;

    for (int i = 0; i < 10; i++) {

        if (valores[i] % 2 == 0) {
            pares[contadorPares] = valores[i];
            contadorPares += 1;
        }
        else {
            impares[contadorImpares] = valores[i];
            contadorImpares += 1;
        }

    }

    printf("Numeros PARES encontrados:\n");
    for (int i = 0; i < contadorPares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n\nNumeros IMPARES encontrados:\n");
    for (int i = 0; i < contadorImpares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;

}