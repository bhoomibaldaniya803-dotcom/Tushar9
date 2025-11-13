#include<stdio.h>
#include<string.h>
void ispalindrome(char str[]){
   char rev[100];
   strcpy(rev,str);
   strrev(rev);
    if(strcmp(str,rev)==0){
        printf("string is palindrome");
    }else{
        printf("string is not palindrome");
    }
   }

int main(){
    char str[100];
    printf("enter string:");
    gets(str);
    ispalindrome(str);
}