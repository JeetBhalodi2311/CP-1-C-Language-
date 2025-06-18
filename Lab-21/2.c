#include <stdio.h>

void main() {
    int n, i, pos_count = 0, neg_count = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            pos_count++;
        else if (arr[i] < 0)
            neg_count++;
    }

    printf("Positive Numbers: %d\nNegative Numbers: %d\n", pos_count, neg_count);
}