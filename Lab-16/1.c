#include <stdio.h>

void main() {
    int i, n;

    printf("Printing 1 to 10:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\nEnter value of N: ");
    scanf("%d", &n);

    printf("Printing 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}