#include<stdio.h>
int main(){
   int a[10],b[10],i,j,freq=1;
   printf("enter 10 element of array:\n");
   for(i=0;i<10;i++){
    scanf("%d", &a[i]);
    b[i]=-1;
   }

   for(i=0;i<10;i++){
    int count=1;
    for(j=i+1;j<10;j++){

        if(a[i]==a[j]){
            count++;
            b[j]=0;
        } 
    }
    if(b[i]!=0){
        b[i]=count;
    }
   }
   for(i=0;i<10;i++){
    if(b[i]!=0){
   printf("%d frequency is :%d\n", a[i],b[i]);
    }
   }
   return 0;
}