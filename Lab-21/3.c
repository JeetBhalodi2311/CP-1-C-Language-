#include <stdio.h>

void main() {
    int n, i, even_count = 0, odd_count = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    printf("Even Numbers: %d\nOdd Numbers: %d\n", even_count, odd_count);
}