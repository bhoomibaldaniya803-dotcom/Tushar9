#include<stdio.h>
int main(){
    int arr[5],i,j,choice,t;
    printf("enetr 5 num:");
    for(i=0;i<=4;i++){
        scanf("%d", &arr[i]);
    }
    printf("enetr 1 for ascending order or 2 for descending order: ");
    scanf("%d", &choice);

    for(i=0;i<4;i++){
        for(j=i+1;j<=4;j++){
            if((choice==1 && arr[i]>arr[j]) || (choice==2 && arr[i]<arr[j]))
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
        printf("sorted array:\n");
        for(i=0;i<5;i++){
        printf("%d\t", arr[i]);
   
    }
    return 0;
}