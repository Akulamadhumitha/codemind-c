#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if((i*b)%a==0)
        {
            break;
        }
    }
    printf("%d",(a*b)/(i*b));
}