#include <stdio.h>

void main() {
    int a, b, c, largest;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    largest=(a>b?(a>c?a:b):(b>c?b:c));

    printf("Largest Number: %d", largest);
}