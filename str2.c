#include<stdio.h>
#include<string.h>
#include<ctype.h>

void toLower(char str[]){
for(int i=0;str[i]!='\0';i++){
    str[i] = tolower(str[i]);
}
printf("Lower string:%s\n", str);
}
int main(){
    char str[100];
    printf("enter string:");
    gets(str);
    toLower(str);
}