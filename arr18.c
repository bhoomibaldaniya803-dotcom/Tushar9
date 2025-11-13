#include<stdio.h>
int main(){
    int n,i,p=-1,value;
    printf("enter num of element:");
    scanf("%d", &n);

    int a[n];
    printf("enter %d element of array:", n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("enter value from array:");
    scanf("%d", &value);

    for(i=0;i<n;i++){
        if(a[i]==value){
            p=i;
            break;
        }
    }
    if(p==-1){
        printf("num not found\n");
    }else{

    for(i=p;i<n-1;i++){
        a[i]=a[i+1]; 
    }
    printf("delete value from array\n");
    for(i=0;i<n-1;i++){
        printf("%d\t",a[i]);
    }
}
}