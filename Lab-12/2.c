#include <stdio.h>

void main() {

    int i = 1, n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d ", i);
        i++;
    }
}