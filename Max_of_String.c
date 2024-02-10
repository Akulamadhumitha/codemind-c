#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i;
    char max_valued=str[0];
    for(i=1;str[i]!=NULL;i++)
    {
        if(str[i]>max_valued){
            max_valued=str[i];
        }
    }
    printf("%c",max_valued);
}