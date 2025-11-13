#include<stdio.h>
int main(){
int n,i,digite;
printf("enter  digit num n:");
scanf("%d", &n);
printf("sepatate digits:\n");

for(i=1;i<=3;i++){
    digite=n%10;
    printf("%d\n", digite);
    n=n/10;
}
return 0;
}
