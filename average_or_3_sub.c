#include <stdio.h>

int main() {
    float sub1, sub2, sub3, total, average;

    // Input marks of 3 subjects
    printf("Enter marks of subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &sub3);

    // Calculate total and average
    total = sub1 + sub2 + sub3;
    average = total / 3;

    // Output result
    printf("Total Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}

