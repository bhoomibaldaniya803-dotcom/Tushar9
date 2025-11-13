#include<stdio.h>
int main(){
    int i,j,k,a[2][2],b[2][2],c[2][2];

    printf("enter 1st arr element:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter 2st arr element:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j]=0;
        }
    }


    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
              c[i][j]+=a[i][j]*b[i][j];
            }
        }
    }

    printf("multiply off 2 arr\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    
}