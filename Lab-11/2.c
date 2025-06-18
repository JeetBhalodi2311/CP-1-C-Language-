#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf(num >= 0 ? "Positive" : "Negative");
}