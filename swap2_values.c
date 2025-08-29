#include <stdio.h>

int main() {
    int a, b, temp;

    // Input values
    printf("Enter first value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);

    // Before swap
    printf("\nBefore Swapping: a = %d, b = %d\n", a, b);

    // Swap using temp variable
    temp = a;
    a = b;
    b = temp;

    // After swap
    printf("After Swapping: a = %d, b = %d\n", a, b);

    return 0;
}

