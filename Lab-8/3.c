#include <stdio.h>

void main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("%c Type: Uppercase", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c Type: Lowercase", ch);
    else if (ch >= '0' && ch <= '9')
        printf("%c Type: Digit", ch);
    else
        printf("%c Type: Special Character", ch);
}