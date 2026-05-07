#include <stdio.h>


int main(void) {

    int votos_validos;

    printf("Digite a quantidade de votos validos: ");
    scanf("%d", &votos_validos);

    int cand12 = 0;
    int cand43 = 0;
    int cand57 = 0;
    int votos_brancos = 0;
    int votos_nulos = 0;

    for (int i = 1; i <= votos_validos; i++) {
        int voto;
        printf("[Eleitor %d] Digite seu voto: ", i);
        scanf("%d", &voto);

        switch (voto) {
            case 12:
                cand12 += 1;
                break;
            case 43:
                cand43 += 1;
                break;
            case 57:
                cand57 += 1;
                break;
            case 0:
                votos_brancos += 1;
                break;
            default:
                votos_nulos += 1;
                break;
        }
    }

    if (cand12 > cand43 && cand12 > cand57) {
        printf("Candidato 12 ganhou a eleicao");
    }

    if (cand43 > cand12 && cand43 > cand57) {
        printf("Candidato 43 ganhou a eleicao");
    }

    if (cand57 > cand12 && cand57 > cand43) {
        printf("Candidato 57 ganhou a eleicao");
    }

    printf("--- RESULTADO ---\n");
    printf("Total de votos do Candidato 12: %d\n", cand12);
    printf("Total de votos do Candidato 43: %d\n", cand43);
    printf("Total de votos do Candidato 57: %d\n", cand57);
    printf("Total de votos brancos: %d\n",votos_brancos);
    printf("Total de votos nulos: %d\n", votos_nulos);

    return 0;
}
