#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char st[100];
    scanf("%[^
]s",st);
    for(int i=0;i<strlen(st);i++)
    {
        st[i]=tolower(st[i]);
    }
    printf("%s",st);
}