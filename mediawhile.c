#include <stdio.h>
#include <stdlib.h>

int main (void) {
    system("chcp 65001 > nul");

    int contador = 1;
    int num;
    int soma = 0;
    float media;

    while (contador <= 5) {
        printf("Digite o %d° numero: ", contador);
        scanf("%d", &num);

        soma = soma + num;



        contador++;

    }

    media = soma / 5.0;

    printf("A soma dos número é %d e a medias desses nuemros e %.2f", soma, media);

    return 0;

}
