#include <stdio.h>
#include <string.h>

int main() {
    char name[100], temp[10][30];
    int n = 0, i;

    printf("Enter full name: ");
    gets(name);

    char *word = strtok(name, " ");
    while (word != NULL) {
        strcpy(temp[n++], word);
        word = strtok(NULL, " ");
    }

    printf("\nAbbreviated form: ");
    for (i = 0; i < n - 1; i++) {
        printf("%c.", temp[i][0]);
    }
    printf("%s\n", temp[n - 1]);

    return 0;
}