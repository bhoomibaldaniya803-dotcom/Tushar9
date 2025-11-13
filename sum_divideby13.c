#include<stdio.h>
int main(){
    int sum=0;
    for(int i=1;i<=100;i++){
        if(i%13==0){
            printf("%d\n", i);
         sum=sum+i;
        }
    }
    printf("sum is:%d", sum);
    return 0;
}