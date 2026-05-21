#include <stdio.h>
#include <stdlib.h>

int main (void) {
    system("chcp 65001 > nul");

    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    while (nota < 0 || nota > 10) {

        printf("Nota inválida! Digite novamente (0 a 10): ");
        scanf("%f", &nota);

    }

    printf("Nota %.2f cadastrada com sucesso!");

    return 0;
}
