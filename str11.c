#include<stdio.h>
#include<string.h>
void printrev_vertically(char s[]){
    strrev(s);
     for(int i=0;s[i]!='\0';i++){
        printf("%c\n", s[i]);
     }
}
int main(){
    char s[100];
    printf("enter string:");
    gets(s);
    printrev_vertically(s);
}