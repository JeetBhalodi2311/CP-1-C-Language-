#include <stdio.h>

void main() {
    int num1, num2, choice;
    float result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Choose operation (1-Add, 2-Subtract, 3-Multiply, 4-Divide): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            result = num1 + num2; 
            printf("Addition: %.2f", result); 
            break;

        case 2: 
            result = num1 - num2; 
            printf("Subtraction: %.2f", result); 
            break;

        case 3: 
            result = num1 * num2; 
            printf("Multiplication: %.2f", result); 
            break;

        case 4: 
            if (num2 != 0) 
                result = (float)num1 / num2;
            else{ 
                printf("Error Division by Zero"); 
                return;
            }
            printf("Division: %.2f", result); 
            break;

        default: 
            printf("Invalid Choice");
    }
}