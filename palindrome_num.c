#include<stdio.h>
int main(){
    int i,num,original,reverse=0,a;
    printf("enter num:");
    scanf("%d", &num);
    original=num;

    while(num!=0){
    a=num%10;
    reverse=reverse*10+a;
    num=num/10;
    }
    if(original==reverse){
        printf("num is palindrome\n", original);
    }else{
        printf("num is not palindrome");
    }
    return 0;
}