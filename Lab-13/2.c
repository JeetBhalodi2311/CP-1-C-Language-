#include <stdio.h>

void main() {
    int num, i = 1, odd_count = 0, even_count = 0;

    while (i <= 10) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num % 2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
        i++;
    }

    printf("Odd Count: %d Even Count: %d", odd_count, even_count);
}