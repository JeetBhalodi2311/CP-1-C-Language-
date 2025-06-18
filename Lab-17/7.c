#include <stdio.h>

void main() {
    int n, i = 1, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    do {
        sum += (i * i);
        i++;
    } while (i <= n);

    printf("Sum: %d", sum);
}