#include<stdio.h>
int main(){
    int a,i,posicount=0,negacount=0,zerocount=0;
    printf("enter 200 num: ");

    for(i=1;i<=200;i++){
        scanf("%d", &a);
        if(a>0)
        posicount++;
        if(a<0)
        negacount++;
        if(a==0)
        zerocount++;
    }
   printf("+ve num is:%d\n", posicount);
   printf("-ve num is:%d\n", negacount);
   printf("zeroes num is :%d", zerocount);
   return 0;
}