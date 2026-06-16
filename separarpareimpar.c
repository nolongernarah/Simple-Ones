#include <stdio.h>

void separar_numeros(int original[6]) {
    int pares[6];
    int impares[6];

    int cont_par = 0;
    int cont_impar = 0;

    for (int i = 0; i < 6; i++) {
        if (original[i] % 2 == 0) {
            pares[cont_par] = original[i];
            cont_par++;
        } else {
            impares[cont_impar] = original[i];
            cont_impar++;
        }
    }
    printf("\nNumeros Pares: ");
    for (int i = 0; i < cont_par; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nNumeros Impares: ");
    for (int i = 0; i < cont_impar; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");
}


int main(void) {
    int vetor_base[6] = {12, 7, 4, 9, 21, 8};

    printf("Vetor original: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor_base[i]);
    }

    separar_numeros(vetor_base);

    return 0;
}