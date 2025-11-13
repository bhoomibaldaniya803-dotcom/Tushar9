#include<stdio.h>
int main(){
    int i,j,count,sum=0;

    for(i=2;i<=500;i++){
        count=0;
        for(j=2;j<i;j++){
            if(i%j==0)
            count=1;
            break;
        }
        if(count==0){
            sum=sum+i;
        }
    }
    printf("%d", sum);
    return 0;
}