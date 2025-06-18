#include <stdio.h>

void main() {
    float principal, roi, time, si;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &roi);
    
    printf("Enter Time in years: ");
    scanf("%f", &time);
    
    si = (principal * roi * time) / 100;
    printf("Simple Interest: %.2f\n", si);
}