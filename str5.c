#include<stdio.h>
#include<string.h>
void copystr(char str1[], char str2[]){
  strcpy(str2,str1);
  printf("copy in 2ndstr:%s", str2);
}
int main(){
    char str1[100],str2[100];
    printf("enter str1:");
    gets(str1); 
    copystr(str1,str2);
    return 0;
}
