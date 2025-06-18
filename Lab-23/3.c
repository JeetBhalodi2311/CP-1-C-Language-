#include <stdio.h>

void main() {
    int n, i, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 3 == 0) {
            count++;
        }
    }

    printf("Total elements divisible by 3: %d\n", count);
}