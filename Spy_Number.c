#include<stdio.h>
int main()
{
    int n,r,sum=0,prod=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r;
        prod*=r;
    }
	    if(sum==prod)
        {
            printf("Spy Number");
        }
        else
        {
            printf("Not Spy Number");
        }
    
}