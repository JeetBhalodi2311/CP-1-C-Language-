#include <stdio.h>

void main() {
    int num, digit, temp, count;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (digit = 0; digit <= 9; digit++) {
        count = 0;
        temp = num; 

        while (temp > 0) {
            if (temp % 10 == digit) {
                count++;
            }
            temp /= 10;
        }

        if (count > 0) {
            printf("Digit %d appears %d times\n", digit, count);
        }
    }
}