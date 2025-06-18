#include <stdio.h>

void main() {
    int n, i, sum = 0, count = 0;
    float avg;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;
    
    for (i = 0; i < n; i++) {
        if (arr[i] > avg)
            count++;
    }

    printf("Average: %.2f\nNumbers greater than average: %d\n", avg, count);
}