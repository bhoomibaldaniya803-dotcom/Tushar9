#include<stdio.h>
int main(){
    int i,a,n;
    printf("enter num n:");
    scanf("%d", &n);

    printf("n odd num:");
    for(i=1;i<=n;i++){
        a=(2*i)-1;
        printf("%d\n", a);
    }
return 0;
}