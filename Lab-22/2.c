#include <stdio.h>

void main() {
    int i, count = 0;
    float height[5], weight[5];

    printf("Enter height and weight of 5 people:\n");
    for (i = 0; i < 5; i++) {
        printf("Person %d Height: ", i + 1);
        scanf("%f", &height[i]);
        printf("Person %d Weight: ", i + 1);
        scanf("%f", &weight[i]);
    }

    for (i = 0; i < 5; i++) {
        if (height[i] > 170 && weight[i] < 50) {
            count++;
        }
    }

    printf("Number of people with height > 170 and weight < 50: %d\n", count);
}