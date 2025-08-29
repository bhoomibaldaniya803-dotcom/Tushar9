#include <stdio.h>

int main() {
    float side, area, perimeter;

    // Input side of square
    printf("Enter side of square: ");
    scanf("%f", &side);

    // Calculations
    area = side * side;            // Area = side × side
    perimeter = 4 * side;          // Perimeter = 4 × side

    // Output results
    printf("Area of Square = %.2f\n", area);
    printf("Perimeter of Square = %.2f\n", perimeter);

    return 0;
}
