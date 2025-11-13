#include<stdio.h>
int main(){
    int i,n,count=0;
    printf("print num n:");
    scanf("%d", &n);
    
    if(n<0)
    n=-n;

    if(n==0){
        count==1;
    }else{
        while (n>0)
        {
            n=n/10;
            count++;
        }
       printf("there is %d digite", count);
    }

return 0;
}