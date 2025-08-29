#include <stdio.h>

int main() {
    float dollars, rupees;

    // Input amount in dollars
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    // Conversion (1 dollar = 48 Rs)
    rupees = dollars * 48;

    // Display result
    printf("%.2f dollars = %.2f Rs\n", dollars, rupees);

    return 0;
}

