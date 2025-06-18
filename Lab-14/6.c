#include <stdio.h>

void main() {
    char ch = 'A';

    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }

    ch = 'a';
    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }
}