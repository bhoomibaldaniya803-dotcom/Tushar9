#include <stdio.h>

int main() {
    float P, R, N, I;

    // Input principal, rate, and time
    printf("Enter Principal amount: ");
    scanf("%f", &P);

    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &N);

    // Calculate Interest
    I = (P * R * N) / 100;

    // Output result
    printf("Simple Interest = %.2f\n", I);

    return 0;
}

