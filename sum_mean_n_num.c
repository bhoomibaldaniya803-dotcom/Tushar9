#include<stdio.h>
int main(){
    int n;
    float mean,sum=0,num;
    printf("enten value of n:");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        printf("enter num %d:", i);
        scanf("%f", &num);
        sum=sum+num;
    }
    mean=sum/n;
    printf("sum is:%f\n", sum);
    printf("mean is :%f", mean);
    return 0;
}