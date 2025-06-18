#include <stdio.h>

void main() {
    int i;

    for (i = 0; i < 256; i++) {
        printf("ASCII Character: %c Value: %d\n", i, i);
    }
}