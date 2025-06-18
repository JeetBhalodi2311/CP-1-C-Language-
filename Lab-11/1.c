#include <stdio.h>

void main() {
    int num;

    printf("Enter a number (1-3): ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("Case 1 executed ");
        case 2:
            printf("Case 2 executed ");
        case 3:
            printf("Case 3 executed ");
        default:
            printf("Default case executed");
    }
}