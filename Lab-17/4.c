#include <stdio.h>

void main() {
    int n, i = 1, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    do {
        if (i % 2 == 0) {
            sum -= i;
        } else {
            sum += i;
        }
        i++;
    } while (i <= n);

    printf("Sum of series: %d", sum);
}