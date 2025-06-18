#include <stdio.h>

void main() {
    int n, i, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)  
            sum -= i; 
        else  
            sum += i; 
    }

    printf("Sum of series: %d", sum);
}