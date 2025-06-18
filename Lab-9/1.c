#include <stdio.h>

void main() {
    int day;
    printf("Enter weekday number (1-7): ");
    scanf("%d", &day);

    if (day == 1)
        printf("Day: 1 => Monday");
    else if (day == 2)
        printf("Day: 2 => Tuesday");
    else if (day == 3)
        printf("Day: 3 => Wednesday");
    else if (day == 4)
        printf("Day: 4 => Thursday");
    else if (day == 5)
        printf("Day: 5 => Friday");
    else if (day == 6)
        printf("Day: 6 => Saturday");
    else if (day == 7)
        printf("Day: 7 => Sunday");
    else
        printf("Invalid input");
}