#include<stdio.h>
int main(){
    int i;
    printf("num that divided by 5\n");
    for(i=1;i<=100;i++){
        if(i%5==0){
            printf("%d\n", i);
        }
    }
    return 0;
}