#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    char course[50];
    char major[30];
    char minor[30];
};

void print_all(struct student s[], int n) {
    printf("\nList of all students:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, s[i].name);
    }
}

void print_by_roll(struct student s[], int n, int roll) {
    for (int i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("\nStudent Details:\n");
            printf("Roll No: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Course: %s\n", s[i].course);
            printf("Major: %s\n", s[i].major);
            printf("Minor: %s\n", s[i].minor);
            return;
        }
    }
    printf("No student found with roll number %d\n", roll);
}

int main() {
    struct student s[10];
    int n = 10, roll_search;

    for (int i = 0; i < n; i++) {
        printf("\nEnter data for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf(" %s", s[i].name);
        printf("Course Name: ");
        scanf(" %s", s[i].course);
        printf("Major Subject: ");
        scanf(" %s", s[i].major);
        printf("Minor Subject: ");
        scanf(" %s", s[i].minor);
    }

    print_all(s, n);

    printf("\nEnter roll number to search: ");
    scanf("%d", &roll_search);
    print_by_roll(s, n, roll_search);

    return 0;
}