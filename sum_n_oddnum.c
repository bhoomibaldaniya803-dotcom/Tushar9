#include<stdio.h>
int main(){
    int n, sum=0,a;
    printf("enter the valye of n:");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        a=(2*i)-1;
        sum = sum +a;
    }
        printf("sum of n is :%d\n", sum);
        
        return 0;
}