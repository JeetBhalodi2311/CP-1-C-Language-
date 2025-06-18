#include <stdio.h>

void main() {
    int matrix[2][2], i, j;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix Form:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}