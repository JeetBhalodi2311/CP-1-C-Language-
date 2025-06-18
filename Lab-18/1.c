#include <stdio.h>

void main() {
    int num, first, last, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    do {
        first = num % 10;
        num /= 10;
    } while (num > 0);

    sum = first + last;
    printf("First Digit: %d Last Digit: %d Sum: %d", first, last, sum);
}