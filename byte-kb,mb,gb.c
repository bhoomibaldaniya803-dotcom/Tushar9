#include <stdio.h>

int main() {
    double bytes, kb, mb, gb;

    // Input bytes
    printf("Enter size in bytes: ");
    scanf("%lf", &bytes);

    // Conversions
    kb = bytes / 1024;
    mb = bytes / (1024 * 1024);
    gb = bytes / (1024 * 1024 * 1024);

    // Display results
    printf("\n%.2lf Bytes = %.2lf KB", bytes, kb);
    printf("\n%.2lf Bytes = %.2lf MB", bytes, mb);
    printf("\n%.2lf Bytes = %.2lf GB\n", bytes, gb);

    return 0;
}

