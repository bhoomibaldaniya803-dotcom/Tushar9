#include<stdio.h>
#include<string.h>
void reversestr(char str[]){
   strrev(str);
   printf("reverse string:%s", str);
}
int main(){
    char str[100];
    printf("enter string:");
    gets(str);
    reversestr(str);
}