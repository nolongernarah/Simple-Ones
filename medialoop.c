#include <stdio.h>
#include <stdlib.h>

int main (void) {
    system("chcp 65001 > nul");
    int num;
    int soma = 0;
    float media;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d° número: ", i);
        scanf("%d", &num);

        soma = soma + num;

    }
    media = soma / 10.0;

    printf("A média dos número é: %.2f", media);

    return 0;

}
