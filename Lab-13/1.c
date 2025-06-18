#include <stdio.h>

void main() {
    int n, sum = 0, i = 1;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum: %d", sum);
}