#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int count=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        count++;
    }
    printf("%d",count);
}