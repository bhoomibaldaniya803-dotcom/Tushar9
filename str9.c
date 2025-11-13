#include<stdio.h>
#include<string.h>
void concatenate(char str1[],char str2[]){
    strcat(str1,str2);
    printf("concatenated string:%s", str1);
}
int main(){
    char str1[100],str2[100];
    printf("enter 1st string:");
    gets(str1);
    printf("enter 2nd string:");    
    gets(str2);
    concatenate(str1,str2);
}