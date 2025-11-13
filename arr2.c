#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<=9;i++){
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);

    }
    printf("%d\n", arr[3]);
    printf("%d\n", arr[6]);
    printf("%d", arr[8]);
    return 0;
}