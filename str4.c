#include<stdio.h>
#include<string.h>
#include<ctype.h>
void toToggle(char str[]){
    for(int i=0;str[i]!='\0';i++){
       if(isupper(str[i])){
        str[i]=tolower(str[i]);
       }else if(islower(str[i])){
        str[i]=toupper(str[i]);
       }    
    }
    printf("toggle string:%s", str);
}
int main(){
    char str[100];
    printf("enter string:");
    gets(str);
    toToggle(str);
}