#include <stdio.h>
#include <string.h>

void main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Entered string: %s\n", str);
    printf("Length of string: %d\n", strlen(str));
}