//  i)
#include <stdio.h>
void main() {
    int a = 2, b = 4, c = 6;
    float avg = (a + b + c) / 3;
    printf("Average: %f\n", avg);
}

//  ii)
#include <stdio.h>
void main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    float avg = (a + b + c) / 3;
    printf("Average: %.2f\n", avg);
}