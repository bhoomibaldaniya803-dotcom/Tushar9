#include<stdio.h>
int main(){
    int n,i,num;
    printf("enter num of element:");
    scanf("%d", &n);

    int a[n];
    printf("enter %d element of array:", n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=n;i>0;i--){
        a[i]=a[i-1];
    }
    printf("enter new num:");
    scanf("%d", &num);
    a[0]=num;
    printf("insert nem num in beginning\n");
    for(i=0;i<=n;i++){
        printf("%d\t", a[i]);
    }

}