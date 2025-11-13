#include<stdio.h>
#include<string.h>
#include<ctype.h>

int frequency_vowels(char str[]){
    int a=0,e=0,i=0,o=0,u=0;
    for(int j=0;str[j]!='\0';j++){
        char ch=tolower(str[j]);
        if(ch=='a')a++;
        else if(ch=='e')e++;
        else if(ch=='i')i++;
        else if(ch=='o')o++;
        else if(ch=='u')u++;
    }
    printf("a:%d\n,e:%d\n,i:%d\n,o:%d\n,u:%d\n",a,e,i,o,u);
}
int main(){
    char str[100];
        printf("enter string:");
        gets(str);
        frequency_vowels(str);
}