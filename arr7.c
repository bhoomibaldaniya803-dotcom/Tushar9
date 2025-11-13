#include<stdio.h>
int main(){
    int i,j,k,arr[4][4],b[4][4];
    printf("enter element of arr:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("transpose of matrix\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            b[i][j]=arr[j][i];
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}