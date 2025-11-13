#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("lines.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter lines (type 'end' to stop):\n");
    while (1) {
        gets(line);
        if (strcmp(line, "end") == 0)
            break;
        fputs(line, fp);
        fputs("\n", fp);
    }

    fclose(fp);
    printf("Data written successfully to 'lines.txt'\n");
    return 0;
}