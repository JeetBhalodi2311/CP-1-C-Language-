#include <stdio.h>

void main() {
    int days, years, weeks;

    printf("Enter total number of days: ");
    scanf("%d", &days);
    
    years = days / 365;
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;
    printf("Converted time: %d year, %d week, %d day\n", years, weeks, days);
}