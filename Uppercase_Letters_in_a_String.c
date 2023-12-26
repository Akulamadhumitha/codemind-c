#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int count_of_upper=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
        {
            count_of_upper++;
        }
    }
    printf("%d",count_of_upper);
}