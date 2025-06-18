#include <stdio.h>

void main() {
    int num1, num2, choice;
    float result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Choose an operation (1-Addition 2-Subtraction 3-Multiplication 4-Division): ");
    scanf("%d", &choice);
    if (choice == 1)
        result = num1 + num2;
    else if (choice == 2)
        result = num1 - num2;
    else if (choice == 3)
        result = num1 * num2;
    else if (choice == 4) {
        if (num2 != 0)
            result = (float)num1 / num2;
        else {
            printf("Error Division by zero");
            return;
        }
    } else {
        printf("Invalid choice");
        return;
    }

    printf("Result: %.2f",result);
}