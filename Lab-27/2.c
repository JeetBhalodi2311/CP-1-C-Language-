#include <stdio.h>

void main() {
    int matrix[3][3], i, j, pos = 0, neg = 0, zero = 0;

    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] > 0) {
                pos++;
            } 
            else if (matrix[i][j] < 0) {
                neg++;
            } 
            else {
                zero++;
            }
        }
    }

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zero numbers: %d\n", zero);
}