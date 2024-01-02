#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int a;
    a=strcmp(str1,str2);
    if(a==0) printf("Strings are Equal");
    else printf("Strings are not Equal");
	}