#include<stdio.h>
int main()
{
    char st[100];
    scanf("%[^
]s",st);
    int count_of_char=0;
    for(int i=0;st[i]!=NULL;i++)
    {
        count_of_char++;
    }
    printf("%d",count_of_char);
}