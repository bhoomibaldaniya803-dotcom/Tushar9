#include <stdio.h>
#include <string.h>

struct cricketer {
    char name[50];
    int age;
    int matches;
    float avg_runs;
};

int main() {
    struct cricketer c[10], temp;
    int n = 10;

    for (int i = 0; i < n; i++) {
        printf("\nEnter data for cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", c[i].name);
        printf("Age: ");
        scanf("%d", &c[i].age);
        printf("Matches Played: ");
        scanf("%d", &c[i].matches);
        printf("Average Runs: ");
        scanf("%f", &c[i].avg_runs);
    }

    // Sort by average runs (ascending)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (c[i].avg_runs > c[j].avg_runs) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("\nCricketers sorted by average runs (ascending):\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s (Avg Runs: %.2f)\n", i + 1, c[i].name, c[i].avg_runs);
    }

    return 0;
}