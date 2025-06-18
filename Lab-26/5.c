#include <stdio.h>

void main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to count: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Occurrence of '%c': %d times\n", ch, count);
}