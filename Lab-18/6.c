#include <stdio.h>

void main() {
    int num, i = 2, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        flag = 0;
    } else {
        do {
            if (num % i == 0) {
                flag = 0;
                break;
            }
            i++;
        } while (i < num);
    }

    printf(flag ? "Yes" : "No");
}