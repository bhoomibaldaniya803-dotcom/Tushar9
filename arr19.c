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
    printf("enter value:");
    scanf("%d", &value);
    for(i=0;i<n;i++){
        if(a[i]==value){
            p=i;
            break;
        }
    }
    if(p==-1){
        printf("value is not found\n");
    }else{
        printf("%d is in %d position", value,p);
    }
}