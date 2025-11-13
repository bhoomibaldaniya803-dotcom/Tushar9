#include<stdio.h>
int main(){
    int n,i,p,num;
    printf("enter num of element:");
    scanf("%d", &n);

    int a[n];
    printf("enter %d element of array:", n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("enter position of arr:");
    scanf("%d", &p);
    
    for(i=n-1;i>=p-1;i--){
        a[i+1]=a[i];
    }
    printf("enter new num:");
    scanf("%d", &num);
    a[p-1]=num;

    printf("new array:\n");
    for(i=0;i<=n;i++){
        printf("%d\t", a[i]);
    }
    return 0;
}