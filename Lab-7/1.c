#include <stdio.h>

void main() {
    float feet, inches;
    
    printf("Enter the value in feet: ");
    scanf("%f", &feet);
    
    inches = feet * 12;
    printf("nches = %.2f",inches);
}