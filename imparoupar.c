#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "Portuguese");

    int n;
    int limite;
    int total_pares = 0;
    int total_impares = 0;

    printf("Quantos numeros deseja digitar?: ");
    scanf("%d", &limite);

    for (int i = 1; i <= limite; i++) {

        printf("Digite o numero %d: ", i);
        scanf("%d", &n);

        if (n % 2 == 0) {
            printf("-> Par\n\n");
            total_pares++;
        } else {
            printf("-> Impar\n\n");
            total_impares++;
        }

    }
    printf("\n---RESULTADO---\n");
    printf("Total de pares: %d\n", total_pares);
    printf("Total de impares: %d\n", total_impares);

    return 0;

}
