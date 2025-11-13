#include <stdio.h>

int main() {
    int i, j, count;

    printf("Prime numbers between 2 and 20 are:\n");

    for(i = 2; i <= 500; i++) {
        count = 0;

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                count = 1; 
                break;
            }
        }

        if(count == 0)
            printf("%d\n", i);
    }

    return 0;
}
