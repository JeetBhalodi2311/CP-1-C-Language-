#include <stdio.h>

void main() {
    int num, sum = 0, count = 0;
    float avg;

    printf("Enter numbers (enter -1 to stop): ");

    while (1) {
        scanf("%d", &num);
        if (num == -1){
            break;
        }
        sum += num;
        count++;
    }

    avg = (float)sum / count;
    printf("Sum: %d Average: %.2f", sum, avg);
}