#include <stdio.h>

int main() {
    float gross, allowance, deduction, net;

    // Input gross salary
    printf("Enter Gross Salary: ");
    scanf("%f", &gross);

    // Calculate allowance (10%) and deduction (3%)
    allowance = 0.10 * gross;
    deduction = 0.03 * gross;

    // Net Salary
    net = gross + allowance - deduction;

    // Output result
    printf("Gross Salary   = %.2f\n", gross);
    printf("Allowance (10%%) = %.2f\n", allowance);
    printf("Deduction (3%%) = %.2f\n", deduction);
    printf("Net Salary     = %.2f\n", net);

    return 0;
}

