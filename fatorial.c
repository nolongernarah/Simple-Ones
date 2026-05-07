#include <stdio.h>

int main(void) {

    int num;
    long fat = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {

        fat = fat * i;

    }

    printf("O fatorial de %d e %ld", num, fat);

}
