#include<stdio.h>
int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int mat1[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}	 
	int r1,c1;
	scanf("%d%d",&r1,&c1);
	int mat2[r1][c1];
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	int sum[r1][c1];
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			sum[i][j]= mat1[i][j] + mat2[i][j];
		}
	}
//printf("sum of two matrices:
");
for(int i=0;i<r1;i++)
{
	for(int j=0;j<c1;j++)
	{
		printf("%d ",sum[i][j]);
	}
	printf("
");
	}	
	
}