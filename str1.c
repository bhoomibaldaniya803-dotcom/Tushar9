#include<stdio.h>
#include<string.h>

int strlength(char str[]){
    int i=0;
    while(str[i]!='\0')i++;
    return i;
} 

int main(){
    char str[100];
    printf("enter a strimg:");
    gets(str);
    printf("length=%d", strlength(str));

}