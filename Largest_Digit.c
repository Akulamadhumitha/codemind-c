#include<stdio.h>
int main()
{
    int n,r,larg=0;
    scanf("%d",&n);
    while(n>0) 
    {
        r=n%10; 
        if(larg<r)
    {
        larg=r;
    }
        n=n/10;
     }
     printf("%d",larg);
}