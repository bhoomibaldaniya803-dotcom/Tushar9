#include<stdio.h>
int main(){
int a[5], i;
 printf("enter 5 value:\n");
 for(i=0;i<5;i++)
     scanf("%d", &a[i]);
  printf("you entered:\n");
  for(i=0;i<5;i++)
    printf("%d", a[i]);

  return 0;
}
