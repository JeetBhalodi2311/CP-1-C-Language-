#include <stdio.h>

void main() {
    int n, i = 1, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += (i * i);
        i++;
    }
    printf("Sum: %d", sum);
}