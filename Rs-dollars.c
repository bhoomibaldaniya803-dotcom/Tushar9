#include <stdio.h>

int main() {
    float rs, dollars;

    // Input amount in Rupees
    printf("Enter amount in Rupees: ");
    scanf("%f", &rs);

    // Conversion (1 Dollar = 48 Rs)
    dollars = rs / 48;

    // Display result
    printf("Rs %.2f = $ %.2f\n", rs, dollars);

    return 0;
}

