#include<stdio.h>
#include<string.h>
#include<ctype.h>
void toUpper(char str[]){
    for(int i=0;str[i]!='\0';i++){
    str[i]=toupper(str[i]);
    }
    printf("upper string:%s", str);
}
int main(){
    char str[100];
    printf("enter string:");
    gets(str);
    toUpper(str);
}