#include <stdio.h>

void main() {
    int n, i, j, identical = 1;

    printf("Enter the size of the matrices : ");
    scanf("%d", &n);

    int matrix1[n][n], matrix2[n][n];

    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                identical = 0;
                break;
            }
        }
        if (!identical) 
            break;
    }

    if (identical) {
        printf("The matrices are identical.\n");
    } else {
        printf("The matrices are NOT identical.\n");
    }
}