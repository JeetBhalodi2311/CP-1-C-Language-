#include <stdio.h>

void main() {
    char str[100], oldChar, newChar;
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to replace: ");
    scanf("%c", &oldChar);
    getchar();
    printf("Enter new character: ");
    scanf("%c", &newChar);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }

    printf("Updated string: %s\n", str);
}