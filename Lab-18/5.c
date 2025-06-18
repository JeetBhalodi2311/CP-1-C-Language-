#include <stdio.h>

void main() {
    int num, sum = 0, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        if (num % i == 0) {
            sum += i;
        }
        i++;
    } while (i < num);

    printf(sum == num ? "Yes" : "No");
}