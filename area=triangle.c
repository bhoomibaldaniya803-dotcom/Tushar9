#include <stdio.h>

int main() {
    float base, height, area;

    // Input base and height
    printf("Enter base of the triangle: ");
    scanf("%f", &base);

    printf("Enter height of the triangle: ");
    scanf("%f", &height);

    // Calculate area
    area = 0.5 * base * height;

    // Output result
    printf("Area of Triangle = %.2f\n", area);

    return 0;
}

