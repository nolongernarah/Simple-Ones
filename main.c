#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("chcp 65001 > nul");

    int num, primo = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num <= 1) {
        primo = 0;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo) {
        printf("%d é primo.\n", num);
    }
    else {
        printf("%d não é primo\n", num);
    }
    return 0;
}
