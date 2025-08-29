#include <stdio.h>

int main() {
    float gross, discount, net;

    // Input gross salary
    printf("Enter Gross Salary: ");
    scanf("%f", &gross);

    // Apply discount conditions
    if (gross > 20000) {
        discount = gross * 0.15;   // 15%
    }
    else if (gross > 10000) {
        discount = gross * 0.10;   // 10%
    }
    else {
        discount = gross * 0.05;   // 5%
    }

    // Calculate net salary
    net = gross - discount;

    // Output result
    printf("Gross Salary = %.2f\n", gross);
    printf("Discount = %.2f\n", discount);
    printf("Net Salary = %.2f\n", net);

    return 0;
}



