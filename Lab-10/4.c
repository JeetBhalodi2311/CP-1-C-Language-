#include <stdio.h>

void main() {
    int a, b, c, largest, result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    switch (a > b){
        case 1: 
            largest = a; 
            break;
        case 0: 
            largest = b; 
            break;
    }

    result = largest * c;
    printf("Result: %d",result);

}
