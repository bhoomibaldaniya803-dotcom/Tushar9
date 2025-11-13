#include<stdio.h>
int main(){
    int i,j,count=0,total=0;
    printf("prime num between 1 to 500\n");
    
    for(i=2;i<=500;i++){
        count=0;
        for(j=2;j<i;j++){
            if(i%j==0){
            count=1;
            break;
            }
        }
        if(count==0){
            total++;
        }
    }
    printf("total prime num is:%d ", total);
    return 0;
}