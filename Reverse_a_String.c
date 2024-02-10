#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    scanf("%[^
]s",str);
    int l,i;
    l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}