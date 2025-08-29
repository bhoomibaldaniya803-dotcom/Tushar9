#include <stdio.h>

int main() {
    float gross_salary, net_salary, deduction;

    // Input gross salary
    printf("Enter Gross Salary: ");
    scanf("%f", &gross_salary);

    // Calculate 10% deduction
    deduction = gross_salary * 0.10;

    // Calculate net salary
    net_salary = gross_salary - deduction;

    // Output result
    printf("Net Salary = %.2f\n", net_salary);

    return 0;
}


