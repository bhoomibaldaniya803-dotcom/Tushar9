#include<stdio.h>
int main(){
    int  a,b;
    printf("enter two value:");
    scanf("%d %d", &a,&b);
     
    if(a>b){
        printf("largest value is a:%d\n",a);
        printf("smallest value is b:%d\n", b);
    }else{
            printf("smallest value is a:%d\n",a);
            printf("largest value is b:%d\n", b);
    }
return 0;   
    }

