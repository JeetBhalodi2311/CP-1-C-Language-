#include <stdio.h>

void main() {
    int num, temp, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    do {
        digit = temp % 10;
        sum += (digit * digit * digit);
        temp /= 10;
    } while (temp > 0);

    printf(sum == num ? "Yes" : "No");
}