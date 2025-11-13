#include<stdio.h>
#include<string.h>
void comparestr(char str1[],char str2[]){
   int result=strcmp(str1,str2);
     if(result==0){
        printf("both strinf are same");
     }else if(result>0){
        printf("ste1 is larger than str2");
     }else if(result<0){
        printf("str1 is smaller than str2");
     }

   }

int main(){
    char str1[100],str2[100];
    printf("enter 1st string:");
    gets(str1);
    printf("enter 2nd string:");
    gets(str2);
    comparestr(str1,str2);
}