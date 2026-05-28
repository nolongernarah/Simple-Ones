#include <stdio.h>

int main() {

    int notas[10] = {3, 5, 1, 3, 4, 2, 0, 3, 4};
    int frequencia[6] = {0, 0, 0, 0, 0, 0};


    for (int i = 0; i < 10; i++) {
        int notaAtual = notas[i];
        frequencia[notaAtual]++;

    }

    printf("--- HISTOGRAMA DE FREQUENCIA ---\n");
    for (int i = 0; i < 6; i++) {
        printf("Nota %d: %d vez(es)\n", i, frequencia[i]);
    }


   return 0;

}
