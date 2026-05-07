#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("chcp 65001 > nul");

    int num = 0;
    int soma = 0;

    printf("Digite um numero (ou -1 para parar): ");
    scanf("%d", &num);

    while (num != -1) {
        soma = soma + num;

        printf("Digite o proximo numero (ou -1 para parar): ");
        scanf("%d", &num);


    }

    printf("A soma dos números digitados é %d", soma);

    return 0;

}