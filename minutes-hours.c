int main() {
    int minutes, hours, remainingMinutes;

    // Input minutes
    printf("Enter minutes: ");
    scanf("%d", &minutes);

    // Convert to hours and minutes
    hours = minutes / 60;              // whole hours
    remainingMinutes = minutes % 60;   // leftover minutes

    // Display result
    printf("%d minutes = %d hours and %d minutes\n", minutes, hours, remainingMinutes);

    return 0;
}

