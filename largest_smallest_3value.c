#include<stdio.h>
int main(){
    int  a,b,c;
    printf("enter 3 value:");
    scanf("%d %d %d", &a,&b,&c);
     
    if(a>b && a>c){
        printf("largest value is a:%d\n",a);
    }else if(b>a && b>c){
            printf("smallest value is b:%d\n",b);
    }else{
        printf("largest value is c:%d\n", c);
    }
     
    if(a<b && a<c){
        printf("smallest value is a:%d\n", a);
    }
    else if(b<a && b<c){
            printf("smallest value is b:%d\n",b);
    }else{
        printf("smallest value is c:%d\n", c);
    }
return 0;   
    }

