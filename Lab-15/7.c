#include <stdio.h>

void main() {
    int num, i = 2, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1){
        flag = 0;
    }
    else {
        while (i < num) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
            i++;
        }
    }

    printf(flag ? "Yes" : "No");
}