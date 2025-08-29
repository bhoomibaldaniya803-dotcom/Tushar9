#include <stdio.h>

int main() {
    int hours, minutes;

    // Input hours
    printf("Enter hours: ");
    scanf("%d", &hours);

    // Convert to minutes
    minutes = hours * 60;

    // Display result
    printf("%d hours = %d minutes\n", hours, minutes);

    return 0;
}
