#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    float peso = -1;
    float soma = 0;
    float media = 0;
    int contadorCaixa = 0;


    while (1) {

        printf("Digite o peso da %dª caixa (ou 0 para sair): ", contadorCaixa + 1);
        scanf("%f", &peso);
        if (peso == 0) {
            break;
        }

        if (peso < 0) {
            printf("Peso inválido! Tente novamente.\n");
            continue;
        }
        soma = soma + peso;
        contadorCaixa++;

    }

    if (contadorCaixa > 0) {
        media = soma / contadorCaixa;
        printf("\n--- RELATÓRIO FINAL ---\n");
        printf("\nTotal de caixas: %d ", contadorCaixa);
        printf("\nPeso total: %.2f kg", soma);
        printf("\nMedia de peso: %.2f kg\n", media);
    } else {
        printf("\nNenhuma carga foi processada.\n");
    }



    return 0;
}
