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

    // Check if student fails due to any subject < 35
    if (sub1 < 35 || sub2 < 35 || sub3 < 35) {
        printf("Total Marks = %.2f\n", total);
        printf("Average = %.2f\n", average);
        printf("Result: FAIL (scored less than 35 in a subject)\n");
    }
    else {
        // Grade based on average
        printf("Total Marks = %.2f\n", total);
        printf("Average = %.2f\n", average);

        if (average >= 70)
            printf("Result: DISTINCTION\n");
        else if (average >= 60)
            printf("Result: FIRST CLASS\n");
        else if (average >= 50)
            printf("Result: SECOND CLASS\n");
        else if (average >= 35)
            printf("Result: THIRD CLASS\n");
        else
            printf("Result: FAIL\n");
    }

    return 0;
}

