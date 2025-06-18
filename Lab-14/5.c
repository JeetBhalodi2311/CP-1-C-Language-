#include <stdio.h>

void main() {
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        if (n % i == 0){
            printf("%d ", i);
        }
        i++;
    }
}