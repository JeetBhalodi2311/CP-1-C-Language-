#include <stdio.h>

void main() {
    int a, b, c;

    printf("Enter first side: ");
    scanf("%d", &a);

    printf("Enter second side: ");
    scanf("%d", &b);

    printf("Enter third side: ");
    scanf("%d", &c);
    
    if (a == b && b == c)
        printf("Equilateral");
    else if (a == b || b == c || a == c)
        printf("Isosceles");
    else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
        printf("Right Angled");
    else
        printf("Scalene");
}