#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("chcp 65001 > nul");

    int base, expoente;
    int resultado = 1;
    int contador = 1;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    while (contador <= expoente) {

        resultado = resultado * base;
        contador++;

    }

    printf("%d elevado a %d é %d", base, expoente, resultado);

    return 0;
}