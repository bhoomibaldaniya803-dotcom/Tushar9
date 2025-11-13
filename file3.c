#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("lines.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("File contents:\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}