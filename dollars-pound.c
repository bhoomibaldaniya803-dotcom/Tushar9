#include <stdio.h>

int main() {
    float dollars, pounds;

    // Input dollars
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    // Convert dollars to pounds
    pounds = (dollars * 48) / 70;

    // Display result
    printf("%.2f Dollars = %.2f Pounds\n", dollars, pounds);

    return 0;
}

