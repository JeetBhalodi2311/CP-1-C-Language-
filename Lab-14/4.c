#include <stdio.h>
void main() {
    int n, fact = 1, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        fact *= i;
        i++;
    }

    printf("Factorial: %d", fact);
}