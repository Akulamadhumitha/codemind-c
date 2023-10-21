#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(k*x+(n-k)*x<k*x+(n-k)*y)
    {
        printf("%d",k*x+(n-k)*x);
    }
    else
    {
        printf("%d",k*x+(n-k)*y);
    }
    
}