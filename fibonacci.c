#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    	c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        
        
    }
}