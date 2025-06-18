#include <stdio.h>

void main() {
    int num, sum = 0, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i < num) {
        if (num % i == 0)
            sum += i;
        i++;
    }

    printf(sum == num ? "Yes" : "No");
}