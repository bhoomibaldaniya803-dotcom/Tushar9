#include<stdio.h>
int main(){
    int n,factorial=1,i;
    printf("enter num n:");
    scanf("%d", &n);

    if(n==0){
        printf("fact is 1");
    }else{
        for(i=1;i<=n;i++)
        factorial=factorial*i;
        
        printf("fact of %d is:%d", n,factorial);
    }
return 0;
}