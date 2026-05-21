#include <stdio.h>

int main(void) {

    float nota[8] = {7.5, 4.2, 8.0, 6.5, 9.0, 5.5, 7.0, 6.0};

    float soma = 0;
    float media = 0;
    int alunosAcimaDaMedia = 0;

    for (int i = 0; i < 8; i++) {
        soma = soma + nota[i];
    }

    media = soma / 8;

    for (int i = 0; i < 8; i++) {
        if (nota[i] >= media) {
            alunosAcimaDaMedia++;
        }
    }

    printf("Media da turma: %.2f\n", media);
    printf("Quantidade de alunos acima ou na media: %d\n", alunosAcimaDaMedia);

    return 0;
}