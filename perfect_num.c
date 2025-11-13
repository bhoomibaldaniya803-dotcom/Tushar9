#include<stdio.h>
int main(){
    int num,i,sum=0,original;
    printf("enter num:");
    scanf("%d", &num);
    original=num;

  for(i=1;i<num;i++){
    if(num%i==0){
        sum=sum+i;
    }
  }
  printf("sum is:%d\n", sum);
  if(original==sum){
    printf("num is perfect");
  }else{
    printf("num is not perfect");
  }
  return 0;
}