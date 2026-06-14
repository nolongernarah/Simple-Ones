#include <stdio.h>

int main(void) {
    int original[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    int transposta[3][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {

            transposta[j][i] = original[i][j];

        }
    }
    printf("--- MATRIZ TRANSPOSTA (3X2) ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}
