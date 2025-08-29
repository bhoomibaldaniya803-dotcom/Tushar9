#include <stdio.h>

int main() {
    float kg, grams;

    // Input weight in kilograms
    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);

    // Convert to grams (1 kg = 1000 g)
    grams = kg * 1000;

    // Display result
    printf("%.2f Kilograms = %.2f Grams\n", kg, grams);

    return 0;
}
