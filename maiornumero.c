#include <stdio.h>
#include <stdlib.h>

int main(void) {

    system("chcp 65001 > nul");
    int num;
    int maior = 0;


    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d° número: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
    }

    printf("O maior número da lista é %d", maior);

    return 0;
}