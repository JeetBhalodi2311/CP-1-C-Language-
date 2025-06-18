#include <stdio.h>

void main() {
    int n, i, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0) {
            count++;
        }
    }

    printf("Total negative elements: %d\n", count);
}