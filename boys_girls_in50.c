#include<stdio.h>
int main(){
  char ch;
    int i,boycount=0,girlcount=0,x,y;
    printf("x for girl and y for boys\n");
    printf("enter 5 ch : ");

    for(i=1;i<=5;i++){
        scanf(" %c", &ch);
        if(ch=='x')
        girlcount++;
        if(ch=='y')
        boycount++;
    }
    printf("girls:%d\n", girlcount);
    printf("boys:%d", boycount);
    return 0;
    
}