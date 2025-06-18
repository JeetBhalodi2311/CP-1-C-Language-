#include <stdio.h>

void main() {
    int seconds, hours, minutes;

    printf("Enter total seconds: ");
    scanf("%d", &seconds);
    
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    printf("Converted time: %02d:%02d:%02d", hours, minutes, seconds);
}