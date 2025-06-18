#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Length of str1: %d\n", strlen(str1));
    printf("Length of str2: %d\n", strlen(str2));

    printf("Comparing str1 and str2: %d\n", strcmp(str1, str2));

    strcpy(str2, str1);
    printf("After copying str1 to str2: %s\n", str2);

    strcat(str1, str2);
    printf("After concatenation: %s\n", str1);

    printf("Reversed str1: %s\n", strrev(str1));
    printf("Lowercase str1: %s\n", strlwr(str1));
    printf("Uppercase str1: %s\n", strupr(str1));
}