#include <stdio.h>

int calcular_fatorial(int n) {
    int resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}


int main(void) {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    int fat = calcular_fatorial(numero);

    printf("O fatorial de %d eh: %d\n",numero, fat);

    return 0;
}