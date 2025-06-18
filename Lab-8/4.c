#include <stdio.h>

void main() {
    int num, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    if (lastDigit % 2 == 0)
        printf("Even",lastDigit);
    else
        printf("Odd",lastDigit);
}