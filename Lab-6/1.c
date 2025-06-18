#include <stdio.h>
void main() {
    float height, base, area;
    
    printf("Enter height of the triangle: ");
    scanf("%f", &height);

    printf("Enter base of the triangle: ");
    scanf("%f", &base);
    
    area = (height * base) / 2;
    
    printf("Area of the triangle: %.2f\n", area);
}