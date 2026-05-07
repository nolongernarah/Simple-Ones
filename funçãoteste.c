#include <stdio.h>

int soma(int a, int b) {

    int c = a + b;
    return c;
}

void ler_numero(char mensagem[25], int *numero) {

    printf("%s", mensagem);
    scanf("%d", numero);
}

int main() {
    int num1;
    int num2;

    ler_numero("Digite um numero: ", &num1);
    ler_numero("Digite outro numero: ", &num2);

    int resultado = soma(num1, num2);
    printf("A soma de %d + %d e %d\n", num1, num2, resultado);


    return 0;


}
