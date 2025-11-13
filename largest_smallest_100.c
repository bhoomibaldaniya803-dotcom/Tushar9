#include<stdio.h>
int main(){
    int i,n,a,large,small;
    printf("enter 100 num:");
    scanf("%d", &n);
    large=small=n;

    for(i=2;i<=100;i++){
    scanf("%d", &a);
    if(a>large)
      large=a;
      if(a<small)
      small=a;
        
    }
    printf("largest num is:%d\n", large);
    printf("smallest num is:%d\n", small);
    return 0;
}