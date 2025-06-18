#include <stdio.h>

void main() {
    int arr[] = {1, 2, 4, 5, 7, 8, 10}; 
    int n = 10, i, j, found;
    int length = 7; 

    printf("Missing numbers in the sequence: ");

    for (i = 1; i <= n; i++) {
        found = 0;
        for (j = 0; j < length; j++) { 
            if (arr[j] == i) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", i);
        }
    }
}