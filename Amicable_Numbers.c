#include<stdio.h>
int main()
{
	int i,n,m,sum=0;
	scanf("%d%d",&n,&m);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
	     	sum+=i;	
		}
	}
	if(sum==m)
	{
		printf("Amicable");
	}
	else
	{
		printf("Not Amicable");
	}
}