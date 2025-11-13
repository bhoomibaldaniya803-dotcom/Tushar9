#include<stdio.h>
int main(){
    int a[4][4],b[16],i,j,k=0,t;
    printf("enter 4x4 matrix:");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
            b[k++]=a[i][j];
        }
    }
    
    for(i=0;i<15;i++){
        for(j=i+1;j<16;j++){
            if(b[i]>b[j]){
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    printf("sort matrix:\n");
    for(i=0;i<16;i++){
        printf("%d\t",b[i]);
    }
    
}