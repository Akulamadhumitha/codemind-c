#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if((500-(x*2))+(1000-4*(y+x))>=(1000-(4*y))+(500-2*(x+y)))
    {
        printf("%d",((500-(x*2))+(1000-4*(y+x))));
    }
    else
    {
        printf("%d",((1000-(4*y))+(500-2*(x+y))));
    }
}