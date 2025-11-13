#include <stdio.h>

int main() {
    char books[3][50];
    char *ptr[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter name of book %d: ", i + 1);
        gets(books[i]);
        ptr[i] = books[i];
    }

    printf("\nBook names are:\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", ptr[i]);
    }

    return 0;
}