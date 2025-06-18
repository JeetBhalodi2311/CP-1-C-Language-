#include <stdio.h>

void main() {
    int n, i, max, min, sum = 0;
    float avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    max = min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    avg = (float)sum / n;

    printf("Max: %d\nMin: %d\nSum: %d\nAverage: %.2f\n", max, min, sum, avg);
}