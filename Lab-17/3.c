#include <stdio.h>

void main() {
    int num = 100;

    do {
        if (num % 7 == 0 && num % 5 != 0) {
            printf("%d ", num);
        }
        num++;
    } while (num < 200);
}