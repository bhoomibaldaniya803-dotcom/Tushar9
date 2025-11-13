#include<stdio.h>
int main(){
    int i,num,a,armstrong=0,x,original;
    printf("enter num:");
    scanf("%d", &num);
    original=num;
    while(num!=0 && num>0){
        a=num%10;
        x=a*a*a;
        armstrong=armstrong*1+x;
        num=num/10;

    }
    if(armstrong==original){
        printf("num is armstrong\n");
    }else{
        printf("num is not armstrong");
    }
    
    return 0;
}