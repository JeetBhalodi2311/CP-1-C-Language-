#include <stdio.h>

void main() {
    float basic, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic >= 30000) {
        hra = basic * 0.30;
        da = basic * 0.95;
    } else if (basic >= 20000) {
        hra = basic * 0.25;
        da = basic * 0.90;
    } else if (basic >= 10000) {
        hra = basic * 0.20;
        da = basic * 0.80;
    } else {
        hra = da = 0;
    }

    gross = basic + hra + da;
    printf("Basic Salary: %.2f HRA: %.2f DA: %.2f Gross Salary: %.2f", basic, hra, da, gross);
}