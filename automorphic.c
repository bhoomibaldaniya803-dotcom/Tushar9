#include<stdio.h>
int main(){
    int num,x=1,t,square;
    printf("enert num:");
    scanf("%d", &num);
    square=num*num;
    t=num;

     while(t>0){
     t=t/10;
     x=x*10;
     }
    
     if(square%x==num){
        printf("%d is automorphic", num);
     }else{
             printf("num is not automorphic");
            }
     return 0;
}