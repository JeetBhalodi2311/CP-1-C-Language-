#include <stdio.h>

void main() {
    int n, i, j, tempIndex = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (j = 0; j < tempIndex; j++) {
            if (arr[i] == temp[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            temp[tempIndex] = arr[i];
            tempIndex++;
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < tempIndex; i++) {
        printf("%d ", temp[i]);
    }
}