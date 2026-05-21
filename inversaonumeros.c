#include <stdio.h>

int main() {

    int numeros[5] = {1, 2, 3, 4, 5};


    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    // Inverter a posição dos números
    for (int i = 0; i < 5 / 2; i++) {
        int temp = numeros[i];
        numeros[i] = numeros[5 - i - 1];
        numeros[5 - i - 1] = temp;

    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
