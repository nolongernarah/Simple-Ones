#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("chcp 65001 > nul");

    int num, num2;
    int somatorio = 0;

    printf("Digite o número inicial: ");
    scanf("%d", &num);

    printf("Digite o número final: ");
    scanf("%d", &num2);

    int inicio = num;

    while (num <= num2) {

        somatorio = somatorio + num;
        num++;

    }

    printf("A soma  entre %d e %d é %d", inicio, num2, somatorio);

    return 0;
}