#include <stdio.h>

void main() {
    int i = 1, count = 0;

    do {
        printf("%d ", i);
        i += 3;
        count++;
    } while (count < 50);
}