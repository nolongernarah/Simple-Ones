#include <stdio.h>
#include <stdlib.h>

int main(void) {

    system("chcp 65001 > nul");

    int soma = 0;

    for (int i = 1; i <= 100; i++) {

        soma = soma + i;
    }
    printf("A soma de dos números de 1 a 100 é %d", soma);

    return 0;
}
