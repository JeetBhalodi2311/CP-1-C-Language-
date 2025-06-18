#include <stdio.h>

void main() {
    int num, i = 2, is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1){
        is_prime = 0;
    }
    else {
        while (i < num) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
            i++;
        }
    }

    printf(is_prime ? "Yes,Prime" : "Not,Prime");
}