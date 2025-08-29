#include <stdio.h>

int main() {
    float num1, num2, result;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Check if divisor is not zero
    if (num2 != 0) {
        result = num1 / num2;
        printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }
        return 0;
    }
