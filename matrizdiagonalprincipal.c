#include <stdio.h>

int main(void) {

    int matrizA[3][3] = {
        {1,2,3},
        {3,4,5},
        {6,7,8}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                printf("%d ", matrizA[i][j]);
            }
        }
    }

    return 0;

}