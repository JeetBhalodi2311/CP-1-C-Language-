#include <stdio.h>

void main() {
    int num, temp, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    
    do {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    } while (temp > 0);

    printf(rev == num ? "Yes" : "No");
}