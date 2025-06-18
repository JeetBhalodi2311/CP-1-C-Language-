#include <stdio.h>

void main() {
    int matrix[3][3], i, j;

    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix Form:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the matrix:\n");
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}