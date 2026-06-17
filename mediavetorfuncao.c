#include <stdio.h>

float calcular_media(float vetor[5]) {
    float soma = 0;
    float media = 0;

    for (int i = 0; i < 5; i++) {
        soma = soma + vetor[i];
    }

    media = soma / 5;

    return media;
}

int main(void) {
    float vetor[5] = {9.8, 5.5, 7.8, 6.7, 10.0};

    printf("A media dos numeros no vetor e %.2f", calcular_media(vetor));

    return 0;
}
