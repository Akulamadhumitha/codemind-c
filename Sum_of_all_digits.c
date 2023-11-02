#include<stdio.h>
int main()
{
    int i,n,r,dsum=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        dsum+=r;
        n=n/10;
    }
    printf("%d",dsum);
}