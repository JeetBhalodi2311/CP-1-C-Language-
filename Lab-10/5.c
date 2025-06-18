#include <stdio.h>

void main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ? "Alphabet" : "Not an Alphabet");
}