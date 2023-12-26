#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int count_of_lower=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='a'&& str[i]<='z')
        {
            count_of_lower++;
        }
    }
    printf("%d",count_of_lower);
}