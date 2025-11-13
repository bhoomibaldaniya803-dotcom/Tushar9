#include<stdio.h>
int main(){
    int arr[9]={500,200,100,50,20,10,5,2,1};
    int num;
    printf("enter num :");
    scanf("%d", &num); 
    int count[9]={0};
    
    for( int i=0;i<9;i++){
        count[i]=num/arr[i];
        num=num%arr[i];
    }
    for(int i=0;i<9;i++){
        if(count[i]!=0){
            printf("%d x %d\n", arr[i],count[i]);
        }
    }

}