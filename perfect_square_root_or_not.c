#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	scanf("%d",&num);
	float fvar=sqrt(num);
	int ivar=fvar;
	printf("%s",ivar==fvar?"True":"False");
	
}