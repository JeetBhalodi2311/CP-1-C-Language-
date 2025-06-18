#include <stdio.h>

void main() {
    int i = 1, count = 0;

    while (count < 50) {
        printf("%d", i);
        i += 3;
        count++;
    }
}