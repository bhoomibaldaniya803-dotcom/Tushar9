#include<stdio.h>
int main(){
    int i,n,sum=0,digite;
    printf("enter num n:");
    scanf("%d", &n);
    
    while(n>0){
        digite=n%10;
        n=n/10;
        sum=sum+digite;
    }
    printf("sum of digite is:%d", sum);
    return 0;
    
}