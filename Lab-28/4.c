#include <stdio.h>

void main() {
    int n, i, j, zeroCount = 0;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    if (zeroCount > (n * n) / 2) {
        printf("The matrix is a Sparse Matrix.\n");
    } else {
        printf("The matrix is NOT a Sparse Matrix.\n");
    }
}