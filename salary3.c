#include <stdio.h>

int main() {
    float gross, allowances, deductions, net;

    // Input gross salary
    printf("Enter Gross Salary: ");
    scanf("%f", &gross);

    // Conditions for allowances and deductions
    if (gross > 10000) {
        allowances = gross * 0.10;   // 10%
        deductions = gross * 0.03;   // 3%
    }
    else if (gross > 5000) {
        allowances = gross * 0.07;   // 7%
        deductions = gross * 0.02;   // 2%
    }
    else {
        allowances = gross * 0.05;   // you can define any rule for below 5000
        deductions = gross * 0.01;   // (I kept 5% and 1% as example)
    }

    // Net Salary calculation
    net = gross + allowances - deductions;

    // Output result
    printf("Gross Salary   = %.2f\n", gross);
    printf("Allowances     = %.2f\n", allowances);
    printf("Deductions     = %.2f\n", deductions);
    printf("Net Salary     = %.2f\n", net);

    return 0;
}
