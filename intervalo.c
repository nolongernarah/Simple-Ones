#include <stdio.h>

int main(void) {

    int numero;
    int limite;
    int contador_intervalo = 0;

    printf("Quantos numeros deseja digitar?: ");
    scanf("%d", &limite);

    for (int i = 1; i <= limite; i++) {

        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);

        if (numero >= 50 && numero <= 90) {
            printf("Esta no intervalo entre 50 e 90\n");
            contador_intervalo++;
        } else {
            printf("Nao esta no intervalo de 50 e 90\n");
        }

    }
    printf("Total de numeros no intervalo de 50 e 90: %d", contador_intervalo);

    return 0;
}