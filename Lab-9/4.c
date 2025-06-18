#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c, d, root1, root2;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("Enter c: ");
    scanf("%f", &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1: %.2f Root2: %.2f", root1, root2);
    } 
    else if (d == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Root1: %.2f Root2: %.2f", root1, root2);
    } 
    else
        printf("Roots are imaginary");
}