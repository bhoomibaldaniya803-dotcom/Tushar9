#include<stdio.h>
int main(){
    int a[3][3],i,j;
    int *p=&a[0][0];
    printf("enter element of matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int max=*p;
    int min=*p;
    for(i=0;i<9;i++){
        if(*(p+i)>max)
        max=*(p+i);
        else if(*(p+i)<min)
        min=*(p+i);
    }
    printf("largest:%d , smallest:%d", max,min);
}