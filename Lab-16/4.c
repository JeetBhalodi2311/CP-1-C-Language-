#include <stdio.h>

void main() {
    int x, y, result = 1, i;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (y): ");
    scanf("%d", &y);

    for (i = 1; i <= y; i++) {
        result *= x;
    }

    printf("Result: %d", result);
}