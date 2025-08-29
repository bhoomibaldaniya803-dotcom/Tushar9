#include <stdio.h>
#define PI 3.1416   // Defining value of PI

int main() {
    float radius, area;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = PI * radius * radius;

    // Output result
    printf("Area of Circle = %.2f\n", area);

    return 0;
}



