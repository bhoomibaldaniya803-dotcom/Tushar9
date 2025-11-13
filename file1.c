#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0, words = 0, chars = 0, spaces = 0;
    int inWord = 0;

    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ' || ch == '\t') {
            spaces++;
            inWord = 0;
        } else if (ch == '\n') {
            lines++;
            inWord = 0;
        } else {
            if (!inWord) {
                words++;
                inWord = 1;
            }
        }
    }
    fclose(fp);

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", chars);
    printf("Spaces: %d\n", spaces);
    return 0;
}