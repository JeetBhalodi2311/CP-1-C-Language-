#include <stdio.h>

void main() {
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= 10) {
        printf("%d x %d = %d \n", num, i, num * i);
        i++;
    }
}