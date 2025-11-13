#include<stdio.h>
int main(){
    int n,i;
    printf("enter num of element:");
    scanf("%d", &n);

    int a[n];
    printf("enter %d element of array:", n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    printf("remove first element\n ");
    for(i=0;i<n-1;i++){
        printf("%d\t",a[i]);
    }
}