#include<stdio.h>
int main(){
    int num,i,count=0;
     printf("enter num:");
     scanf("%d", &num);

     if(num<=1){
        printf("%d is not prime num.\n", num);
        return 0;
     }
     for(i=2;i<=num/2;i++){
        if(num%i==0){
            count=1;
            break;
        }
     }
     if(count==0)
     printf("%d is a prime num.\n", num);
     else
     printf("%d is not a prime num.\n", num);
     return 0;
}