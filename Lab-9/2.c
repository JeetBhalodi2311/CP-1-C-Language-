#include <stdio.h>

void main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month == 1)
        printf("Month: January");
    else if (month == 2)
        printf("Month: February");
    else if (month == 3)
        printf("Month: March");
    else if (month == 4)
        printf("Month: April");
    else if (month == 5)
        printf("Month: May");
    else if (month == 6)
        printf("Month: June");
    else if (month == 7)
        printf("Month: July");
    else if (month == 8)
        printf("Month: August");
    else if (month == 9)
        printf("Month: September");
    else if (month == 10)
        printf("Month: October");
    else if (month == 11)
        printf("Month: November");
    else if (month == 12)
        printf("Month: December");
    else
        printf("Invalid input");
}