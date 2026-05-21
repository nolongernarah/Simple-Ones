#include <stdio.h>

int main(void) {

    float numeros[10] = {4.5, 6.7, 8.9, 3.1, 22.5, 3.3, 6.0, 8.2, 4.4, 5.5};
    float maior = numeros[0];
    float menor = numeros[0];

    // Variaveis para guardar as posições
    int posicaomaior = 0;
    int posicaomenor = 0;

    for (int i = 1; i < 10; i++) {

        if (numeros[i] > maior) {
            maior = numeros[i];
            posicaomaior = i;
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
            posicaomenor = i;
        }


    }

    printf("Maior numero: %.2f (Encontrado no indice %d)\n", maior, posicaomaior);
    printf("Menor numero: %.2f (Encontrado no indice %d)\n", menor, posicaomenor);


    return 0;

}