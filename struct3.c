#include <stdio.h>
#include <string.h>

struct student_data {
    int roll;
    char name[50];
    float phy, math, chem, total;
};

int main() {
    struct student_data s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf(" %s", s.name);
    printf("Enter Marks in Physics: ");
    scanf("%f", &s.phy);
    printf("Enter Marks in Maths: ");
    scanf("%f", &s.math);
    printf("Enter Marks in Chemistry: ");
    scanf("%f", &s.chem);

    s.total = s.phy + s.math + s.chem;

    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Physics: %.2f\n", s.phy);
    printf("Maths: %.2f\n", s.math);
    printf("Chemistry: %.2f\n", s.chem);
    printf("Total: %.2f\n", s.total);

    return 0;
}