#include <stdio.h>

void main() {
    int month, year;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 Days"); 
            break;
        case 4: case 6: case 9: case 11:
            printf("30 Days"); 
            break;
        case 2:
            printf(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? "29 Days" : "28 Days");
            break;
        default:
            printf("Invalid Input");
    }
}