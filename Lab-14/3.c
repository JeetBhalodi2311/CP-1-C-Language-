#include <stdio.h>

void main() {
    int x, y, result = 1, i = 0;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (y): ");
    scanf("%d", &y);

    while (i < y) {
        result *= x;
        i++;
    }

    printf("Result: %d", result);
}