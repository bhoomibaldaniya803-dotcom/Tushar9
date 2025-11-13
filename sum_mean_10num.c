#include<stdio.h>
int main(){
    float num,sum=0,mean;
     for(int i=1;i<=10;i++){
        printf("enter num %d:", i);
        scanf("%f", &num);
        sum=sum+num;
     }
     mean=sum/10;
    printf("sum is: %f\n", sum);
    printf("mean is:%f", mean);
    return 0; 
}