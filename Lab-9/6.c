// #include <stdio.h>

// void main() {
//     int a, b, c, second_largest;

//     printf("Enter first number: ");
//     scanf("%d", &a);

//     printf("Enter second number: ");
//     scanf("%d", &b);

//     printf("Enter third number: ");
//     scanf("%d", &c);

//     if ((a > b && a < c) || (a > c && a < b))
//         second_largest = a;
//     else if ((b > a && b < c) || (b > c && b < a))
//         second_largest = b;
//     else
//         second_largest = c;

//     printf("Second Largest: %d", second_largest);
// }



#include <stdio.h>

void main() {
    int a, b, c, max, second_largest;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    if (a == max) {
        second_largest = (b > c) ? b : c;
    } else if (b == max) {
        second_largest = (a > c) ? a : c;
    } else {
        second_largest = (a > b) ? a : b;
    }

    printf("The second largest number is: %d ", second_largest);
    
}