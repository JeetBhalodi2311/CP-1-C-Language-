#include <stdio.h>
void main() {
    float r;
    float pi = 3.14;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area of circle: %.2f\n", pi * r * r);
}