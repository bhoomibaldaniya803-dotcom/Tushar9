#include<stdio.h>
int main(){
    int a[10],b[10],i,n,dir;;
    printf("enter element of array:\n");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++){
        b[i]=0;
    }

    printf("1 for right side and 2 for left side\n");
    scanf("%d", &dir);
    printf("enter num for shift:");
    scanf("%d", &n);

    if(dir==1){
        for(i=0;i<10;i++){
            if(n+i<10){
                b[n+i]=a[i];
            }
        }
    }
    if(dir==2){
        for(i=0;i<10;i++){
            if(n+i<10){
                b[i]=a[n+i];
            }
        }
    }
    printf("shifted array is:\n");
    for(i=0;i<10;i++){
        printf("%d\t", b[i]);
    }
}