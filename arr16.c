#include<stdio.h>
int main(){
    int n,i,p;
    printf("enter num of element:");
    scanf("%d", &n);

    int a[n];
    printf("enter %d element of array:", n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("enter position:");
    scanf("%d", &p);

    printf("remive %d position from array:\n");
    for(i=p-1;i<n;i++){
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++){
        printf("%d\t", a[i]);
    }
    
}