#include <stdio.h>

void findMaxMin(int arr[], int n, int *max, int *min) {
    *max = *min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main() {
    int arr[10], n, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findMaxMin(arr, n, &max, &min);

    printf("Maximum = %d\nMinimum = %d\n", max, min);
    return 0;
}