#include <stdio.h>

void main() {
    int num, i = 1, odd_count = 0, even_count = 0;

    do {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        i++;
    } while (i <= 10);

    printf("Odd Count: %d Even Count: %d", odd_count, even_count);
}