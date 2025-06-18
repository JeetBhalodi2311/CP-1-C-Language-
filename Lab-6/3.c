#include <stdio.h>

void main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = ((f - 32) * 5) / 9;
    printf("Temperature in Celsius: %.2f\n", c);
}