#include<stdio.h>
int main(){
    int arr[5],reverse_arr[5],i,j;
    printf("enter element of arr:\n");
    for(i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }

    for(i=0,j=4;i<=4,j>=0;i++,j--){
       reverse_arr[j]=arr[i];
    }
    printf("reverse arr:\n");
    for(i=0;i<5;i++){
        printf("%d\t",reverse_arr[i]);
    }
    return 0;
}