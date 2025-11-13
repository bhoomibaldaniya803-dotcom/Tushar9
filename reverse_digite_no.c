#include<stdio.h>
int main(){
    int i,n,a,reverse=0;
    printf("enter num n:");
    scanf("%d", &n);

    while(n!=0 && n>0){
     a=n%10;
     reverse=reverse*10+a;
     n=n/10;
    }
    printf("reverse num is:%d", reverse);
    return 0;
}