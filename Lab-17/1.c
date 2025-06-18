#include <stdio.h>

void main() {
    int n, sum = 0, i = 1;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    do {
        sum += i;
        i++;
    } while (i <= n);

    printf("Sum: %d", sum);
}