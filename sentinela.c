#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");

    int num;
    int soma = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    while (num != 999) {
        soma = soma + num;

        printf("Digite outro (ou 999 para parar): ");
        scanf("%d", &num);


    }

    printf("A soma dos números digitados é %d", soma);

    return 0;
}