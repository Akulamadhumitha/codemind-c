#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int count_vowels=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='U')
        {
            count_vowels++;
        }
    }
    printf("%d",count_vowels);
}