#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    int i;

    printf("enter a string: ");
    gets(str1);

    for(i=0;str1[i]!='\0';i++){
         str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("original string:%s\n" ,str1);
    printf("copied string:%s\n" ,str2);

    return 0;
    }
