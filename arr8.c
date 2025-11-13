#include<stdio.h>
int main(){
    int a[5],b[10],j=0,i;
    printf("enter element of a:\n");
    for(int i=0;i<5;i++){
    scanf("%d", &a[i]);
    }

    for(j=0;j<10;j++){
        b[j]=0;
    }

    for(int i=0,j=0;i<5 && j<10;i++,j+=2){
        b[j]=a[i];
    }

    for(j=0;j<10;j++){
        printf("%d\t", b[j]);
    }
    return 0;
}