#include <stdio.h>

void main() {
    int n, i, newValue;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new value to insert: ");
    scanf("%d", &newValue);

    i = n - 1;
    while (i >= 0 && arr[i] > newValue) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = newValue;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}