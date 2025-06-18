#include <stdio.h>

void main() {
    int a, b, c;
   
    printf("Enter first number: ");
    scanf("%d", &a);
   
    printf("Enter second number: ");
    scanf("%d", &b);
   
    printf("Enter third number: ");
    scanf("%d", &c);
    if(a>b){
        if(a>c){
            printf("Largest: %d", a);
        }
        else{
            printf("Largest: %d", c);
        }
    }
    else{
        if(b>c){
            printf("Largest: %d", b);
        }
        else{
            printf("Largest: %d", c);
        }
    }
}


// #include <stdio.h>

// void main() {
//     int a, b, c;
//     printf("Enter first number: ");
//     scanf("%d", &a);
//     printf("Enter second number: ");
//     scanf("%d", &b);
//     printf("Enter third number: ");
//     scanf("%d", &c);
//     printf("Numbers entered: %d %d %d ", a, b, c);
//     if (a > b && a > c)
//         printf("Largest: %d", a);
//     else if (b > a && b > c)
//         printf("Largest: %d", b);
//     else
//         printf("Largest: %d", c);
// }